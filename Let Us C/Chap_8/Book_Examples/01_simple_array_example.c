#include<stdio.h>

int main(){
    int avg, sum = 0 ; 
    int i ; 
    int marks[10] ; /* array declaration */ 
    for ( i = 0 ; i <= 9 ; i++ ) { 
        printf ( "\nEnter marks " ) ; 
        scanf ( "%d", &marks[i] ) ; /* store data in array */ 
    } 
    for ( i = 0 ; i <= 9 ; i++ ) 
        sum = sum + marks[i] ; /* read data from an array*/ 
    avg = sum / 10 ; 
    printf ( "\nAverage marks = %d", avg ) ;   
    return 0;
}