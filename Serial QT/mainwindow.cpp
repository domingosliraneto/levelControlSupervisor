#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<windows.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(updateSliderOnChanged(int)));

    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}

MainWindow::~MainWindow()
{
    delete ui;
    if (serial->isOpen())
        serial->close();
}
void MainWindow::updateSliderOnChanged(int position) {
    ui->label_18->setText(QString::number(position));
}

double MainWindow::modulo(double numero){
    if(numero < 0){
        return numero*(-1);
    }else{
        return numero;
    }
}

void MainWindow::delay(int second)
{
    QTime dieTime= QTime::currentTime().addSecs(second);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::on_ConnectPushButton_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");

    serial->setPortName(ui->PortLineEdit->text());
    serial->setBaudRate(serial->Baud4800);
    serial->setDataBits(serial->Data8);
    serial->setParity(serial->NoParity);
    serial->setStopBits(serial->OneStop);
    serial->setFlowControl(serial->NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)){
        QMessageBox msg; msg.setText("Device Connected!");
        msg.exec();        
        setLoop("open");
    } else {
      QMessageBox::critical(this,tr("Error"), serial->errorString());
    }

}

void MainWindow::on_DisconnectPushButton_clicked()
{
    if (serial->isOpen())
        serial->close();

    QMessageBox msg; msg.setText("Disconnected!");
    msg.exec();
}

void MainWindow::readData()
{

    QByteArray data = serial->readAll();
    std::string c = QString(data).toStdString();

    ui->textEdit->setText(ui->textEdit->toPlainText()+data);

    ui->textEdit->verticalScrollBar()->setSliderPosition(ui->textEdit->verticalScrollBar()->maximum());



   if(c.find('\r') == -1)
    {
        tempSerialData += c;
    }
    else
    {
        tempSerialData += c;

        std::cout << "M: " << malha << endl;

        if(malha){
            double error = QString(tempSerialData.substr(0, 6).c_str()).toDouble();
            if(error > 127.0)
                error -= 255.0;
            tempSerialData.erase(0, 6);
            QString errorstring = QString::number(error,'g',6);
            ui->ErroLineEdit->setText(errorstring);

            double sinal = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString sinalstring = QString::number(sinal,'g',6);
            ui->SinalLineEdit->setText(sinalstring);

            double pwm = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString pwmstring = QString::number(pwm,'g',6);
            ui->PWMLineEdit->setText(pwmstring);

            double nivel = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            QString tempstring = QString::number(nivel,'g',6);
            ui->TempLineEdit->setText(tempstring);

            double time = QString(tempSerialData.substr(0, 7).c_str()).toDouble();
            QString timestring = QString::number(time,'g',6);
            ui->TempoLineEdit->setText(timestring);

            pErro->realTimeDataUpdate(time,error);
            pSinal->realTimeDataUpdate(time,nivel);
            pPwm->realTimeDataUpdate(time,pwm);

            tempSerialData.clear();
            int pos = c.find('\r');
            tempSerialData = c.substr(pos+1);

            int nivelt = ((int) nivel * 100)/30;
            ui->progressBar->setValue(nivelt);
        }else{

            double pwm = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            pwmstring = QString::number(pwm,'g',5);
            ui->PWMLineEdit->setText(pwmstring);

            double nivel = QString(tempSerialData.substr(0, 5).c_str()).toDouble();
            tempSerialData.erase(0, 5);
            tempstring = QString::number(nivel,'g',6);
            ui->TempLineEdit->setText(tempstring);

            double time = QString(tempSerialData.substr(0, 7).c_str()).toDouble();
            QString timestring = QString::number(time,'g',6);
            ui->TempoLineEdit->setText(timestring);

            tempSerialData.clear();
            int pos = c.find('\r');
            tempSerialData = c.substr(pos+1);

            pSinal->realTimeDataUpdate(time,nivel);
            pPwm->realTimeDataUpdate(time,pwm);

            int nivelt = ((int) nivel * 100)/30;
            ui->progressBar->setValue(nivelt);

            if(isMinSetted || isMaxSetted){
                stabilize(nivel);
            }

        }
    }
}

