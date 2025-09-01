#include "stack.h"
#include <stdio.h>

//This function initializes the stack
void initStack(Stack *s) {
    s->top = -1;
}
//This function checks if the stack is empty
bool isEmpty(Stack *s) {
    return (s->top == -1);
}

bool isFull(Stack *s) {
    return (s->top == STACK_SIZE - 1);
}

//This function pushes an element onto the stack
bool push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return false;
    }
    s->data[++(s->top)] = value;
    return true;
}

bool pop(Stack *s, int *value) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
        return false;
    }
    *value = s->data[(s->top)--];
    return true;
}

bool peek(Stack *s, int *value) {
    if (isEmpty(s)) {
        printf("Stack is empty! Cannot peek\n");
        return false;
    }
    *value = s->data[s->top];
    return true;
}
