#include "graph.h"

#include <QDebug>
#include <QDialog>
#include <QDoubleValidator>
#include <cmath>

#include "mainwindow.h"
#include "ui_graph.h"

graph::graph(QWidget *parent) : QWidget(parent), ui(new Ui::graph) {
  ui->setupUi(this);
  setWindowTitle("График");
  setFixedSize(width(), height());

  ui->xMin->setValidator(new QDoubleValidator(this));
  ui->xMax->setValidator(new QDoubleValidator(this));
  ui->yMin->setValidator(new QDoubleValidator(this));
  ui->yMax->setValidator(new QDoubleValidator(this));
}

graph::~graph() { delete ui; }

void graph::graph_window_func(QString &str_in_x) {
  ui->widget->clearGraphs();
  x.clear();
  y.clear();

  bool is_x_min, is_y_min, is_x_max, is_y_max = false;
  double xMin = (ui->xMin->text().isEmpty())
                    ? -20.0
                    : ui->xMin->text().toDouble(&is_x_min);
  double xMax = (ui->xMax->text().isEmpty())
                    ? 20.0
                    : ui->xMax->text().toDouble(&is_x_max);
  double yMin = (ui->yMin->text().isEmpty())
                    ? -20.0
                    : ui->yMin->text().toDouble(&is_y_min);
  double yMax = (ui->yMax->text().isEmpty())
                    ? 20.0
                    : ui->yMax->text().toDouble(&is_y_max);

  ui->widget->xAxis->setRange(xMin, xMax);
  ui->widget->yAxis->setRange(yMin, yMax);

  if (xMin >= -1000000 && xMax <= 1000000 && yMin >= -1000000 &&
      yMax <= 1000000) {
    double X = 0, Y = 0;
    for (X = xMin; X <= xMax; X += 0.1) {
      QString str_copy = str_in_x;

      QString xValue = QString::number(X);
      if (xValue.startsWith("-") || xValue.startsWith("+")) {
        xValue = "(" + xValue + ")";
      }

      str_copy.replace("x", xValue);
      QByteArray str_buffer = str_copy.toUtf8();
      char *str = str_buffer.data();

      long double result = 0;

      if (input_stack(str, &result) == 0) {
        x.push_back(X);
        Y = result;
        y.push_back(Y);
      }
    }
  }

  ui->widget->addGraph();
  QCPGraph *graph = ui->widget->graph(0);
  graph->setData(x, y);
  QPen pen = graph->pen();
  pen.setWidth(2);
  pen.setColor(QColor::fromRgb(71, 86, 121));
  graph->setPen(pen);
  ui->widget->setInteractions(QCP::iRangeZoom | QCP::iRangeDrag);
  ui->widget->replot();
}

void graph::clearGraph() {
  ui->widget->clearGraphs();
  ui->widget->replot();
}
