#include<stdio.h>
#include<stdlib.h>

int getint( char str[] ) {
    int num = 0;
    int sign = 1; // To handle negative numbers
    int i = 0;

    // Check for sign (+/-)
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            // num = num * 10 + (str[i] - '0'); // Original num - 48 (ASCII for zero) 
            num = num * 10 + ( str[i] - 48 ); // OR also no need to typecast as storing in int varaible (int)  .
        } 
        
        else {
            break; // If non-digit encountered, stop conversion
        }
        i++;
    }

    return num * sign;
}

int main(){
    int a ;
    a = getint("123") ; 
    int b = atoi("123") ; // OR can use atoi function in stdlib
    printf ( "you entered %d %d", a , b) ;
   return 0;
}