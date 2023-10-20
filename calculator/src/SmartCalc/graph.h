#ifndef GRAPH_H
#define GRAPH_H

#include <qcustomplot.h>

#include <QVector>
#include <QWidget>

namespace Ui {
class graph;
}

class graph : public QWidget {
  Q_OBJECT

 public:
  explicit graph(QWidget *parent = nullptr);
  ~graph();
  void clearGraph();

 public slots:
  void graph_window_func(QString &str_in_x);

 private:
  Ui::graph *ui;
  QVector<double> x, y;
};

#endif  // GRAPH_H
