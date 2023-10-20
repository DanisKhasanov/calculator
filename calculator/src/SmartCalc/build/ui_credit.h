/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_credit
{
public:
    QWidget *centralwidget;
    QLabel *label_11;
    QPushButton *pushButton_result;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *sum_credit;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *percent_credit;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *term_credit;
    QComboBox *comboBox;
    QLabel *label_22;
    QTextEdit *result1;
    QTextEdit *result2;
    QTextEdit *result3;

    void setupUi(QMainWindow *credit)
    {
        if (credit->objectName().isEmpty())
            credit->setObjectName(QString::fromUtf8("credit"));
        credit->setEnabled(true);
        credit->resize(540, 520);
        QFont font;
        font.setPointSize(15);
        credit->setFont(font);
        credit->setStyleSheet(QString::fromUtf8("background-color: #2f3030;"));
        centralwidget = new QWidget(credit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(330, 100, 151, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font1.setPointSize(15);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("background-color: #2f3030;\n"
"color:white"));
        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        pushButton_result->setGeometry(QRect(310, 340, 191, 61));
        pushButton_result->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background: qlineargradient(x1:0, y1:0, x2:3 y2:0,\n"
"                                   stop:0 #4671D5, stop: 0.3 #F56E8D, stop:1 #CF5FD3);\n"
"border-radius: 28px\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"\n"
"}\n"
""));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(330, 170, 171, 16));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("background-color: #2f3030;\n"
"color:white"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(350, 250, 151, 16));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("background-color: #2f3030;\n"
"color:white"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 30, 211, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font2.setPointSize(24);
        font2.setBold(true);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("background-color: #2f3030;\n"
"color:white\n"
""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 20, 261, 401));
        label_14->setStyleSheet(QString::fromUtf8("background-color: #adadad;\n"
"color:black;\n"
"border-radius:30px;\n"
""));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(60, 30, 191, 51));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        sum_credit = new QLineEdit(centralwidget);
        sum_credit->setObjectName(QString::fromUtf8("sum_credit"));
        sum_credit->setGeometry(QRect(40, 120, 210, 30));
        sum_credit->setStyleSheet(QString::fromUtf8("background-color: #A4A3A1;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"color:black;"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(100, 100, 121, 16));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(260, 120, 21, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Helvetica Neue"));
        font3.setPointSize(15);
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        percent_credit = new QLineEdit(centralwidget);
        percent_credit->setObjectName(QString::fromUtf8("percent_credit"));
        percent_credit->setGeometry(QRect(40, 190, 210, 30));
        percent_credit->setStyleSheet(QString::fromUtf8("background-color: #A4A3A1;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"color:black;"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(90, 170, 141, 16));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(260, 200, 16, 16));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(100, 250, 101, 16));
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(255, 280, 21, 20));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        term_credit = new QLineEdit(centralwidget);
        term_credit->setObjectName(QString::fromUtf8("term_credit"));
        term_credit->setGeometry(QRect(40, 270, 210, 30));
        term_credit->setStyleSheet(QString::fromUtf8("background-color: #A4A3A1;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"color:black;"));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 350, 210, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Apple SD Gothic Neo"));
        font4.setPointSize(13);
        comboBox->setFont(font4);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: #A4A3A1;\n"
"border: 1px solid gray;\n"
"color:black;\n"
"border-radius: 5px"));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(80, 320, 151, 16));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("background-color:#B1B0AE;\n"
"color:black\n"
""));
        result1 = new QTextEdit(centralwidget);
        result1->setObjectName(QString::fromUtf8("result1"));
        result1->setGeometry(QRect(300, 120, 210, 30));
        result1->setStyleSheet(QString::fromUtf8(" white-space: normal;\n"
"background-color: #A4A3A1;\n"
"color: white;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"\n"
"\n"
""));
        result2 = new QTextEdit(centralwidget);
        result2->setObjectName(QString::fromUtf8("result2"));
        result2->setGeometry(QRect(300, 190, 210, 30));
        result2->setStyleSheet(QString::fromUtf8(" white-space: normal;\n"
"background-color: #A4A3A1;\n"
"color: white;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"\n"
"\n"
""));
        result3 = new QTextEdit(centralwidget);
        result3->setObjectName(QString::fromUtf8("result3"));
        result3->setGeometry(QRect(300, 270, 210, 30));
        result3->setStyleSheet(QString::fromUtf8(" white-space: normal;\n"
"background-color: #A4A3A1;\n"
"color: white;\n"
"  border: 1px solid gray;\n"
"border-radius: 5px;\n"
"\n"
"\n"
""));
        credit->setCentralWidget(centralwidget);

        retranslateUi(credit);

        QMetaObject::connectSlotsByName(credit);
    } // setupUi

    void retranslateUi(QMainWindow *credit)
    {
        credit->setWindowTitle(QApplication::translate("credit", "MainWindow", nullptr));
        label_11->setText(QApplication::translate("credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:", nullptr));
        pushButton_result->setText(QApplication::translate("credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214:", nullptr));
        label_12->setText(QApplication::translate("credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203:", nullptr));
        label_13->setText(QApplication::translate("credit", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260:", nullptr));
        label_9->setText(QApplication::translate("credit", "Calculation results:", nullptr));
        label_14->setText(QString());
        label_15->setText(QApplication::translate("credit", "Credit calculator:", nullptr));
        label_16->setText(QApplication::translate("credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_17->setText(QApplication::translate("credit", "\342\202\275", nullptr));
        label_18->setText(QApplication::translate("credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260:", nullptr));
        label_19->setText(QApplication::translate("credit", "%", nullptr));
        label_20->setText(QApplication::translate("credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260:", nullptr));
        label_21->setText(QApplication::translate("credit", "\320\273\320\265\321\202", nullptr));
        comboBox->setItemText(0, QApplication::translate("credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(1, QApplication::translate("credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));

        label_22->setText(QApplication::translate("credit", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \320\277\320\276\320\263\320\260\321\210\320\265\320\275\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit: public Ui_credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
