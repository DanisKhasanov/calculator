#include "mainwindow.h"

#include <QDebug>
#include <QDoubleValidator>
#include <QKeyEvent>
#include <QRect>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  this->setWindowTitle("Калькулятор");

  graph_window = nullptr;
  credit_window = nullptr;

  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(symbol()));

  connect(ui->pushButton_X, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_bracket1, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_bracket2, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(symbol()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(symbol()));

  connect(ui->pushButton_clear, SIGNAL(clicked()), this, SLOT(clear()));
  connect(ui->pushButton_result, SIGNAL(clicked()), this,
          SLOT(on_pushButton_result_clicked()));
  connect(ui->pushButton_dot, SIGNAL(clicked()), this,
          SLOT(on_pushButton_dot_clicked()));

  ui->pushButton_dark->setIcon(QIcon(":/dark3.png"));
  ui->pushButton_dark->setIconSize(QSize(25, 25));
  ui->result_show_x->setValidator(new QDoubleValidator(this));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::symbol() {
  QPushButton *button = (QPushButton *)sender();
  QString text = button->text();

  if (text == "sin" || text == "cos" || text == "tan" || text == "asin" ||
      text == "acos" || text == "atan" || text == "log" || text == "ln" ||
      text == "sqrt") {
    ui->label->setText(ui->label->text() + text + "(");
  } else if (text >= "0" && text <= "9") {
    if (count_num(ui->label->text()) < 255) {
      ui->label->setText(ui->label->text() + text);
    }
  } else {
    ui->label->setText(ui->label->text() + text);
  }
}

int MainWindow::count_num(const QString &text) {
  int count = 0;
  for (int i = 0; i < text.length(); i++) {
    if (text[i].isDigit()) {
      count++;
    }
  }
  return count;
}

void MainWindow::clear() {
  ui->label->setText("");
  ui->result_show_x->setText("");
  if (graph_window) graph_window->clearGraph();
}

void MainWindow::keyPressEvent(QKeyEvent *button) {
  QString key_text = button->text();
  QString label_text = ui->label->text();

  if (key_text >= "0" && key_text <= "9")
    ui->label->setText(label_text + key_text);

  else if (key_text == "+" || key_text == "-" || key_text == "*" ||
           key_text == "/" || key_text == "^") {
    if (!label_text.endsWith('+') && !label_text.endsWith('-') &&
        !label_text.endsWith('*') && !label_text.endsWith('/') &&
        !label_text.endsWith('^'))
      ui->label->setText(label_text + key_text);
  } else if (button->key() == Qt::Key_Period)
    on_pushButton_dot_clicked();

  else if (button->key() == Qt::Key_Enter)
    on_pushButton_result_clicked();

  else if (button->key() == Qt::Key_Backspace)
    on_pushButton_clear_symb_clicked();

  else
    QMainWindow::keyPressEvent(button);
}

bool MainWindow::check_operator(const QString &symb) {
  return !ui->label->text().endsWith('+') && !ui->label->text().endsWith('-') &&
         !ui->label->text().endsWith('*') && !ui->label->text().endsWith('/') &&
         !ui->label->text().endsWith('^') && !ui->label->text().endsWith(symb);
}

void MainWindow::on_pushButton_clear_symb_clicked() {
  QString currentText = ui->label->text();
  if (!currentText.isEmpty()) {
    currentText.chop(1);
    ui->label->setText(currentText);
  } else {
    ui->label->setText("");
  }
}

void MainWindow::on_pushButton_dot_clicked() {
  int count = 0;
  QString str = ui->label->text();
  int len = str.isNull() ? 0 : str.length();
  for (int i = 0; i < len; i++) {
    if (str[i] == '.') {
      count = 1;
    } else if (str[i] != '0' && str[i] != '1' && str[i] != '2' &&
               str[i] != '3' && str[i] != '4' && str[i] != '5' &&
               str[i] != '6' && str[i] != '7' && str[i] != '8' &&
               str[i] != '9') {
      count = 0;
    }
  }
  if (len != 0) {
    if (count == 0 && (str[len - 1] >= '0' && str[len - 1] <= '9')) {
      ui->label->setText(ui->label->text() + ".");
    }
  }
}

void MainWindow::on_pushButton_result_clicked() {
  QString str_label = ui->label->text();
  QString str_x = ui->result_show_x->text();

  if ((ui->label->text().contains("x"))) {
    if (str_x.startsWith("-") || str_x.startsWith("+")) {
      str_x = "(" + str_x + ")";
    }
    str_label = str_label.replace("x", str_x);
  }

  QByteArray str_buffer = str_label.toUtf8();
  char *str = str_buffer.data();
  long double result = 0;

  int error = input_stack(str, &result);

  if (error == 0) {
    ui->label->setText(QString::number(result, 'g', 10));

  } else if (error == -1) {
    ui->label->setText("ERROR");
  } else if (error == -2) {
    ui->label->setText("INF");
  }
}

void MainWindow::on_pushButton_dark_clicked() {
  if (dark) {
    QString darkStylesheet = "background-color: #2f3030; color: white;";
    this->setStyleSheet(darkStylesheet);
  } else {
    QString lightStylesheet = "background-color: #E8E8E8; color: black;";
    this->setStyleSheet(lightStylesheet);
  }
  dark = !dark;
}

void MainWindow::on_pushButton_credit_clicked() {
  if (credit_window == nullptr) {
    credit_window = new credit(this);
    int mainWinWidth = width();
    int mainWinX = x();
    int mainWinY = y();
    int creditWinWidth = credit_window->width();
    int creditWinHeight = credit_window->height();
    int newX = mainWinX + mainWinWidth + 1;
    int newY = mainWinY + 30;
    credit_window->setGeometry(newX, newY, creditWinWidth, creditWinHeight);
    connect(credit_window, &QObject::destroyed, this,
            [this]() { credit_window = nullptr; });
  }

  credit_window->show();
}

void MainWindow::on_pushButton_plus_clicked() {
  if (check_operator("+")) ui->label->setText(ui->label->text() + "+");
}

void MainWindow::on_pushButton_minus_clicked() {
  if (check_operator("-")) ui->label->setText(ui->label->text() + "-");
}

void MainWindow::on_pushButton_mult_clicked() {
  if (check_operator("*")) ui->label->setText(ui->label->text() + "*");
}

void MainWindow::on_pushButton_div_clicked() {
  if (check_operator("/")) ui->label->setText(ui->label->text() + "/");
}

void MainWindow::on_pushButton_degree_clicked() {
  if (check_operator("^")) ui->label->setText(ui->label->text() + "^");
}

void MainWindow::on_pushButton_mod_clicked() {
  if (check_operator("mod")) ui->label->setText(ui->label->text() + "mod");
}

void MainWindow::on_pushButton_exten_clicked() {
  int currentWidth = width();
  int currentHeight = height();
  int newWidth = 0;
  ;

  if (is_big_window) {
    newWidth = currentWidth + 210;
    ui->label->resize(ui->label->width() + 210, ui->label->height());
    ui->pushButton_dark->move(ui->pushButton_dark->x() + 210,
                              ui->pushButton_dark->y());
    ui->pushButton_credit->move(ui->pushButton_credit->x() + 210,
                                ui->pushButton_credit->y());
    ui->pushButton_exten->move(ui->pushButton_exten->x() + 210,
                               ui->pushButton_exten->y());
    ui->pushButton_graph->move(ui->pushButton_graph->x() + 210,
                               ui->pushButton_graph->y());
    ui->label_2->resize(ui->label_2->width() + 210, ui->label_2->height());

  } else {
    newWidth = currentWidth - 210;
    ui->label->resize(ui->label->width() - 210, ui->label->height());
    ui->pushButton_dark->move(ui->pushButton_dark->x() - 210,
                              ui->pushButton_dark->y());
    ui->pushButton_credit->move(ui->pushButton_credit->x() - 210,
                                ui->pushButton_credit->y());
    ui->pushButton_exten->move(ui->pushButton_exten->x() - 210,
                               ui->pushButton_exten->y());
    ui->pushButton_graph->move(ui->pushButton_graph->x() - 210,
                               ui->pushButton_graph->y());
    ui->label_2->resize(ui->label_2->width() - 210, ui->label_2->height());
  }

  resize(newWidth, currentHeight);
  is_big_window = !is_big_window;
}

void MainWindow::on_pushButton_graph_clicked() {
  QString str_in_x = ui->label->text();

  if (graph_window == nullptr) {
    int mainWinX = x();
    int mainWinY = y();
    graph_window = new graph;
    int graphWinWidth = graph_window->width();
    int graphWinHeight = graph_window->height();
    int newX = mainWinX - graphWinWidth - 1;
    int newY = mainWinY + 30;
    graph_window->setGeometry(newX, newY, graphWinWidth, graphWinHeight);

    connect(graph_window, &QObject::destroyed, this,
            [this]() { graph_window = nullptr; });
  }

  graph_window->show();
  if (!str_in_x.isEmpty()) {
    graph_window->graph_window_func(str_in_x);
  }
}
