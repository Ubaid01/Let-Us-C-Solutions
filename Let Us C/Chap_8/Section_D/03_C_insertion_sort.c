#include<stdio.h>


void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // Start checking from 1 num ahead
        int temp = arr[i]; 
        int j = i - 1; // But traverse the previous whole array so j = i - 1
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > temp) { // traverse if both condition TRUE
            arr[j + 1] = arr[j];
            j-- ;
        }
        // If while block not run so j will remain same(no decremented) and store in j + 1 as j = i - 1
        arr[j + 1] = temp;
    }
}

int main(){
    int arr[5] = { 44, 33, 55, 22, 11 } , n = 5 ;

    printf("Old-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
    printf("\n") ;

    InsertionSort( arr , n ) ;
    printf("Sorted-Array: ") ;
    for(int i = 0; i < n; i++ ) {
        printf("%d ", arr[i] ) ;
    }
    return 0;
}