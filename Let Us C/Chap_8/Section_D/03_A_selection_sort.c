// My Method

#include<stdio.h>

// Selection sort means select an index and compare it with all preceding indices till the end and reallocate if condition matches.
void SelectionSort(int arr[] , int n ) {
    for(int i = 0; i < n - 1; i++ ) { // Select elements till 2nd last
        for(int j = i + 1; j < n; j++ ) { // Traverse the remaining elements
            if( arr[j] < arr[i] ) { // If the selected element is greater through traversing replace it
                int temp = arr[i] ;
                arr[i] = arr[j] ; // arr[i] has to be changed directly so then new one will be compared
                arr[j] = temp ;
            }
        }
    }
    printf("Sorted-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
}

int main(){
    int n ;
    printf("Enter the no.of Elements: ") ;
    scanf("%d", &n) ;

    int arr[n] ;
    printf("Enter Array Elements: \n") ;
    for(int i = 0; i < n; i++ ) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr[i] ) ;
    }

    printf("Old-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
    printf("\n") ;

    SelectionSort( arr, n ) ;
    return 0;
}

// // C program for implementation of selection sort (Geeks for Geeks)
// #include <stdio.h>
 
// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }
 
// void selectionSort(int arr[], int n)
// {
//     int i, j, min_idx;
 
//     // One by one move boundary of unsorted subarray
//     for (i = 0; i < n-1; i++)
//     {
//         // Find the minimum element in unsorted array
//         min_idx = i;
//         for (j = i+1; j < n; j++)
//           if (arr[j] < arr[min_idx])
//             min_idx = j;
 
//         // Swap the found minimum element with the selected element
//            if(min_idx != i) // If in same loop i's value has been changed from presetted one
//             swap(&arr[min_idx], &arr[i]);
//     }
// }
 
// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }