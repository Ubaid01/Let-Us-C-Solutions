#include<stdio.h>

void swapIndices1stMethod( int arr[], int n ) {
    for(int i = 0; i < n - 1; i += 2 ) { // Swap 0th index(odd row) with 1st index(even row) Used till n - 1 so  it accounts for both cases if last n = 5 i.e. arr[4] last so it doesn't start for it but if n = 6 i.e. arr[5] so it replaces next with previous
        int temp = arr[i] ;
        arr[i] = arr[i + 1] ;
        arr[i + 1] = temp ;
    }
}

void swapIndices2ndMethod( int arr[], int n ) {
    for(int i = 0; i < n / 2 ; i++ ) {  // Less than n / 2 cause if n / 2 so arr[2 * ( n / 2) + 1] = arr[  2*n  + 1 ] which is not possible for any array
        int temp = arr[ 2*i ] ; // For 0th or odd component
        arr[ 2*i ] = arr[ 2*i + 1 ] ;
        arr[ 2*i + 1 ] = temp ; // For 1st or even component
    }
}

int main(){
    int n ;
    printf("Enter Total no.of Elements: ") ;
    scanf("%d", &n ) ;

    int num[n] ;
    for(int i = 0; i < n; i++) {
            printf("Enter Number-%d: ", i + 1 ) ;
            scanf("%d", &num[i] ) ;
    } 

    swapIndices2ndMethod( num , n ) ;
    printf("{ ") ;
    for(int i = 0; i < n; i++) {
        printf("%d ", num[i] ) ;
    }
        printf("}\n") ;




    return 0;
}