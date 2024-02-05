// Source from Internet

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Maximum size of the stack

// Node structure for the stack
struct Node {
    int data;
    struct Node* next;
};

// Stack structure
struct Stack {
    struct Node* top;
    int size; // Current size of the stack
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to initialize an empty stack
struct Stack* initializeStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    stack->top = NULL;
    stack->size = 0; // Initialize size to zero
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return (stack->size == MAX_SIZE);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push %d onto the stack.\n", value);
        // exit(1);
        return; // Return without pushing if stack is full so program not terminates
    }

    struct Node* newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
    printf("Pushed %d onto the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        exit(1);
    }
    struct Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = temp->next;
    free(temp);
    stack->size--;
    return poppedValue;
}

// Function to display the elements in the stack
void displayStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return;
    }
    struct Node* temp = stack->top;
    printf("Stack elements from top to bottom: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = initializeStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    displayStack(stack);

    printf("Popped element: %d\n", pop(stack));
    displayStack(stack);
    // Attempting to push more elements beyond the maximum size
    push(stack, 60);
    push(stack, 70);
    return 0;
}