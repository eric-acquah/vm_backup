#ifndef STACK
#define STACK

#include <stdio.h>
#include <unistd.h>

#define MAX 100

int stack[MAX];

void display(void);

int is_full(void);

int is_empty(void);

int pop(void);

void push(int value);

#endif