void MainWindow::stabilize(double nivel)
{
    int limitTime = 50;
    Yatual = nivel;

    ui->label_20->setText(std::to_string(contador).c_str());

    if(modulo(Yanterior - Yatual) < 3){
        contador++;
    }else{
        contador = 0;
    }
    if(contador > limitTime){
        if(isMinSetted)
        {
            setPWM(PWMMax,"max");
        }else if(isMaxSetted){
            setPWM("0","real");
            setPWM("0","real");
            std::string str; str << Y;
            ui->textEdit_3->setText(str.c_str());
            str.clear();
            str << U;
            ui->textEdit_4->setText(str.c_str());
        }
    }
    if(isMinSetted && contador == limitTime-1){
        Y = Y| LinAlg::Matrix<double>(std::stod(tempstring.toStdString().c_str()));
        U = U| LinAlg::Matrix<double>(std::stod(pwmstring.toStdString().c_str()));
    }else if(isMaxSetted){
        if(tempstring.toStdString().c_str() != "0" && pwmstring.toStdString().c_str() != "0"){
            Y = Y| LinAlg::Matrix<double>(std::stod(tempstring.toStdString().c_str()));
            U = U| LinAlg::Matrix<double>(std::stod(pwmstring.toStdString().c_str()));
        }
    }

    Yanterior = Yatual;
}

void MainWindow::setLoop(std::string loop)
{
    if(loop == "open"){
        loop = "a";
        malha = false;
        ui->pushButton_2->setText("Closed");
    }else if(loop == "close"){
        loop = "f";
        malha = true;
        ui->pushButton_2->setText("Opened");
    }
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QByteArray encodedString = codec->fromUnicode(loop.c_str());
    serial->write(encodedString);
    delay(delayTime);
    encodedString = codec->fromUnicode(" ");
    serial->write(encodedString);
}

