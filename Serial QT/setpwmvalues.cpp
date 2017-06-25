#include "setpwmvalues.h"
#include "ui_setpwmvalues.h"
#include <iostream>

SetPWMValues::SetPWMValues(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetPWMValues)
{
    ui->setupUi(this);
}

SetPWMValues::~SetPWMValues()
{
    delete ui;
}

void SetPWMValues::on_pushButton_clicked()
{
    PWMMin = std::to_string(ui->pmwMin->value()).c_str();
    PWMMax = std::to_string(ui->pwmMax->value()).c_str();
    std::cout << PWMMin << std::endl;
    this->close();
}

std::string SetPWMValues::getPWMMin()
{
    return PWMMin;
}

std::string SetPWMValues::getPWMMax()
{
    return PWMMax;
}

void SetPWMValues::on_pushButton_2_clicked()
{
    this->close();
}
