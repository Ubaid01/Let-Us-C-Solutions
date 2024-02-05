#include<stdio.h>

int MinValCalc( int *arr, int n ) {
    int min_val = *arr ; // // Set the first element as the initial smallest value by dereference
    for(int i = 1; i < n ; i++ ) { // check from 2nd till last element
        if( *( arr + i ) < min_val ) { // Dereference pointer and compare with min_val
            min_val = *( arr + i ) ;
        }
    }
    return min_val ;
}

int main(){
    int n;
    printf("Enter no.of Elements: ") ;
    scanf("%d", &n ) ;

    int arr[n] ;
    printf("Enter Elements of Array-1: \n") ;

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr[i] ) ;
    }   

    int min = MinValCalc( arr , n ) ;
    printf("Minimum Value in Array = %d ", min ) ;
    return 0;
}