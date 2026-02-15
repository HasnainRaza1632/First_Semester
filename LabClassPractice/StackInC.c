#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10 // Define the maximum size of the stack

// Structure to represent the stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function prototypes
void initialize(struct Stack *s);
int isEmpty(struct Stack *s);
int isFull(struct Stack *s);
void push(struct Stack *s, int newItem);
int pop(struct Stack *s);
int peek(struct Stack *s);

int main() {
    // Dynamically allocate memory for the stack structure
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    initialize(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);

    printf("Top element is: %d\n", peek(s)); // Output: 30

    printf("Popped element: %d\n", pop(s)); // Output: 30
    printf("Popped element: %d\n", pop(s)); // Output: 20

    printf("Is the stack empty? %s\n", isEmpty(s) ? "True" : "False"); // Output: False

    push(s, 40);
    printf("Top element is now: %d\n", peek(s)); // Output: 40

    free(s); // Free the allocated memory
    return 0;
}

// Initialize the stack by setting top to -1
void initialize(struct Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Check if the stack is full
int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Add an element to the top of the stack
void push(struct Stack *s, int newItem) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", newItem);
    } else {
        s->items[++s->top] = newItem;
        printf("Pushed %d to the stack.\n", newItem);
    }
}

// Remove and return the top element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop from empty stack.\n");
        return -1; // Return an error value
    } else {
        int poppedItem = s->items[s->top--];
        return poppedItem;
    }
}

// Return the top element without removing it
int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is Empty! No top element to peek.\n");
        return -1; // Return an error value
    } else {
        return s->items[s->top];
    }
}