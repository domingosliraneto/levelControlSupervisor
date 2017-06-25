#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include "SistemasdeControle/headers/graphicLibs/plot.h"
#include "SistemasdeControle/headers/primitiveLibs/polynom.h"
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include "SistemasdeControle/headers/controlLibs/pid.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/graphicLibs/plot/callout.h"
#include "SistemasdeControle/headers/graphicLibs/plot/plot.h"
#include "setpwmvalues.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void readData();
    void delay(int second);
    void setSliderValue(int);
    void setMaxPWM();
    void setMinPWM();
    QString pwmstring,tempstring;

private slots:
    void on_ConnectPushButton_clicked();

    void on_DisconnectPushButton_clicked();

    void on_ClearPushButton_clicked();

    void on_SendPushButton_clicked();

    void on_progressBar_destroyed();


    void on_pushButton_clicked();

    void on_pushButton_2_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void updateSliderOnChanged(int position);

    void setMalhaFechada();

    void setPIDParametros();

    void sendPID(std::string kp, std::string ki, std::string kd);

    double modulo(double numero);

    void on_pushButton_4_clicked();

    void setLoop(std::string loop);

    void setPWM(std::string pwm, std::string type);

    void setSetpoint(std::string setpoint);

    void tunning();

    void on_pushButton_5_clicked();

    void stabilize(double nivel);

    void on_pushButton_6_clicked();

private:

    bool malha = true, setMax = true, isMinSetted = false, isMaxSetted = false;
    int contador = 0, delayTime = 1;
    Ui::MainWindow *ui;
    QSerialPort *serial;
    std::string tempSerialData;
    double Yatual, Yanterior;
    LinAlg::Matrix<double> Y, U;
    PlotHandler::plot<double> *pSinal, *pTemp, *pPwm, *pErro;
    std::string PWMMin = "0";
    std::string PWMMax = "0";
    //Plot *closeLoopSimulation;

};

#endif // MAINWINDOW_H
