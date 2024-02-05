#include <stdio.h>

void circularShiftLeft(int arr[], int size, int times) {
// For Original Question
    // int temp[2]; // To store the first two elements
    // // Store the first two elements  
    // temp[0] = arr[0];
    // temp[1] = arr[1];

    // // First check times (if greater han or equal to size so ) 
    // times = times % size ; // Used to check each case whether greater than size so it reduces times to the current cycle only
    int temp[times]; // Temporary array to store elements to be shifted
    for(int i = 0; i < times ; i++) {
        temp[i] = arr[i] ;
    }

    // Shift elements two positions to the left
    for (int i = 0; i < size - times; i++) {  
        arr[i] = arr[i + 2];
    }

    // // Assign stored elements at the end of the array
    // arr[size - 2] = temp[0];
    // arr[size - 1] = temp[1];

    // for(int i = 0 ; i < times ; i++) { // OR derive formula for array assigning
    //     arr[ size - i - 1 ]  = temp [ i ] ;
    // }
    // OR
    // Assign stored elements at the end of the array
    for (int i = size - times; i < size; i++) {
        arr[i] = temp[i - (size - times)];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int p[5] = {15, 30, 28, 19, 61} , times ;
    printf("Enter how many positions to be shifted left: ") ;
    scanf("%d", &times) ;

    printf("Original array: ");
    printArray( p, 5 );

    circularShiftLeft( p, 5 , times );

    printf("Array after circular left shift by two positions: ");
    printArray( p, 5 );

    return 0;
}
