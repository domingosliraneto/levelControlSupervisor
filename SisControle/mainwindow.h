#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "SistemasdeControle/headers/controlLibs/pid.h"
#include "SistemasdeControle/headers/ImageProcessing/grayimage.h"
#include "SistemasdeControle/headers/modelLibs/transferfunction.h"
#include "SistemasdeControle/headers/modelLibs/statespace.h"
#include "SistemasdeControle/headers/graphicLibs/plot/plot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void closedLoopSimulation();
    void openedLoopSimulation();


private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    LinAlg::Matrix<double> U, Y;
    ModelHandler::TransferFunction<double> FOP;
    ControlHandler::PID<double> PID;
    Plot *openLoopSimulation, *closeLoopSimulation;
    double Kp, Ki, Kd, sampletime;
};

#endif // MAINWINDOW_H
