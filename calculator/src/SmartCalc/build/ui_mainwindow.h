/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_clear_symb;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_result;
    QPushButton *pushButton_dark;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_bracket1;
    QPushButton *pushButton_X;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_bracket2;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_degree;
    QPushButton *pushButton_mod;
    QLabel *label_2;
    QLineEdit *result_show_x;
    QLabel *label_3;
    QPushButton *pushButton_exten;
    QPushButton *pushButton_graph;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(294, 522);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8(".AppleSystemUIFontMonospaced"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #2f3030;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 271, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font1.setPointSize(30);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"\n"
"}\n"
"\n"
"background-color : white;"));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(0);
        label->setIndent(0);
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(20, 170, 50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font2.setPointSize(20);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #FF7373;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #CF5FD3, stop: 1 #4671D5);\n"
"\n"
"}\n"
"\n"
""));
        pushButton_clear_symb = new QPushButton(centralwidget);
        pushButton_clear_symb->setObjectName(QString::fromUtf8("pushButton_clear_symb"));
        pushButton_clear_symb->setGeometry(QRect(90, 170, 50, 50));
        pushButton_clear_symb->setFont(font2);
        pushButton_clear_symb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #FF7373;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #CF5FD3, stop: 1 #4671D5);\n"
"\n"
"}\n"
"\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(230, 170, 50, 50));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(230, 240, 50, 50));
        pushButton_mult->setFont(font2);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 240, 55, 55));
        QFont font3;
        font3.setFamily(QString::fromUtf8("DecoType Naskh"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setKerning(false);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 240, 55, 55));
        pushButton_8->setFont(font3);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(20, 240, 55, 55));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(230, 310, 50, 50));
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 310, 55, 55));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 310, 55, 55));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DecoType Naskh"));
        font4.setPointSize(20);
        font4.setBold(false);
        pushButton_5->setFont(font4);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 310, 55, 55));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(230, 380, 50, 50));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 380, 55, 55));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 380, 55, 55));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 380, 55, 55));
        pushButton_1->setFont(font3);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(90, 450, 55, 55));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font5.setPointSize(20);
        font5.setBold(false);
        pushButton_dot->setFont(font5);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(20, 450, 55, 55));
        pushButton_0->setFont(font3);
        pushButton_0->setLayoutDirection(Qt::RightToLeft);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"   border: 0px ;\n"
"border-radius: 27px\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(160, 450, 120, 50));
        pushButton_result->setFont(font2);
        pushButton_result->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background: qlineargradient(x1:0, y1:0, x2:3 y2:0,\n"
"                stop:0 #4671D5, stop: 0.3 #F56E8D, stop:1 #CF5FD3);\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_dark = new QPushButton(centralwidget);
        pushButton_dark->setObjectName(QString::fromUtf8("pushButton_dark"));
        pushButton_dark->setGeometry(QRect(250, 10, 30, 30));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        pushButton_dark->setFont(font6);
        pushButton_dark->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: #adadad;\n"
"border-radius: 15px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(370, 380, 50, 50));
        pushButton_log->setFont(font5);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(440, 380, 50, 50));
        pushButton_sqrt->setFont(font5);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_bracket1 = new QPushButton(centralwidget);
        pushButton_bracket1->setObjectName(QString::fromUtf8("pushButton_bracket1"));
        pushButton_bracket1->setGeometry(QRect(300, 170, 50, 50));
        pushButton_bracket1->setFont(font5);
        pushButton_bracket1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName(QString::fromUtf8("pushButton_X"));
        pushButton_X->setGeometry(QRect(300, 450, 50, 50));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font7.setPointSize(35);
        font7.setBold(false);
        pushButton_X->setFont(font7);
        pushButton_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 2px solid white;\n"
"border-radius: 10px;\n"
"text-align: center;\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName(QString::fromUtf8("pushButton_credit"));
        pushButton_credit->setGeometry(QRect(173, 10, 63, 30));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Avenir"));
        font8.setPointSize(20);
        font8.setBold(false);
        pushButton_credit->setFont(font8);
        pushButton_credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"  background-color: #adadad;\n"
