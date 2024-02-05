#include<stdio.h>

/* mixed has some char and some int values */ 
// int char mixed[100] ; // 2 different data types declared use char to store both int & chars

int main(){
//     int a[10], i ;
//     for ( i = 1 ; i <= 10 ; i++ )  { 
//     printf("\nEnter: ") ;
//     // scanf ( "%d", a[i] ) ; // And also address operator not used here
//     scanf ( "%d", &a[i] ) ; 
//     printf ( "%d", a[i] ) ; 
//     }

    // int size ; 
    // scanf ( "%d", &size ) ; 
    // int arr[size] ; 
    // for (int i = 1 ; i <= size ; i++ ) { // i not declared here
    //     printf("\nEnter: ") ;
    //     scanf ( "%d", &arr[i] ) ; // Address operator again not used here 
    //     printf ( "%d", arr[i] ) ; 
    // } 

    int i, a = 2, b = 3 ; 
    int arr[ 2 + 3 ] ; 
    for ( i = 0 ; i < a+b ; i++ ) { // No Error in this code...
        printf("Enter: ") ;
        scanf ( "%d", &arr[i] ) ; 
        printf ( "\n%d", arr[i] ) ; 
    }
    return 0;
}