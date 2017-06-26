#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // essa parte deve ser trocada pelos dados obtidos no teste de sintonia

    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();

    // esse é o período de amostragem (escolher conforme tempo de aquisição dos dados)
    sampletime = ui->lineEdit_3->text().toDouble();
    // Estimação da função de transferência (Testadas adequadamente, mas pode ter bugs)
    FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y,U,sampletime);

    //sintonia dos parâmetros do controlador PID (precisam validar se as tabelas estão corretas)
    PID = ControlHandler::tunningIMC(FOP,"PI",4.7);

    openedLoopSimulation();
    //   malha fechada
    closedLoopSimulation();

    std::string str; str << FOP; str += "\nAtraso de Transporte: "; // converte função de transferência para string
    str += QString::number(FOP.getTransportDelay()).toStdString() + "\n"; // converte função de transferência para string
    ui->textEdit->setText(str.c_str()); // mostra ft na tela;
    str.clear(); str << PID; str += "\n"; // Converte função do PID em string
    ui->textEdit->append(str.c_str());
}

void MainWindow::openedLoopSimulation()
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();

    LinAlg::Matrix<double> Ytemp = ModelHandler::c2d(FOP,sampletime).sim(U-U(1,1)); // simula os dados em malha aberta
    Ytemp = (LinAlg::Zeros<double>(1,unsigned(round(FOP.getTransportDelay()/sampletime)))|Ytemp)+Y(1,1); // insere efeito do atraso de transporte

    // Comparar com o Y real;
    Y = Y||Ytemp(1,from(1)-->Y.getNumberOfColumns()); // cria um vetor que será plotado com 2 linhas de cores diferentes no gráfico
    LinAlg::Matrix<double> Utemp = LinAlg::LineVector<double>(0,U.getNumberOfColumns()-1,1)*0.1||LinAlg::LineVector<double>(0,U.getNumberOfColumns()-1,1)*0.1; // cria o vetor de tempo para mostrar no gráfico

    openLoopSimulation = new Plot(Utemp,Y,ui->widget,700,200);    openLoopSimulation->hide();    openLoopSimulation->show();
    openLoopSimulation->setTitle("Comparação entre dados reais e simulados em malha aberta");
    openLoopSimulation->setxLabel("Tempo em segundos");
    openLoopSimulation->setyLabel("Nível em Centímetros");
}

