//Stack Implementation Using Singly Linked List in C
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node of the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Global pointer to represent top of stack
Node* top = NULL;

// Function to check if the stack is empty
int isEmpty() {
    return top == NULL;
}

// Function to push an element onto the stack
void push(int data) {
    Node* newNode = createNode(data);
    if (!newNode) {
        printf("Stack Overflow\n");
        return;
    }
    newNode->next = top;
    top = newNode;
}

// Function to pop the top element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    Node* temp = top;
    int poppedValue = top->data;
    top = top->next;
    free(temp);
    return poppedValue;
}

// Function to peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        return -1;
    }
    return top->data;
}

// Function to print the stack
void printStack() {
    Node* temp = top;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Driver code
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Stack: ");
    printStack();

    pop();
    pop();

    printf("Stack after popping two elements: ");
    printStack();

    printf("Top element is: %d\n", peek());
    

    return 0;
}
