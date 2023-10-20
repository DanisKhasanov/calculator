/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_graph
{
public:
    QCustomPlot *widget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *xMin;
    QLineEdit *xMax;
    QLineEdit *yMax;
    QLineEdit *yMin;

    void setupUi(QWidget *graph)
    {
        if (graph->objectName().isEmpty())
            graph->setObjectName(QString::fromUtf8("graph"));
        graph->resize(540, 520);
        widget = new QCustomPlot(graph);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 12, 516, 371));
        label = new QLabel(graph);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(27, 400, 71, 20));
        label_2 = new QLabel(graph);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(27, 450, 71, 20));
        label_3 = new QLabel(graph);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(287, 400, 71, 20));
        label_4 = new QLabel(graph);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(287, 450, 71, 20));
        xMin = new QLineEdit(graph);
        xMin->setObjectName(QString::fromUtf8("xMin"));
        xMin->setGeometry(QRect(90, 400, 141, 21));
        xMax = new QLineEdit(graph);
        xMax->setObjectName(QString::fromUtf8("xMax"));
        xMax->setGeometry(QRect(360, 400, 141, 21));
        yMax = new QLineEdit(graph);
        yMax->setObjectName(QString::fromUtf8("yMax"));
        yMax->setGeometry(QRect(360, 450, 141, 21));
        yMin = new QLineEdit(graph);
        yMin->setObjectName(QString::fromUtf8("yMin"));
        yMin->setGeometry(QRect(90, 450, 141, 21));

        retranslateUi(graph);

        QMetaObject::connectSlotsByName(graph);
    } // setupUi

    void retranslateUi(QWidget *graph)
    {
        graph->setWindowTitle(QApplication::translate("graph", "Form", nullptr));
        label->setText(QApplication::translate("graph", "xMin", nullptr));
        label_2->setText(QApplication::translate("graph", "yMin", nullptr));
        label_3->setText(QApplication::translate("graph", "xMax", nullptr));
        label_4->setText(QApplication::translate("graph", "yMax", nullptr));
        xMin->setText(QString());
        xMax->setText(QString());
        yMax->setText(QString());
        yMin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class graph: public Ui_graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
