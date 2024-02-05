#include<stdio.h>

void ReverseArray( int arr[], int revArr[], int n ) {
    // for(int i = n - 1 ; i >=0 ; i-- ) {
    //     revArr[n - i - 1] = arr[i] ; // To convert to 0  n - (n - 1) + x = 0 So x => - 1 
    // }

    // OR 
    for( int i = 0 ; i < n / 2 ; i++ ) {
        int temp = arr[i] ;
        arr[i] = arr[n - i - 1] ;
        arr[n - i - 1] = temp ;
    }

    printf("Reverse Array: \n") ;
    for(int i = 0; i < n; i++ ) {
        // printf("%d ", revArr[i] ) ;
        printf("%d ", arr[i] ) ;
    }
}

int main(){
    int n;
    printf("Enter no.of Elements: ") ;
    scanf("%d", &n ) ;

    int arr1[n] , arr2[n] ;
    printf("Enter Elements of Array-1: \n") ;
    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr1[i] ) ;
    }

    ReverseArray( arr1 , arr2 , n ) ;
    return 0;
}