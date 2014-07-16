/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Sep 13 17:43:20 2011
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionHelp_File;
    QAction *actionAbout_Teaching_Control_Panel;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_4;
    QDial *dial;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QFrame *line_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(544, 479);
        MainWindow->setMinimumSize(QSize(1, 1));
        MainWindow->setMaximumSize(QSize(12412515, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cpanel"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionHelp_File = new QAction(MainWindow);
        actionHelp_File->setObjectName(QString::fromUtf8("actionHelp_File"));
        actionAbout_Teaching_Control_Panel = new QAction(MainWindow);
        actionAbout_Teaching_Control_Panel->setObjectName(QString::fromUtf8("actionAbout_Teaching_Control_Panel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../control_panel_access.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Teaching_Control_Panel->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 40, 151, 121));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(212, 212, 212, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(233, 233, 233, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(106, 106, 106, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(141, 141, 141, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        groupBox->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 111, 17));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 70, 16, 17));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 70, 102, 22));
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 230, 111, 181));
        groupBox_3->setFont(font);
        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 150, 81, 23));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../KEYBOARD MOUSE - SETTINGS.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 70, 81, 21));
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 100, 81, 21));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 30, 91, 22));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 230, 121, 181));
        groupBox_4->setFont(font);
        groupBox_4->setAutoFillBackground(false);
        dial = new QDial(groupBox_4);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(20, 30, 81, 91));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(167, 167, 167, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(251, 251, 251, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(209, 209, 209, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(83, 83, 83, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(111, 111, 111, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush12(QColor(211, 211, 211, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dial->setPalette(palette1);
        dial->setCursor(QCursor(Qt::PointingHandCursor));
        dial->setMinimum(1);
        dial->setMaximum(9);
        dial->setInvertedControls(false);
        dial->setWrapping(false);
        dial->setNotchesVisible(true);
        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 150, 75, 23));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../1315687542_lightbulb_48.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 115, 10, 10));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 115, 10, 10));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 60, 10, 11));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(56, 20, 10, 10));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(105, 60, 10, 10));
        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(15, 118, 31, 33));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(80, 124, 36, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 380, 131, 23));
        pushButton_2->setFont(font);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/lock"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon4);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(320, 40, 131, 121));
        groupBox_2->setFont(font);
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 30, 101, 17));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 60, 91, 17));
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(20, 90, 82, 17));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 20, 511, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 101, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 171, 16));
        label_4->setFont(font1);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 210, 241, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 90, 75, 23));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../BeOS_terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 200, 111, 16));
        label_5->setFont(font1);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(300, 210, 231, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 121, 141));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/terminal")));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 210, 121, 161));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/KEYBOARD MOUSE - SETTINGS.png")));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 250, 111, 141));
        label->setPixmap(QPixmap(QString::fromUtf8(":/bulb")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 544, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionHelp_File);
        menuAbout->addAction(actionAbout_Teaching_Control_Panel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Teaching Control Panel", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionHelp_File->setText(QApplication::translate("MainWindow", "Help File", 0, QApplication::UnicodeUTF8));
        actionAbout_Teaching_Control_Panel->setText(QApplication::translate("MainWindow", "About Teaching Control Panel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("MainWindow", "Controls to modify the display for each computer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "Display From:", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Instructor View", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Student View", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd20", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("MainWindow", "Options to take control of a student's peripherals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Student Control", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "Apply control changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Mouse", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "Keyboard", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Student", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd01", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd02", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd03", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd04", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd05", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd06", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd07", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd08", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd09", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Stnd20", 0, QApplication::UnicodeUTF8)
        );
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Light Intensity", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dial->setToolTip(QApplication::translate("MainWindow", "Changes the lighting intensity of the room", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "Apply lighting changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Low", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "High", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "Disables control of all students", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Release Controls", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Display To:", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "Instructor", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "All Students", 0, QApplication::UnicodeUTF8));
        radioButton_5->setText(QApplication::translate("MainWindow", "Projector", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Visual Controls", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Mouse/Keyboard Controls", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Apply visual changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Lighting Controls", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_7->setText(QString());
        label->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