"  border: 1px solid gray;\n"
"border-radius: 15px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(300, 380, 50, 50));
        pushButton_ln->setFont(font5);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_bracket2 = new QPushButton(centralwidget);
        pushButton_bracket2->setObjectName(QString::fromUtf8("pushButton_bracket2"));
        pushButton_bracket2->setGeometry(QRect(370, 170, 50, 50));
        pushButton_bracket2->setFont(font5);
        pushButton_bracket2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(300, 240, 50, 50));
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(370, 240, 50, 50));
        pushButton_cos->setFont(font5);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(440, 240, 50, 50));
        pushButton_tan->setFont(font5);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(370, 310, 50, 50));
        pushButton_acos->setFont(font5);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(440, 310, 50, 50));
        pushButton_atan->setFont(font5);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(300, 310, 50, 50));
        pushButton_asin->setFont(font5);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        pushButton_degree = new QPushButton(centralwidget);
        pushButton_degree->setObjectName(QString::fromUtf8("pushButton_degree"));
        pushButton_degree->setGeometry(QRect(160, 170, 50, 50));
        pushButton_degree->setFont(font5);
        pushButton_degree->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"\n"
"border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(440, 170, 50, 50));
        pushButton_mod->setFont(font5);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #adadad;\n"
"border: 1px solid gray;\n"
"border-radius: 25px;\n"
"text-align: center\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 153, 256, 2));
        label_2->setStyleSheet(QString::fromUtf8(" background: qlineargradient(x1:0, y1:0, x2:3 y2:0,\n"
"                stop:0 #4671D5, stop: 0.3 #F56E8D, stop:1 #CF5FD3);\n"
"\n"
""));
        result_show_x = new QLineEdit(centralwidget);
        result_show_x->setObjectName(QString::fromUtf8("result_show_x"));
        result_show_x->setGeometry(QRect(390, 450, 101, 50));
        QFont font9;
        font9.setFamily(QString::fromUtf8("DecoType Naskh"));
        font9.setPointSize(20);
        result_show_x->setFont(font9);
        result_show_x->setLayoutDirection(Qt::RightToLeft);
        result_show_x->setStyleSheet(QString::fromUtf8("  background-color: #adadad;\n"
"border: 2px solid white;\n"
"border-radius: 10px;\n"
"text-align: center"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 440, 16, 61));
        QFont font10;
        font10.setPointSize(20);
        label_3->setFont(font10);
        pushButton_exten = new QPushButton(centralwidget);
        pushButton_exten->setObjectName(QString::fromUtf8("pushButton_exten"));
        pushButton_exten->setGeometry(QRect(97, 10, 63, 30));
        pushButton_exten->setFont(font8);
        pushButton_exten->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"  background-color: #adadad;\n"
"  border: 1px solid gray;\n"
"border-radius: 15px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(20, 10, 63, 30));
        pushButton_graph->setFont(font8);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"  background-color: #adadad;\n"
"  border: 1px solid gray;\n"
"border-radius: 15px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton_clear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_clear_symb->setText(QApplication::translate("MainWindow", "C", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_mult->setText(QApplication::translate("MainWindow", "*", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_0->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        pushButton_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_result->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_dark->setText(QString());
        pushButton_log->setText(QApplication::translate("MainWindow", "log", nullptr));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_bracket1->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_X->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButton_credit->setText(QApplication::translate("MainWindow", "credit", nullptr));
        pushButton_ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        pushButton_bracket2->setText(QApplication::translate("MainWindow", ")", nullptr));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        pushButton_acos->setText(QApplication::translate("MainWindow", "acos", nullptr));
        pushButton_atan->setText(QApplication::translate("MainWindow", "atan", nullptr));
        pushButton_asin->setText(QApplication::translate("MainWindow", "asin", nullptr));
        pushButton_degree->setText(QApplication::translate("MainWindow", "^", nullptr));
        pushButton_mod->setText(QApplication::translate("MainWindow", "mod", nullptr));
        label_2->setText(QString());
        result_show_x->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_exten->setText(QApplication::translate("MainWindow", "exten", nullptr));
        pushButton_graph->setText(QApplication::translate("MainWindow", "graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
