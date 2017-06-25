#ifndef SETPWMVALUES_H
#define SETPWMVALUES_H

#include <QDialog>

namespace Ui {
class SetPWMValues;
}

class SetPWMValues : public QDialog
{
    Q_OBJECT

public:
    explicit SetPWMValues(QWidget *parent = 0);
    ~SetPWMValues();
    std::string PWMMin = "0";
    std::string PWMMax = "0";
    std::string getPWMMin();
    std::string getPWMMax();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SetPWMValues *ui;
};

#endif // SETPWMVALUES_H
