#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qcustomplot.h>

#include <QMainWindow>
#include <QWidget>
#include <QWindow>

#include "credit.h"
#include "graph.h"

extern "C" {
#include <../smart_calc.h>
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
  int dark = 0;
  int is_big_window = 1;

 private:
  Ui::MainWindow *ui;
  credit *credit_window;
  graph *graph_window;

 private slots:

  void symbol();
  int count_num(const QString &text);
  void clear();
  void on_pushButton_dot_clicked();
  void on_pushButton_result_clicked();
  void on_pushButton_dark_clicked();
  void on_pushButton_credit_clicked();
  void on_pushButton_clear_symb_clicked();
  void keyPressEvent(QKeyEvent *event);
  void on_pushButton_mult_clicked();
  void on_pushButton_plus_clicked();
  void on_pushButton_minus_clicked();
  void on_pushButton_div_clicked();
  void on_pushButton_exten_clicked();
  void on_pushButton_degree_clicked();
  bool check_operator(const QString &text);
  void on_pushButton_mod_clicked();
  void on_pushButton_graph_clicked();
};

#endif  // MAINWINDOW_H
