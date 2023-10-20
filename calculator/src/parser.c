#include "smart_calc.h"

int input_stack(char *sym_str, long double *result) {
  stack_char *stack_c = NULL;
  stack_double *stack_d = NULL;
  char *current_symb = (char *)sym_str;
  int error = check_str(current_symb);

  if (*current_symb == '-' || *current_symb == '+') push_double(&stack_d, 0);

  while (*current_symb != '\0' && !error) {
    if (isdigit(*current_symb)) {
      long double number = strtold(current_symb, &current_symb);
      push_double(&stack_d, number);
    } else {
      if (*current_symb == '(') {
        push_char(&stack_c, *current_symb, 5);
      } else if (*current_symb == ')') {
        while (stack_c->symbol != '(' && !error)
          error = calculator(&stack_d, &stack_c);
        pop_char(&stack_c);
      } else if (*current_symb != ' ') {
        error = polish_not(&current_symb, &stack_d, &stack_c);
      }
      current_symb++;
    }
  }

  if (!error) {
    error = output_stack(&stack_d, &stack_c, error, result);
  }

  free(stack_c);
  free(stack_d);

  return error;
}

int check_str(char *current_symb) {
  int bracket = 0, error = 0;
  char prev_char = 0;

  while (*current_symb) {
    if (!isspace(*current_symb)) {
      if (*current_symb == '(') {
        bracket++;
      } else if (*current_symb == ')') {
        bracket--;
        if (bracket < 0) error = -1;
      }

      if (!strchr("sincoqrtalmdg.-+x()*/+-%^", *current_symb) &&
          !isdigit(*current_symb)) {
        error = -1;
      }

      if (strchr("/*^m)", *current_symb) && strchr("+-(/*m^", prev_char))
        error = -1;
      if (strchr("*", *current_symb) && strchr("(", prev_char)) error = -1;

      prev_char = *current_symb;
    }
    current_symb++;
  }

  if (!strchr(")x", prev_char) && !isdigit(prev_char)) error = -1;
  if (bracket != 0) error = -1;

  return error;
}

int operator_stack(char **current_symb, char *oper_symb) {
  int error = 0;
  if (strchr("+", **current_symb))
    *oper_symb = '+';
  else if (strchr("-", **current_symb))
    *oper_symb = '-';
  else if (strchr("*", **current_symb))
    *oper_symb = '*';
  else if (strchr("/", **current_symb))
    *oper_symb = '/';
  else if (strchr("%", **current_symb))
    *oper_symb = '%';
  else if (strchr("^", **current_symb))
    *oper_symb = '^';
  else if (!strncmp(*current_symb, "mod", 3))
    *oper_symb = 'm';
  else if (!strncmp(*current_symb, "cos", 3))
    *oper_symb = 'c';
  else if (!strncmp(*current_symb, "sin", 3))
    *oper_symb = 's';
  else if (!strncmp(*current_symb, "tan", 3))
    *oper_symb = 't';
  else if (!strncmp(*current_symb, "acos", 4))
    *oper_symb = 'C';
  else if (!strncmp(*current_symb, "asin", 4))
    *oper_symb = 'S';
  else if (!strncmp(*current_symb, "atan", 4))
    *oper_symb = 'T';
  else if (!strncmp(*current_symb, "sqrt", 4))
    *oper_symb = 'q';
  else if (!strncmp(*current_symb, "ln", 2))
    *oper_symb = 'l';
  else if (!strncmp(*current_symb, "log", 3))
    *oper_symb = 'L';
  else
    error = -1;
  return error;
}

int polish_not(char **current_symb, stack_double **stack_d,
               stack_char **stack_c) {
  int priority = -1, error = 0;
  char oper_symb = 0;

  char *prov_symb = *current_symb - 1;
  while (*prov_symb == ' ') {
    prov_symb--;
  }
  if ((**current_symb == '-' || **current_symb == '+') &&
      (strchr("-(", *prov_symb)))
    push_double(stack_d, 0);

  if (error == 0) error = operator_stack(current_symb, &oper_symb);

  if (strchr("+-", oper_symb)) priority = 0;
  if (strchr("*/", oper_symb)) priority = 1;
  if (strchr("%m", oper_symb)) {
    priority = 2;
    if (oper_symb == 'm') *current_symb += 2;
  }
  if (strchr("^", oper_symb)) priority = 3;
  if (strchr("cstCSTqlL", oper_symb)) {
    priority = 4;
    if (strchr("CSTq", oper_symb)) *current_symb += 3;
    if (strchr("cstL", oper_symb)) *current_symb += 2;
    if (oper_symb == 'l') *current_symb += 1;
  }
  if (strchr("(", oper_symb)) priority = 5;

  int stack_priority = peek_priority(stack_c);
  while (stack_priority >= priority && stack_priority != 5) {
    if (oper_symb == '^' && stack_priority == priority) {
      break;
    }
    error = calculator(stack_d, stack_c);
    stack_priority = peek_priority(stack_c);
  }
  push_char(stack_c, oper_symb, priority);

  return error;
}

int output_stack(stack_double **stack_d, stack_char **stack_c, int error,
                 long double *result) {
  while (*stack_c && !error) {
    error = calculator(stack_d, stack_c);
  }
  if (!error)
    pop_double(stack_d, result);
  else
    *result = 0;
  return error;
}
