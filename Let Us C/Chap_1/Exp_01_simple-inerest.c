#include<stdio.h>

int main(){
    int   p, n ; 
    float FLOAT; // As C- is case sensitive so valid name
    float   r, si ; 
    printf ( "Enter values of p, n, r :\n" ) ; 
    scanf ( "%d %d %f", &p, &n, &r ) ; 
    /* formula for simple interest */ 
    FLOAT = p * n * r / 100 ; // si = p * n * r /100  
    printf ( "%f" , FLOAT ) ;
    return 0;
}