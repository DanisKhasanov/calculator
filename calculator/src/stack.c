#include "smart_calc.h"

void push_double(stack_double **head, long double value) {
  stack_double *temporary_stack = (stack_double *)malloc(sizeof(stack_double));
  temporary_stack->value = value;
  temporary_stack->next = *head;
  *head = temporary_stack;
}

void push_char(stack_char **head, char symbol, int priority) {
  stack_char *temporary_stack = (stack_char *)malloc(sizeof(stack_char));
  temporary_stack->symbol = symbol;
  temporary_stack->priority = priority;
  temporary_stack->next = *head;
  *head = temporary_stack;
}

int pop_double(stack_double **head, long double *value) {
  int error = 0;
  if (*head) {
    stack_double *prev_stack = *head;
    *head = (*head)->next;
    *value = prev_stack->value;
    free(prev_stack);
  } else
    error = -1;
  return error;
}

int pop_char(stack_char **head) {
  int symbol = 0;
  if (*head != NULL) {
    stack_char *prev_stack = *head;
    *head = (*head)->next;
    symbol = prev_stack->symbol;
    free(prev_stack);
  } else
    symbol = -1;
  return symbol;
}

int peek_priority(stack_char **head) {
  int priority = 0;
  if (*head != NULL)
    priority = (*head)->priority;
  else
    priority = -1;
  return priority;
}