void MainWindow::setPWM(std::string pwm, std::string type = "real")
{
    if(type == "min"){
        isMinSetted = true;
        isMaxSetted = false;
    }else if(type == "max"){
        isMaxSetted = true;
        isMinSetted = false;
    }
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");

    for(unsigned i = 0; i < pwm.length(); ++i){
        std::string send; send = pwm[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(delayTime);
    }
    QByteArray encodedString = codec->fromUnicode("m");
    serial->write(encodedString);
    delay(delayTime);
    encodedString = codec->fromUnicode(" ");
    serial->write(encodedString);
}

void MainWindow::setSetpoint(std::string setpoint){
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    for(unsigned i = 0; i < setpoint.length(); ++i){
        std::string send; send = setpoint[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(delayTime);
    }
    QByteArray encodedString = codec->fromUnicode(" ");
    serial->write(encodedString);
}


void MainWindow::setMalhaFechada(){
    setLoop("close");
    setPIDParametros();
}

void MainWindow::setPIDParametros()
{
    LinAlg::Matrix<double> Y = "4.000,5.000,5.000,5.000,4.000,6.000,5.000,5.000,6.000,5.000,7.000,5.000,6.000,7.000,6.000,7.000,7.000,8.000,8.000,7.000,9.000,8.000,8.000,8.000,8.000,9.000,9.000,8.000,9.000,9.000,9.000,9.000,10.000,9.000,10.000,10.000,10.000,10.000,11.000,11.000,10.000,10.000,11.000,11.000,10.000,11.000,11.000,12.000,11.000,10.000,12.000,12.000,11.000,14.000,14.000,14.000";
    LinAlg::Matrix<double> U = "100.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000,170.000";

    ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y,U,1.0);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTZieglerNichols(Y,U,1);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTCurvaDeReacao(Y,U,1);
//            ModelHandler::TransferFunction<double> FOP = ModelHandler::FOPDTSmith(Y,U,1);
    ControlHandler::PID<double> PID = ControlHandler::tunningZieglerNichols(FOP,"PID");
    LinAlg::Matrix<double> PIDParametros = PID.getParams();
    std::string kp = std::to_string(PIDParametros(1,1));
    std::string ki = std::to_string(PIDParametros(1,2));
    std::string kd = std::to_string(PIDParametros(1,3));
    sendPID(kp,ki,kd);

    LinAlg::Matrix<double> Ytemp = FOP.sim(U-U(1,1));
    Ytemp = (LinAlg::Zeros<double>(1,unsigned(FOP.getTransportDelay()/FOP.getSampleTime()))|Ytemp)+Y(1,1);
    // Comparar com o Y real;
    //closeLoopSimulation = new Plot(Y||Ytemp,U||U,ui->widPWM_2);
}


void MainWindow::sendPID(std::string kp, std::string ki, std::string kd)
{    
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    //envio de kp
    for(unsigned i = 0; i < kp.length(); ++i){
        std::string send; send = kp[i];

        QByteArray encodedString = codec->fromUnicode(send.c_str());
        serial->write(encodedString);
        delay(delayTime);
    }
    QByteArray encodedString = codec->fromUnicode("p");
    serial->write(encodedString);
    delay(delayTime);

    //envio de ki
    for(unsigned i = 0; i < ki.length(); ++i){
        std::string send; send = ki[i];

        QByteArray encodedString1 = codec->fromUnicode(send.c_str());
        serial->write(encodedString1);
        delay(delayTime);
    }
    QByteArray encodedString1 = codec->fromUnicode("i");
    serial->write(encodedString1);
    delay(delayTime);

    //envio de kd
    for(unsigned i = 0; i < kd.length(); ++i){
        std::string send; send = kd[i];

        QByteArray encodedString2 = codec->fromUnicode(send.c_str());
        serial->write(encodedString2);
        delay(delayTime);
    }
    QByteArray encodedString2 = codec->fromUnicode("d");
    serial->write(encodedString2);
}


void MainWindow::on_ClearPushButton_clicked()
{
    ui->textEdit->clear();
    ui->ErroLineEdit->clear();
    ui->SinalLineEdit->clear();
    ui->PWMLineEdit->clear();
    ui->TempLineEdit->clear();
    ui->TempoLineEdit->clear();
    ui->PortLineEdit->clear();
    pSinal = new PlotHandler::plot<double>(ui->widSINAL);
    pErro  = new PlotHandler::plot<double>(ui->widERRO);
    //pTemp = new PlotHandler::plot<double>(ui->widTEMP);
    pPwm   = new PlotHandler::plot<double>(ui->widPWM);
}

void MainWindow::tunning()
{
    SetPWMValues SetPWMValuesDialog;
    SetPWMValuesDialog.setModal(true);
    SetPWMValuesDialog.exec();
    PWMMin = SetPWMValuesDialog.getPWMMin();
    PWMMax = SetPWMValuesDialog.getPWMMax();
    setPWM(PWMMin,"min");
}



void MainWindow::on_SendPushButton_clicked()
{    
    std::string str = ui->SendLineEdit->text().toStdString();
    setSetpoint(str);
}


void MainWindow::on_pushButton_clicked()
{    
    sendPID(ui->kp->text().toStdString(),ui->ki->text().toStdString(),ui->kd->text().toStdString());
}

void MainWindow::on_pushButton_4_clicked()
{
    this->setPIDParametros();
}

void MainWindow::on_pushButton_2_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    if(malha){
        setLoop("open");
        on_ClearPushButton_clicked();
    }else{
        setLoop("close");
        on_ClearPushButton_clicked();
    }

}


void MainWindow::on_pushButton_3_clicked()
{    
    std::string pwm = std::to_string(ui->horizontalSlider->value()).c_str();
    setPWM(pwm,"real");

}

void MainWindow::on_horizontalSlider_sliderMoved(int position){}
void MainWindow::on_progressBar_destroyed(){}
void MainWindow::on_pushButton_2_toggled(bool checked){}





