#include<stdio.h>

void fun ( int b ) { 
 b = 60 ;
 printf ( "\n%d", b ) ; 
}

void display ( int j ) { 
    int k = 35 ; 
    printf ( "\n%d", j ) ; 
    printf ( "\n%d", k ) ; 
} 

// float square ( float x ) { 
int square ( float x ) { // If int setted as data-type so it will also reduce the value to previous whole number
 float y ; 
 y = x * x ; 
 return ( y ) ; 
}

int main(){
    int a = 30 ; 
    fun ( a ) ; 
    printf ( "\n%d", a ) ; 

    int i = 20 ; 
    display ( i ) ; 

    // Function Calling
    float a, b ; 
    printf ( "\nEnter any number " ) ; 
    scanf ( "%f", &a ) ; 
    b = square ( a ) ; 
    printf ( "\nSquare of %f is %f", a, b ) ;  

    return 0;
}
