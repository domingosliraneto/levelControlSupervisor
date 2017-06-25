/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *PortLineEdit;
    QPushButton *ConnectPushButton;
    QPushButton *DisconnectPushButton;
    QPushButton *ClearPushButton;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SendLineEdit;
    QPushButton *SendPushButton;
    QLabel *label_21;
    QWidget *tab_4;
    QWidget *widget_2;
    QWidget *widget_3;
    QTextEdit *textEdit_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_12;
    QLabel *label_22;
    QLabel *label_23;
    QWidget *tab_3;
    QWidget *widERRO_2;
    QLabel *label_11;
    QProgressBar *progressBar_2;
    QWidget *widPWM_2;
    QLabel *label_13;
    QPushButton *pushButton_3;
    QSlider *horizontalSlider;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_38;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QCheckBox *checkBox;
    QPushButton *pushButton_4;
    QWidget *tab_2;
    QWidget *widSINAL;
    QWidget *widPWM;
    QWidget *widERRO;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QLabel *label_10;
    QWidget *widget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLineEdit *kp;
    QLineEdit *ki;
    QLineEdit *kd;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *line_7;
    QWidget *widERRO_3;
    QLabel *label_17;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *ErroLineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *SinalLineEdit;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *PWMLineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *TempLineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_9;
    QLineEdit *TempoLineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1368, 765);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(71, 71, 71);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1351, 631));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QStringLiteral("border-bottom-color: rgb(0, 0, 127);"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 1291, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout->addWidget(label);

        PortLineEdit = new QLineEdit(layoutWidget);
        PortLineEdit->setObjectName(QStringLiteral("PortLineEdit"));
        PortLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(PortLineEdit);

        ConnectPushButton = new QPushButton(layoutWidget);
        ConnectPushButton->setObjectName(QStringLiteral("ConnectPushButton"));
        ConnectPushButton->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout->addWidget(ConnectPushButton);

        DisconnectPushButton = new QPushButton(layoutWidget);
        DisconnectPushButton->setObjectName(QStringLiteral("DisconnectPushButton"));
        DisconnectPushButton->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout->addWidget(DisconnectPushButton);

        ClearPushButton = new QPushButton(layoutWidget);
        ClearPushButton->setObjectName(QStringLiteral("ClearPushButton"));
        ClearPushButton->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout->addWidget(ClearPushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        SendLineEdit = new QLineEdit(layoutWidget);
        SendLineEdit->setObjectName(QStringLiteral("SendLineEdit"));
        SendLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(SendLineEdit);

        SendPushButton = new QPushButton(layoutWidget);
        SendPushButton->setObjectName(QStringLiteral("SendPushButton"));
        SendPushButton->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout_2->addWidget(SendPushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(20, 20, 1291, 41));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_21->setFont(font);
        label_21->setStyleSheet(QLatin1String("background-color: rgb(185, 63, 14);\n"
"border-color: rgb(0, 0, 0);"));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        widget_2 = new QWidget(tab_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(50, 50, 481, 201));
        widget_3 = new QWidget(tab_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(49, 290, 481, 191));
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(650, 330, 651, 241));
        textEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(900, 100, 151, 22));
        comboBox_2 = new QComboBox(tab_4);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(650, 100, 151, 22));
        comboBox_3 = new QComboBox(tab_4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(1150, 100, 151, 22));
        lineEdit = new QLineEdit(tab_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 530, 113, 20));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 530, 113, 20));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(400, 530, 113, 20));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 510, 16, 16));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(280, 510, 16, 16));
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(450, 510, 16, 16));
        label_23->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widERRO_2 = new QWidget(tab_3);
        widERRO_2->setObjectName(QStringLiteral("widERRO_2"));
        widERRO_2->setEnabled(true);
        widERRO_2->setGeometry(QRect(10, 50, 531, 181));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(670, 10, 31, 16));
        progressBar_2 = new QProgressBar(tab_3);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(570, 40, 231, 401));
        progressBar_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        progressBar_2->setValue(24);
        progressBar_2->setOrientation(Qt::Vertical);
        widPWM_2 = new QWidget(tab_3);
        widPWM_2->setObjectName(QStringLiteral("widPWM_2"));
        widPWM_2->setGeometry(QRect(10, 280, 531, 151));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(240, 250, 31, 16));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 520, 121, 51));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));
        horizontalSlider = new QSlider(tab_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(150, 530, 351, 31));
        horizontalSlider->setMaximum(198);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksAbove);
        horizontalSlider->setTickInterval(0);
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(320, 500, 47, 13));
        label_19 = new QLabel(tab_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(520, 530, 47, 31));
        label_20 = new QLabel(tab_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(580, 530, 47, 31));
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(240, 20, 31, 16));
        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(830, 40, 491, 171));
        textEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit_4 = new QTextEdit(tab_3);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(830, 270, 491, 171));
        textEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        checkBox = new QCheckBox(tab_3);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(660, 526, 81, 41));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(70, 450, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widSINAL = new QWidget(tab_2);
        widSINAL->setObjectName(QStringLiteral("widSINAL"));
        widSINAL->setGeometry(QRect(10, 40, 531, 221));
        widPWM = new QWidget(tab_2);
        widPWM->setObjectName(QStringLiteral("widPWM"));
        widPWM->setGeometry(QRect(550, 40, 531, 221));
        widERRO = new QWidget(tab_2);
        widERRO->setObjectName(QStringLiteral("widERRO"));
        widERRO->setEnabled(true);
        widERRO->setGeometry(QRect(550, 290, 531, 211));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(790, 20, 31, 16));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 270, 51, 16));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 20, 31, 16));
        progressBar = new QProgressBar(tab_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(1100, 40, 231, 461));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1200, 20, 31, 16));
        widget = new QWidget(tab_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 510, 1361, 91));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(-10, 50, 1321, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));

        horizontalLayout_3->addWidget(pushButton);

        kp = new QLineEdit(layoutWidget1);
        kp->setObjectName(QStringLiteral("kp"));
        kp->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(kp);

        ki = new QLineEdit(layoutWidget1);
        ki->setObjectName(QStringLiteral("ki"));
        ki->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(ki);

        kd = new QLineEdit(layoutWidget1);
        kd->setObjectName(QStringLiteral("kd"));
        kd->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(kd);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(270, 30, 16, 16));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(690, 30, 16, 16));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1100, 30, 16, 16));
        line_7 = new QFrame(tab_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(0, 520, 1341, 20));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        widERRO_3 = new QWidget(tab_2);
        widERRO_3->setObjectName(QStringLiteral("widERRO_3"));
        widERRO_3->setEnabled(true);
        widERRO_3->setGeometry(QRect(10, 290, 531, 211));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(770, 270, 71, 16));
        tabWidget->addTab(tab_2, QString());
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 650, 1241, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_5);

        ErroLineEdit = new QLineEdit(layoutWidget2);
        ErroLineEdit->setObjectName(QStringLiteral("ErroLineEdit"));
        ErroLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(ErroLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        SinalLineEdit = new QLineEdit(layoutWidget2);
        SinalLineEdit->setObjectName(QStringLiteral("SinalLineEdit"));
        SinalLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(SinalLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_7);

        PWMLineEdit = new QLineEdit(layoutWidget2);
        PWMLineEdit->setObjectName(QStringLiteral("PWMLineEdit"));
        PWMLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(PWMLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        TempLineEdit = new QLineEdit(layoutWidget2);
        TempLineEdit->setObjectName(QStringLiteral("TempLineEdit"));
        TempLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(TempLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_9);

        TempoLineEdit = new QLineEdit(layoutWidget2);
        TempoLineEdit->setObjectName(QStringLiteral("TempoLineEdit"));
        TempoLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(TempoLineEdit);


        horizontalLayout_4->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 650, 101, 61));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(185, 63, 14);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1368, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Serial Controller", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", " Porta:  ", Q_NULLPTR));
        PortLineEdit->setText(QApplication::translate("MainWindow", "COM5", Q_NULLPTR));
        ConnectPushButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        DisconnectPushButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        ClearPushButton->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        SendPushButton->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", " SISTEMA  DE  EXPERIMENTA\303\207\303\203O  DE  CONTROLE  DE  N\303\215VEL PARA  L\303\215QUIDOS  MULTIVARI\303\201VEL", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Serial", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ZN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CHR", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CC", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IAE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ITAE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IMC", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "P", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PI", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PID", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Grafico", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Grafico de Ziegler-Nichols", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Smith", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sundaresen e Krishnaswany", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", " kp", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", " ki", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", " kd", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Simulation", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Nivel", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Iniciar", Q_NULLPTR));
        label_18->setText(QString());
        label_19->setText(QApplication::translate("MainWindow", "Contador:", Q_NULLPTR));
        label_20->setText(QString());
        label_38->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "Automatico", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "OpenedLoop", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Erro Atual", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nivel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Kp", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Ki", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Kd", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Erro Passado", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "ClosedLoop", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Erro", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Sinal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nivel (cm)", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Tempo (s)", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Aberta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
