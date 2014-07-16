/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Sep 11 17:02:51 2011
**      by: Qt User Interface Compiler version 4.7.4
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
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QFrame *line;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QFrame *line_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox_2;
    QLabel *label_9;
    QSlider *horizontalSlider;
    QLabel *label_10;
    QSlider *horizontalSlider_2;
    QLabel *label_11;
    QSlider *horizontalSlider_3;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_41;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLabel *label_47;
    QLabel *label_48;
    QLabel *label_40;
    QLabel *label_49;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QFrame *line_4;
    QLabel *label_13;
    QCheckBox *checkBox;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QFrame *line_8;
    QFrame *line_9;
    QCheckBox *checkBox_5;
    QFrame *line_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QLabel *label_14;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QLabel *label_15;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QFrame *line_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(761, 460);
        MainWindow->setMinimumSize(QSize(761, 460));
        MainWindow->setMaximumSize(QSize(761, 460));
        MainWindow->setWindowTitle(QString::fromUtf8("Patient Symptom Assessment Input"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/sadico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 751, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 761, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 461, 141));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(true);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 113, 20));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 40, 113, 20));
        lineEdit_2->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 81, 16));
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 20, 71, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 81, 16));
        label_4->setFont(font1);
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 90, 111, 22));
        comboBox->setFont(font1);
        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(150, 90, 41, 22));
        spinBox->setFont(font1);
        spinBox->setMinimum(1);
        spinBox->setMaximum(31);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 70, 46, 13));
        label_5->setFont(font1);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 70, 46, 13));
        label_6->setFont(font1);
        spinBox_2 = new QSpinBox(groupBox);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(210, 90, 51, 22));
        spinBox_2->setFont(font1);
        spinBox_2->setMinimum(1910);
        spinBox_2->setMaximum(2011);
        spinBox_2->setValue(1975);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(310, 20, 51, 16));
        label_7->setFont(font1);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(290, 10, 20, 141));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(310, 40, 82, 17));
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(310, 60, 91, 17));
        radioButton_2->setFont(font1);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 90, 121, 16));
        label_8->setFont(font1);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 110, 141, 20));
        lineEdit_3->setFont(font1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 190, 461, 241));
        groupBox_2->setFont(font);
        groupBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_2->setAlignment(Qt::AlignCenter);
        groupBox_2->setFlat(true);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 20, 351, 16));
        label_9->setFont(font1);
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 40, 441, 19));
        horizontalSlider->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider->setMaximum(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 90, 421, 16));
        label_10->setFont(font1);
        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(10, 110, 441, 19));
        horizontalSlider_2->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider_2->setMaximum(10);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setInvertedAppearance(false);
        horizontalSlider_2->setInvertedControls(false);
        horizontalSlider_2->setTickPosition(QSlider::TicksBelow);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 160, 401, 16));
        label_11->setFont(font1);
        horizontalSlider_3 = new QSlider(groupBox_2);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(10, 180, 441, 19));
        horizontalSlider_3->setCursor(QCursor(Qt::ClosedHandCursor));
        horizontalSlider_3->setMaximum(10);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_3->setInvertedAppearance(false);
        horizontalSlider_3->setInvertedControls(false);
        horizontalSlider_3->setTickPosition(QSlider::TicksBelow);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(1, 62, 31, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/happy")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(2, 133, 31, 21));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/happy")));
        label_17->setScaledContents(true);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(1, 204, 31, 21));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/happy")));
        label_18->setScaledContents(true);
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(214, 203, 34, 23));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/hurtslittle5")));
        label_19->setScaledContents(true);
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(213, 133, 34, 23));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/hurtslittle5")));
        label_20->setScaledContents(true);
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(213, 62, 34, 23));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/hurtslittle5")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(430, 201, 31, 24));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/10worst")));
        label_22->setScaledContents(true);
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(430, 132, 31, 22));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/10worst")));
        label_23->setScaledContents(true);
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(431, 62, 31, 23));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/10worst")));
        label_24->setScaledContents(true);
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(50, 200, 16, 16));
        label_25->setFont(font1);
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(51, 60, 16, 16));
        label_26->setFont(font1);
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(51, 130, 16, 16));
        label_27->setFont(font1);
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(94, 60, 16, 16));
        label_28->setFont(font1);
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(93, 130, 16, 16));
        label_29->setFont(font1);
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(94, 200, 16, 16));
        label_30->setFont(font1);
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(groupBox_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(137, 200, 16, 16));
        label_31->setFont(font1);
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(137, 130, 16, 16));
        label_32->setFont(font1);
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(137, 60, 16, 16));
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(179, 130, 16, 16));
        label_34->setFont(font1);
        label_34->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(179, 60, 16, 16));
        label_36->setFont(font1);
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(groupBox_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(179, 200, 16, 16));
        label_37->setFont(font1);
        label_37->setAlignment(Qt::AlignCenter);
        label_38 = new QLabel(groupBox_2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(308, 130, 16, 16));
        label_38->setFont(font1);
        label_38->setAlignment(Qt::AlignCenter);
        label_39 = new QLabel(groupBox_2);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(394, 130, 16, 16));
        label_39->setFont(font1);
        label_39->setAlignment(Qt::AlignCenter);
        label_41 = new QLabel(groupBox_2);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(351, 130, 16, 16));
        label_41->setFont(font1);
        label_41->setAlignment(Qt::AlignCenter);
        label_42 = new QLabel(groupBox_2);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(350, 60, 16, 16));
        label_42->setFont(font1);
        label_42->setAlignment(Qt::AlignCenter);
        label_43 = new QLabel(groupBox_2);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(265, 60, 16, 16));
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);
        label_44 = new QLabel(groupBox_2);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(308, 60, 16, 16));
        label_44->setFont(font1);
        label_44->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(groupBox_2);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(395, 60, 16, 16));
        label_45->setFont(font1);
        label_45->setAlignment(Qt::AlignCenter);
        label_46 = new QLabel(groupBox_2);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(265, 130, 16, 16));
        label_46->setFont(font1);
        label_46->setAlignment(Qt::AlignCenter);
        label_47 = new QLabel(groupBox_2);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(265, 200, 16, 16));
        label_47->setFont(font1);
        label_47->setAlignment(Qt::AlignCenter);
        label_48 = new QLabel(groupBox_2);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(352, 200, 16, 16));
        label_48->setFont(font1);
        label_48->setAlignment(Qt::AlignCenter);
        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(309, 200, 16, 16));
        label_40->setFont(font1);
        label_40->setAlignment(Qt::AlignCenter);
        label_49 = new QLabel(groupBox_2);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(395, 200, 16, 16));
        label_49->setFont(font1);
        label_49->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 430, 131, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(400, 430, 141, 23));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 50, 301, 381));
        groupBox_3->setFont(font);
        groupBox_3->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3->setAlignment(Qt::AlignCenter);
        groupBox_3->setFlat(true);
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(60, 40, 171, 251));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/bodymap")));
        label_12->setScaledContents(true);
        line_4 = new QFrame(groupBox_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(87, 50, 61, 20));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 20, 281, 16));
        label_13->setFont(font1);
        checkBox = new QCheckBox(groupBox_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 50, 51, 17));
        checkBox->setFont(font1);
        line_5 = new QFrame(groupBox_3);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(80, 130, 31, 20));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        line_6 = new QFrame(groupBox_3);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(190, 130, 31, 20));
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        line_7 = new QFrame(groupBox_3);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(150, 100, 71, 20));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setLineWidth(2);
        line_7->setFrameShape(QFrame::HLine);
        checkBox_2 = new QCheckBox(groupBox_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(230, 100, 51, 17));
        checkBox_2->setFont(font1);
        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(230, 130, 70, 17));
        checkBox_3->setFont(font1);
        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 130, 61, 17));
        checkBox_4->setFont(font1);
        line_8 = new QFrame(groupBox_3);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(160, 200, 61, 20));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::HLine);
        line_9 = new QFrame(groupBox_3);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(70, 200, 61, 20));
        line_9->setFrameShadow(QFrame::Plain);
        line_9->setLineWidth(2);
        line_9->setFrameShape(QFrame::HLine);
        checkBox_5 = new QCheckBox(groupBox_3);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(10, 250, 71, 17));
        checkBox_5->setFont(font1);
        line_3 = new QFrame(groupBox_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(6, 290, 295, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        checkBox_6 = new QCheckBox(groupBox_3);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(10, 270, 70, 17));
        checkBox_6->setFont(font1);
        checkBox_7 = new QCheckBox(groupBox_3);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(10, 200, 61, 17));
        checkBox_7->setFont(font1);
        checkBox_8 = new QCheckBox(groupBox_3);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(230, 200, 70, 17));
        checkBox_8->setFont(font1);
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 300, 241, 16));
        label_14->setFont(font1);
        checkBox_9 = new QCheckBox(groupBox_3);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(20, 320, 70, 17));
        checkBox_9->setFont(font1);
        checkBox_10 = new QCheckBox(groupBox_3);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(90, 320, 70, 17));
        checkBox_10->setFont(font1);
        checkBox_11 = new QCheckBox(groupBox_3);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(170, 320, 70, 17));
        checkBox_11->setFont(font1);
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 350, 181, 16));
        label_15->setFont(font1);
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(190, 350, 41, 17));
        radioButton_3->setFont(font1);
        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(240, 350, 41, 17));
        radioButton_4->setFont(font1);
        line_10 = new QFrame(groupBox_3);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(-2, 8, 20, 362));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, comboBox);
        QWidget::setTabOrder(comboBox, spinBox);
        QWidget::setTabOrder(spinBox, spinBox_2);
        QWidget::setTabOrder(spinBox_2, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, horizontalSlider);
        QWidget::setTabOrder(horizontalSlider, horizontalSlider_2);
        QWidget::setTabOrder(horizontalSlider_2, horizontalSlider_3);
        QWidget::setTabOrder(horizontalSlider_3, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_2);
        QWidget::setTabOrder(checkBox_2, checkBox_4);
        QWidget::setTabOrder(checkBox_4, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox_7);
        QWidget::setTabOrder(checkBox_7, checkBox_8);
        QWidget::setTabOrder(checkBox_8, checkBox_5);
        QWidget::setTabOrder(checkBox_5, checkBox_6);
        QWidget::setTabOrder(checkBox_6, checkBox_9);
        QWidget::setTabOrder(checkBox_9, checkBox_10);
        QWidget::setTabOrder(checkBox_10, checkBox_11);
        QWidget::setTabOrder(checkBox_11, radioButton_3);
        QWidget::setTabOrder(radioButton_3, radioButton_4);
        QWidget::setTabOrder(radioButton_4, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        label->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">Patient Symptom Questionnaire</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Patient Information", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Date of Birth:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "01 - January", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "02 - February", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "03 - March", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "04 - April", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "05 - May", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "06 - June", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "07 - July", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "08 - August", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "09 - September", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10 - October", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "11 - November", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "12 - December", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "Day:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Year:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "I am the: ", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Patient", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Caregiver", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Primary Care Doctor:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Symptom Assssment", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Please rate your mood from 0 (Best Feeling) to 10 (Worst Feeling):", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Please rate your level of energy from 0 (Not Tired) to 10 (Worst Possible Tiredness):", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Please rate your level of pain from 0 (No Pain) to 10 (Worst Possible Pain):", 0, QApplication::UnicodeUTF8));
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        label_46->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        label_47->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        label_48->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Submit Questionnaire", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Clear Form and Start Over", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Pain Assessment", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Please Select all the areas where you feel pain:", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Head", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindow", "Chest", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("MainWindow", "Right Arm", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("MainWindow", "Left Arm", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("MainWindow", "Stomach", 0, QApplication::UnicodeUTF8));
        checkBox_6->setText(QApplication::translate("MainWindow", "Back", 0, QApplication::UnicodeUTF8));
        checkBox_7->setText(QApplication::translate("MainWindow", "Left Leg", 0, QApplication::UnicodeUTF8));
        checkBox_8->setText(QApplication::translate("MainWindow", "Right Leg", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "What time of day do you normally feel the pain?", 0, QApplication::UnicodeUTF8));
        checkBox_9->setText(QApplication::translate("MainWindow", "Morning", 0, QApplication::UnicodeUTF8));
        checkBox_10->setText(QApplication::translate("MainWindow", "Afternoon", 0, QApplication::UnicodeUTF8));
        checkBox_11->setText(QApplication::translate("MainWindow", "Night", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Does Movement increase the pain?", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "Yes", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("MainWindow", "No", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
