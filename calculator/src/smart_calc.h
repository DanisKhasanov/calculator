
#ifndef SRC_SMARTCALC_H_
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack_double {
  double value;
  struct stack_double *next;
} stack_double;

typedef struct stack_char {
  char symbol;
  int priority;
  struct stack_char *next;
} stack_char;

/*STACK*/
void push_double(stack_double **head, long double value);
void push_char(stack_char **head, char symbol, int priority);
int pop_double(stack_double **head, long double *value);
int pop_char(stack_char **head);
int peek_priority(stack_char **head);

/*PARSER*/
int input_stack(char *current_str, long double *result);
int check_str(char *str);
int operator_stack(char **sym_str, char *oper_symb);
int output_stack(stack_double **stack_d, stack_char **stack_c, int error,
                 long double *result);
int polish_not(char **sym_str, stack_double **stack_d, stack_char **stack_c);

/*CALCULATOR*/
int calculator(stack_double **stack_d, stack_char **stack_c);

#endif  // SRC_SMARTCALC_H_
