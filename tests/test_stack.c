#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    int value;

    initStack(&s);

    printf("Testing stack operations...\n");

    // Test isEmpty on new stack
    if (isEmpty(&s)) printf("Stack is empty initially ✅\n");

    // Push elements
    for (int i = 1; i <= STACK_SIZE; i++) {
        push(&s, i * 10);
    }

    // Try pushing beyond limit
    push(&s, 999);

    // Peek at top element
    if (peek(&s, &value))
        printf("Peeked top element: %d ✅\n", value);

    // Pop all elements
    while (!isEmpty(&s)) {
        if (pop(&s, &value))
            printf("Popped: %d\n", value);
    }

    // Try popping from empty stack
    pop(&s, &value);

    return 0;
}
