#include<stdio.h>

int main(){
    /* Accessing array elements in different ways */ 

    int num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
    int i ; 
    for ( i = 0 ; i <= 5 ; i++ ) { 
        printf ( "\naddress = %u ", &num[i] ) ; 
        printf ( "element = %d %d ", num[i], *( num + i ) ) ; // Only num refers to address so used pointer before which helps to access value at that address
        printf ( "%d %d", *( i + num ), i[num] ) ; 
    } 

    // Test_Case
    // char *str = "Name" ;
    // printf("\n%c %c", str[2], 2[str] ) ;// So num[i] is same as i[num] in C
    return 0;
}