// My Mehtod

#include<stdio.h>

void BubbleSort( int arr[], int n ) {
    for(int i = 0; i < n ; i++ ) { // Will check whole array
// the inner loop doesn't need to check the last i elements because they are already in their correct positions after previous iterations.
        for(int j = 0 ; j < n - i - 1; j++ ) { // Will iterate reversely for i = 0 j will be (n - 1) times i.e. whole array and will start to decrease for last i = n - 1 it will only compare j = 0 to j = 1 so n - (n - 1)= +1 substract 1 also so that it is j < 1 and only checks for j = 0 and j = 1 doesn't check ahead for overflowj = 2.
           if( arr[j] > arr[j + 1] ) { // Check consecutive nums only
                int random = arr[j + 1] ;
                arr[j + 1] = arr[j] ;
                arr[j] = random ;
            }
        }
    }
}
int main(){
    int arr[5] = { 44, 33, 55, 22, 11 } , n = 5 ;

    printf("Old-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
    printf("\n") ;

    BubbleSort( arr , 5 ) ;
    printf("Sorted-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
    return 0;
}

// // Optimized implementation of Bubble sort (Geeks for geeks method)
// #include <stdbool.h>
// #include <stdio.h>
 
// void swap(int* xp, int* yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// // An optimized version of Bubble Sort
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     bool swapped;
//     for (i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//                 swapped = true;
//             }
//         }
 
//         // If no two elements were swapped by inner loop,
//         // then break
//         if (swapped == false)
//             break;
//     }
// }
 
// // Function to print an array
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         printf("%d ", arr[i]);
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }