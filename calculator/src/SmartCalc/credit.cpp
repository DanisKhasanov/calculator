#include "credit.h"

#include <QLayout>
#include <QMessageBox>
#include <QRegularExpression>
#include <cmath>

#include "mainwindow.h"
#include "ui_credit.h"

credit::credit(QWidget *parent) : QMainWindow(parent), ui(new Ui::credit) {
  ui->setupUi(this);

  QPushButton *but = credit::findChild<QPushButton *>();
  connect(but, &QPushButton::released, this, &credit::calculator_credit);
  this->setWindowTitle("Кредитный калькулятор");
  setFixedSize(width(), height());
}

credit::~credit() { delete ui; }

void credit::calculator_credit() {
  QString sum_credit_text = ui->sum_credit->text();
  QString percent_credit_text = ui->percent_credit->text();
  QString term_credit_text = ui->term_credit->text();

  if (!(sum_credit_text.isEmpty() || percent_credit_text.isEmpty() ||
        term_credit_text.isEmpty())) {
    double sum = sum_credit_text.toDouble();  // сумма платежа
    double percent = percent_credit_text.toDouble() / 100;  // процент
    double term = term_credit_text.toDouble();  // срок кредита

    if (ui->comboBox->currentText() == "Аннуитетный") {
      annuity(sum, percent, term);
    } else if (ui->comboBox->currentText() == "Дифференцированный") {
      differentiated(sum, percent, term);
    }
  }
}

void credit::annuity(double sum, double percent, double term) {
  double monthly_rate = percent / 12.0;
  double num_payments = term * 12.0;

  double monthly_payment =
      (sum * monthly_rate) / (1 - pow(1 + monthly_rate, -num_payments));
  double total_payment = monthly_payment * num_payments;
  double overpayment = total_payment - sum;

  ui->result1->setText(QString("%L1 ₽").arg(monthly_payment, 0, 'f', 2));
  ui->result2->setText(QString("%L1 ₽").arg(overpayment, 0, 'f', 2));
  ui->result3->setText(QString("%L1 ₽").arg(total_payment, 0, 'f', 2));
}

void credit::differentiated(double sum, double percent, double term) {
  double monthly_interest_rate = percent / 12.0;
  double total_payments = term * 12.0;
  double principal_payment = sum / total_payments;

  double remaining_balance = sum;
  double total_payment = 0.0;
  QString first_last_payments_text = "";

  for (int i = 1; i <= total_payments; ++i) {
    double monthly_interest_payment = remaining_balance * monthly_interest_rate;
    if (i == total_payments) {
      principal_payment = remaining_balance;
      first_last_payments_text += QString("%L1 ₽").arg(
          principal_payment + monthly_interest_payment, 0, 'f', 2);
    } else if (i == 1) {
      first_last_payments_text +=
          QString("%L1 ₽").arg(principal_payment + monthly_interest_payment,
                                 0, 'f', 2) +
          " … ";
    }
    remaining_balance -= principal_payment;
    total_payment += principal_payment + monthly_interest_payment;
  }

  ui->result1->setText(first_last_payments_text);
  ui->result2->setText(QString("%L1 ₽").arg(total_payment - sum, 0, 'f', 2));
  ui->result3->setText(QString("%L1 ₽").arg(total_payment, 0, 'f', 2));
}