void MainWindow::on_pushButton_5_clicked()
{
    tunning();
}

void MainWindow::on_pushButton_6_clicked()
{
    LinAlg::Matrix<double> Y = "0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0.198013266932447,0.392105608476768,0.582354664157513,0.768836536133642,0.951625819640405,1.13079563282843,1.30641764601194,1.47856211033789,1.64729788588728,1.81269246922018,1.97481202037522,2.13372138933447,2.28948414196434,2.44216258544275,2.59181779318282,2.73850962926309,2.88229677237390,3.02323673928969,3.16138590787644,3.29679953964361,3.42953180184943,3.55963578916859,3.68716354493074,3.81216608193859,3.93469340287367,4.05479452029806,4.17251747626010,4.28790936151185,4.40101633434598,4.51188363905974,4.62055562405326,4.72707575956952,4.83148665508301,4.93383007634411,5.03414696208591,5.13247744040029,5.22886084478966,5.32333572990091,5.41593988694777,5.50671035882779,5.59568345494001,5.68289476570921,5.76837917682251,5.85217088318419,5.93430340259401,6.01480958915486,6.09372164641479,6.17107114024888,6.24688901148601,6.32120558828558,6.39405059826922,6.46545318041220,6.53544189669943,6.60404474355061,6.67128916301921,6.73720205376961,6.80180978183696,6.86513819117395,6.92721261398869,6.98805788087798,7.04769833075986,7.10615782060950,7.16345973500230,7.21962699546806,7.27468206965987,7.32864698034150,7.38154331419674,7.43339223046444,7.48421446940244,7.53403036058394,7.58285983102964,7.63072241317878,7.67763725270241,7.72362311616187,7.76869839851570,7.81288113047785,7.85618898573022,7.89863928799235,7.94024901795117,7.98103482005345,8.02101300916385,8.06019957709108,8.09861019898479,8.13626023960590,8.17316475947265,8.20933852088506,8.24479599383003,8.27955136176949,8.31361852731404,8.34701111778413,8.37974249066119,8.41182573893079,8.44327369632002,8.47409894243116,8.50431380777365,8.53393037869650,8.56296050222297,8.59141579078955,8.61930762689107,8.64664716763387,8.67344534919878,8.69971289121574,8.72546030105179,8.75069787801417,8.77543571747018,8.79968371488543,8.82345156978221,8.84674878961937,8.86958469359550,8.89196841637666,8.91390891175042,8.93541495620747,8.95649515245235,8.97715793284462,8.99741156277196,9.01726414395638,9.03672361769507,9.05579776803697,9.07449422489656,9.09282046710587,9.11078382540613,9.12839148538018,9.14565049032678,9.16256774407803,9.17915001376101,9.19540393250467,9.21133600209324,9.22695259556699,9.24225995977154,9.25726421785665,9.27197137172563,9.28638730443613,9.30051778255344,9.31436845845721,9.32794487260249,9.34125245573596,9.35429653106831,9.36708231640358,9.37961492622641,9.39189937374781,9.40394057291060,9.41574334035498,9.42731239734532,9.43865237165865,9.44976779943592,9.46066312699643,9.47134271261649,9.48181082827273,9.49207166135101,9.50212931632135,9.51198781637986,9.52165110505801,9.53112304780011,9.54040743350955,9.54950797606441,9.55842831580306,9.56717202098033,9.57574258919488,9.58414344878826,9.59237796021633,9.60044941739345,9.60836104901012,9.61611601982447,9.62371743192823,9.63116832598759,9.63847168245953,9.64563042278400,9.65264741055261,9.65952545265400,9.66626730039673,9.67287565060979,9.67935314672138,9.68570237981631,9.69192588967248,9.69802616577681,9.70400564832107,9.70986672917802,9.71561175285815,9.72124301744752,9.72676277552707,9.73217323507361,9.73747656034311,9.74267487273639,9.74777025164772,9.75276473529660,9.75766032154308,9.76245896868694,9.76716259625102,9.77177308574906,9.77629228143833,9.78072199105737,9.78506398654909,9.78932000476957,9.79349174818286,9.79758088554194,9.80158905255629,9.80551785254613,9.80936885708387,9.81314360662266,9.81684361111265,9.82047035060496,9.82402527584375,9.82750980884653,9.83092534347293,9.83427324598238,9.83755485558049,9.84077148495487,9.84392442080016,9.84701492433273,9.85004423179521,9.85301355495097,9.85592408156887,9.85877697589835,9.86157337913519,9.86431440987798,9.86700116457555,9.86963471796561,9.87221612350463,9.87474641378925,9.87722660096931,9.87965767715275,9.88204061480248,9.88437636712531,9.88666586845332,9.88891003461757,9.89110976331445,9.89326593446476,9.89537941056572,9.89745103703595,9.89948164255365,9.90147203938812,9.90342302372461,9.90533537598289,9.90720986112934,9.90904722898303,9.91084821451559,9.91261353814526,9.91434390602501,9.91604001032508,9.91770252950979,9.91933212860899,9.92092945948405,9.92249516108862,9.92402985972421,9.92553416929075,9.92700869153210,9.92845401627684,9.92987072167414,9.93125937442503,9.93262053000914,9.93395473290684,9.93526251681710,9.93654440487090,9.93780090984057,9.93903253434483,9.94023977104993,9.94142310286664,9.94258300314345,9.94371993585595,9.94483435579238,9.94592670873558,9.94699743164129,9.94804695281294,9.94907569207300,9.95008406093089,9.95107246274760,9.95204129289703,9.95299093892416,9.95392178070006,9.95483419057386,9.95572853352168,9.95660516729260,9.95746444255184,9.95830670302095,9.95913228561535,9.95994152057908,9.96073473161693,9.96151223602388,9.96227434481207,9.96302136283516,9.96375358891033,9.96447131593778,9.96517483101787,9.96586441556604,9.96654034542528,9.96720289097656,9.96785231724692,9.96848888401555,9.96911284591763,9.96972445254624,9.97032394855218,9.97091157374187,9.97148756317320,9.97205214724962,9.97260555181231,9.97314799823045,9.97367970348986,9.97420088027972,9.97471173707770,9.97521247823333,9.97570330404975,9.97618441086382,9.97665599112470,9.97711823347077,9.97757132280513,9.97801544036956,9.97845076381701,9.97887746728266,9.97929572145359,9.97970569363703,9.98010754782734,9.98050144477154,9.98088754203366,9.98126599405777,9.98163695222970,9.98200056493768,9.98235697763165,9.98270633288142,9.98304877043376,9.98338442726825,9.98371343765211,9.98403593319387,9.98435204289605,9.98466189320675,9.98496560807021,9.98526330897645,9.98555511500979,9.98584114289652,9.98612150705163,9.98639631962451,9.98666569054386,9.98692972756163,9.98718853629615,9.98744222027437,9.98769088097326,9.98793461786041,9.98817352843384,9.98840770826095,9.98863725101679,9.98886224852154,9.98908279077720,9.98929896600360,9.98951086067371,9.98971855954824,9.98992214570951,9.99012170059468,9.99031730402838,9.99050903425458,9.99069696796794,9.99088118034445,9.99106174507150,9.99123873437741,9.99141221906025,9.99158226851621,9.99174895076733,9.99191233248875,9.99207247903533,9.99222945446782,9.99238332157849,9.99253414191623,9.99268197581119,9.99282688239890,9.99296891964393,9.99310814436307,9.99324461224806,9.99337837788787,9.99350949479055,9.99363801540461,9.99376399114000,9.99388747238870,9.99400850854485,9.99412714802453,9.99424343828512,9.99435742584427,9.99446915629851,9.99457867434154,9.99468602378201,9.99479124756114,9.99489438776985,9.99499548566559,9.99509458168886,9.99519171547941,9.99528692589203,9.99538025101217,9.99547172817112,9.99556139396096,9.99564928424920,9.99573543419313,9.99581987825388,9.99590265021019,9.99598378317196,9.99606330959344,9.99614126128627,9.99621766943216,9.99629256459540,9.99636597673504,9.99643793521692,9.99650846882539,9.99657760577484,9.99664537372096,9.99671179977185,9.99677691049880,9.99684073194698,9.99690328964580,9.99696460861920,9.99702471339557,9.99708362801763,9.99714137605202,9.99719798059870,9.99725346430027,9.99730784935093,9.99736115750544,9.99741341008777,9.99746462799964,9.99751483172891,9.99756404135773,9.99761227657062,9.99765955666230,9.99770590054544,9.99775132675820,9.99779585347169,9.99783949849718,9.99788227929325,9.99792421297281,9.99796531630988,9.99800560574635,9.99804509739852,9.99808380706358,9.99812175022593,9.99815894206331,9.99819539745298,9.99823113097756,9.99826615693096,9.99830048932400,9.99833414189011,9.99836712809077,9.99839946112089,9.99843115391412,9.99846221914800,9.99849266924903,9.99852251639767,9.99855177253316,9.99858044935836,9.99860855834437,9.99863611073517,9.99866311755207,9.99868958959818,9.99871553746264,9.99874097152497,9.99876590195912,9.99879033873760,9.99881429163544,9.99883777023413,9.99886078392542,9.99888334191509,9.99890545322663,9.99892712670487,9.99894837101949,9.99896919466849,9.99898960598162,9.99900961312366,9.99902922409775,9.99904844674854,9.99906728876534,9.99908575768521,9.99910386089596,9.99912160563912,9.99913899901283,9.99915604797466";
    LinAlg::Matrix<double> U = "0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1";

    ModelHandler::TransferFunction<double> FOP[4];

    FOP[0] = ModelHandler::FOPDTSundaresanKrishnaswamy(Y,U,1.0);
    FOP[1] = ModelHandler::FOPDTZieglerNichols(Y,U,1.0);
    FOP[2] = ModelHandler::FOPDTCurvaDeReacao(Y,U,1.0);
    FOP[3] = ModelHandler::FOPDTSmith(Y,U,1.0);

    ControlHandler::PID<double> PID[10];

    PID[0] = ControlHandler::tunningZieglerNichols(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[1] = ControlHandler::tunningCHRRegulatorio(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[2] = ControlHandler::tunningCHRServo0OV(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[3] = ControlHandler::tunningCHRServo20OV(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[4] = ControlHandler::tunningCohenCoon(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[5] = ControlHandler::tunningIAELopes(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[6] = ControlHandler::tunningIAERovira(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[7] = ControlHandler::tunningIMC(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str(),0.02);
    PID[8] = ControlHandler::tunningITAELopes(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());
    PID[9] = ControlHandler::tunningITAERovira(FOP[ui->comboBoxModel->currentIndex()],ui->comboBoxControl->currentText().toStdString().c_str());

    LinAlg::Matrix<double> PIDParametros = PID[ui->comboBoxMethod->currentIndex()].getParams();

    std::string kp = std::to_string(PIDParametros(1,1));
    std::string ki = std::to_string(PIDParametros(1,2));
    std::string kd = std::to_string(PIDParametros(1,3));
//    sendPID(kp,ki,kd);

    std::cout << "kp: " << kp << std::endl << "ki: " << ki << std::endl << "kd: " << kd << std::endl;
    //LinAlg::Matrix<double> Ytemp = FOP.sim(U-U(1,1));
    //Ytemp = (LinAlg::Zeros<double>(1,unsigned(FOP.getTransportDelay()/FOP.getSampleTime()))|Ytemp)+Y(1,1);
    // Comparar com o Y real;
    //closeLoopSimulation = new Plot(Y||Ytemp,U||U,ui->widPWM_2);
}
