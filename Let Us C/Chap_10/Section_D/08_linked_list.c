// Source from Internet

#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;  // Stores next heads null pointer
};

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

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

// Function to add a node at the beginning of the linked list
struct Node* addAtBeginning(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    newNode->next = head;
    return newNode;
}

// Function to add a node at the end of the linked list
struct Node* addAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to add a node at a specified position in the linked list
struct Node* addAtPosition(struct Node* head, int value, int position) {
    if (position <= 0) {
        printf("Invalid position. Position should be greater than 0.\n");
        return head;
    }

    if (position == 1 || head == NULL) {
        return addAtBeginning(head, value);
    }

    struct Node* newNode = createNode(value);
    struct Node* temp = head;
    int count = 1;

    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position is out of bounds.\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

int main() {
    struct Node* head = NULL;

    // Adding nodes at the beginning
    head = addAtBeginning(head, 10);
    head = addAtBeginning(head, 20);
    head = addAtBeginning(head, 30);
    display(head);

    // Adding nodes at the end
    head = addAtEnd(head, 40);
    head = addAtEnd(head, 50);
    display(head);

    // Adding a node at a specified position
    head = addAtPosition(head, 25, 2);
    display(head);

    return 0;
}