void MainWindow::closedLoopSimulation()
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();
    sampletime = ui->lineEdit_3->text().toDouble();

    LinAlg::Matrix<double> Umf = LinAlg::Zeros<double>(1,U.getNumberOfColumns()+unsigned(round(FOP.getTransportDelay()/sampletime))); // inicializa as matrizes para simulação em malha fechada
    LinAlg::Matrix<double> Ymf = LinAlg::Zeros<double>(1,U.getNumberOfColumns()+unsigned(round(FOP.getTransportDelay()/sampletime)));

    unsigned tam =  unsigned(round(FOP.getTransportDelay()/sampletime))- 1;
    for(unsigned i = 1; i <= U.getNumberOfColumns(); ++i)
    {
        Ymf(1,i) = FOP.sim(Umf(1,i));// simula o sistema em malha fechada
        Umf(1, tam+i) = PID.OutputControl(1,Ymf(1,i)); //simula o cálculo do sinal de controle com atraso de transporte
    }

    LinAlg::Matrix<double> Utemp = LinAlg::LineVector<double>(0,U.getNumberOfColumns()-1,1)*0.1;

    closeLoopSimulation = new Plot(Utemp,Ymf,ui->widget_2,700,200); closeLoopSimulation->hide();    closeLoopSimulation->show();
    closeLoopSimulation->setTitle("Simulação do sistema em malha fechada");
    closeLoopSimulation->setxLabel("Tempo em segundos");
    closeLoopSimulation->setyLabel("Nível em Centímetros");
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(FOP.getTransportDelay() != 0)
    {
        switch (index) {
        case 1:
            PID = ControlHandler::tunningZieglerNichols(FOP, "P");
            break;
        case 2:
            PID =  ControlHandler::tunningCHRServo0OV(FOP, "P");
            break;
        case 3:
            PID = ControlHandler::tunningCHRServo20OV(FOP, "P");
            break;
        case 4:
            PID = ControlHandler::tunningCHRRegulatorio(FOP, "P");
            break;
        case 5:
            PID = ControlHandler::tunningCohenCoon(FOP, "P");
            break;
        case 6:
            PID =  ControlHandler::tunningIAELopes(FOP, "P");
            break;
        case 7:
            PID = ControlHandler::tunningITAELopes(FOP, "P");
            break;
        case 8:
            PID = ControlHandler::tunningIAERovira(FOP, "P");
            break;
        case 9:
            PID = ControlHandler::tunningITAERovira(FOP, "P");
            break;
        case 10:
            PID = ControlHandler::tunningIMC(FOP, "P",ui->horizontalSlider_4->value()/100.0);
            break;
        case 13:
            PID = ControlHandler::tunningZieglerNichols(FOP, "PI");
            break;
        case 14:
            PID =  ControlHandler::tunningCHRServo0OV(FOP, "PI");
            break;
        case 15:
            PID = ControlHandler::tunningCHRServo20OV(FOP, "PI");
            break;
        case 16:
            PID = ControlHandler::tunningCHRRegulatorio(FOP, "PI");
            break;
        case 17:
            PID = ControlHandler::tunningCohenCoon(FOP, "PI");
            break;
        case 18:
            PID =  ControlHandler::tunningIAELopes(FOP, "PI");
            break;
        case 19:
            PID = ControlHandler::tunningITAELopes(FOP, "PI");
            break;
        case 20:
            PID = ControlHandler::tunningIAERovira(FOP, "PI");
            break;
        case 21:
            PID = ControlHandler::tunningITAERovira(FOP, "PI");
            break;
        case 22:
            PID = ControlHandler::tunningIMC(FOP, "PI",ui->horizontalSlider_4->value()/100.0);
            break;
        case 25:
            PID = ControlHandler::tunningZieglerNichols(FOP, "PID");
            break;
        case 26:
            PID =  ControlHandler::tunningCHRServo0OV(FOP, "PID");
            break;
        case 27:
            PID = ControlHandler::tunningCHRServo20OV(FOP, "PID");
            break;
        case 28:
            PID = ControlHandler::tunningCHRRegulatorio(FOP, "PID");
            break;
        case 29:
            PID = ControlHandler::tunningCohenCoon(FOP, "PID");
            break;
        case 30:
            PID =  ControlHandler::tunningIAELopes(FOP, "PID");
            break;
        case 31:
            PID = ControlHandler::tunningITAELopes(FOP, "PID");
            break;
        case 32:
            PID = ControlHandler::tunningIAERovira(FOP, "PID");
            break;
        case 33:
            PID = ControlHandler::tunningITAERovira(FOP, "PID");
            break;
        case 34:
            PID = ControlHandler::tunningIMC(FOP, "PID",ui->horizontalSlider_4->value()/100.0);
            break;
        default:
            break;
        }

        closedLoopSimulation();
        std::string str; str << PID; str += "\n"; // Converte função do PID em string
        ui->textEdit->setText(str.c_str());
    }
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    Y = ui->lineEdit->text().toStdString().c_str();
    U = ui->lineEdit_2->text().toStdString().c_str();

    switch (index) {
    case 1:
        FOP =  ModelHandler::FOPDTCurvaDeReacao(Y, U, sampletime);
        break;
    case 2:
        FOP = ModelHandler::FOPDTZieglerNichols(Y, U, sampletime);
        break;
    case 3:
        FOP = ModelHandler::FOPDTSmith(Y, U, sampletime);
        break;
    case 4:
        FOP = ModelHandler::FOPDTSundaresanKrishnaswamy(Y, U, sampletime);
        break;
    default:
        break;
    }

    openedLoopSimulation();
    std::string str; str << FOP; str += "\nAtraso de Transporte: "; // converte função de transferência para string
    str += QString::number(FOP.getTransportDelay()).toStdString() + "\n"; // converte função de transferência para string
    ui->textEdit->setText(str.c_str()); // mostra ft na tela;
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    Kp = value/100;
    Ki = ui->horizontalSlider_2->value()/100;
    Kd = ui->horizontalSlider_3->value()/100;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    Kp = ui->horizontalSlider->value()/100;
    Ki = value/100;
    Kd = ui->horizontalSlider_3->value()/100;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    Kp = ui->horizontalSlider->value()/100;
    Ki = ui->horizontalSlider_2->value()/100;
    Kd = value/100;
    PID.setParams(Kp,Ki,Kd);
    closedLoopSimulation();
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    PID = ControlHandler::tunningIMC(FOP, "PID",value/100.0);
}
