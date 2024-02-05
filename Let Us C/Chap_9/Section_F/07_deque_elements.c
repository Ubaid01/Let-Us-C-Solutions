#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Structure to represent deque(double ended que)
struct Deque {
    char elements[MAX_SIZE];
    int left, right;
};

// Initialize deque
void initializeDeque(struct Deque *dq) {
    dq->left = -1;
    dq->right = 0;
}

// Check if deque is full
bool isFull(struct Deque *dq) {
    return (dq->left == 0 && dq->right == MAX_SIZE - 1) || dq->left == dq->right + 1;
}

// Check if deque is empty
bool isEmpty(struct Deque *dq) {
    return dq->left == -1;
}

// Insert element at left end of deque
void insertLeft(struct Deque *dq, char element) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (dq->left == -1) {
        dq->left = dq->right = 0;
    } else if (dq->left == 0) {
        dq->left = MAX_SIZE - 1;
    } else {
        dq->left--;
    }
    dq->elements[dq->left] = element;
}

// Insert element at right end of deque
void insertRight(struct Deque *dq, char element) {
    if (isFull(dq)) {
        printf("Deque is full. Cannot insert.\n");
        return;
    }
    if (dq->left == -1) {
        dq->left = dq->right = 0;
    } else if (dq->right == MAX_SIZE - 1) {
        dq->right = 0;
    } else {
        dq->right++;
    }
    dq->elements[dq->right] = element;
}

// Retrieve element from left end of deque
char retrieveLeft(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot retrieve.\n");
        return '\0';
    }
    char element = dq->elements[dq->left];
    if (dq->left == dq->right) {
        dq->left = dq->right = -1;
    } else if (dq->left == MAX_SIZE - 1) {
        dq->left = 0;
    } else {
        dq->left++;
    }
    return element;
}

// Retrieve element from right end of deque
char retrieveRight(struct Deque *dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty. Cannot retrieve.\n");
        return '\0';
    }
    char element = dq->elements[dq->right];
    if (dq->left == dq->right) {
        dq->left = dq->right = -1;
    } else if (dq->right == 0) {
        dq->right = MAX_SIZE - 1;
    } else {
        dq->right--;
    }
    return element;
}

int main() {
    struct Deque dq;
    initializeDeque(&dq);

    insertLeft(&dq, 'A');
    insertRight(&dq, 'B');
    insertLeft(&dq, 'C');
    insertRight(&dq, 'D');

    printf("Elements in the deque: ");
    while (!isEmpty(&dq)) {
        printf("%c ", retrieveLeft(&dq));
    }
    printf("\n");

    return 0;
}
