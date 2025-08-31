#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 10   // Change stack capacity as needed

typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

// Function prototypes
void initStack(Stack *s);
bool isEmpty(Stack *s);
bool isFull(Stack *s);
bool push(Stack *s, int value);
bool pop(Stack *s, int *value);
bool peek(Stack *s, int *value);

#endif // STACK_H
