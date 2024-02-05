#include<stdio.h>

void modify( int arr[], int n ) {
    for(int i = 0; i < n; i++ ) {
        // arr[i] = arr[i] * 3 ; // Direct by array OR
        *( arr + i ) = * ( arr + i ) * 3 ; // First dereference pinter then multiply
    }
}

int main(){
    int num[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 } ; // Initialized 10 elements

    modify( num , 10 ) ;
    printf("New-Array: ") ;
    for(int i = 0; i < 10; i++ ) {
        printf("%d ", num[i] ) ;
    }
    return 0;
}