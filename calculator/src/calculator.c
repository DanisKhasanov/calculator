#include "smart_calc.h"

int calculator(stack_double **stack_d, stack_char **stack_c) {
  long double number1 = 0, number2 = 0;
  int error = pop_double(stack_d, &number2);
  char symbol = pop_char(stack_c);

  if (strchr("/+-*%^~m", symbol)) pop_double(stack_d, &number1);
  if (strchr("/%", symbol) && number2 == 0) error = -1;

  if (symbol == '+') push_double(stack_d, number1 + number2);
  if (symbol == '-') push_double(stack_d, number1 - number2);
  if (symbol == '*') push_double(stack_d, number1 * number2);
  if (symbol == '/') push_double(stack_d, number1 / number2);
  if (symbol == '^') push_double(stack_d, powl(number1, number2));
  if (symbol == '%' || symbol == 'm')
    push_double(stack_d, fmod(number1, number2));
  if (symbol == 'c') push_double(stack_d, cosl(number2));
  if (symbol == 's') push_double(stack_d, sinl(number2));
  if (symbol == 't') push_double(stack_d, tanl(number2));
  if (symbol == 'C') push_double(stack_d, acosl(number2));
  if (symbol == 'S') push_double(stack_d, asinl(number2));
  if (symbol == 'T') push_double(stack_d, atanl(number2));
  if (symbol == 'q') push_double(stack_d, sqrtl(number2));
  if (symbol == 'l') push_double(stack_d, logl(number2));
  if (symbol == 'L') push_double(stack_d, log10l(number2));

  return error;
}