#include<stdio.h>

int main(){
    char c ; 
    unsigned char d ; 
    int i ; 
    unsigned int j ; 
    short int k ; 
    unsigned short int l ; 
    long int m ; 
    unsigned long int n ; 
    float x ; 
    double y ; 
    long double z ; 
    /* char */ 
    scanf ( "%c %c", &c, &d ) ; 
    printf ( "%c %c\n", c, d ) ; 
    /* int */ 
    scanf ( "%d %u", &i, &j ) ; 
    printf ( "%d %u\n", i, j ) ; 
    /* short int */ 
    scanf ( "%d %u", &k, &l ) ; 
    printf ( "%d %u\n", k, l ) ; 
    /* long int */ 
    scanf ( "%ld %lu", &m, &n ) ; 
    printf ( "%ld %lu\n", m, n ) ; 
    /* float, double, long double */ 
    scanf ( "%f %lf %Lf", &x, &y, &z ) ; 
    printf ( "%f %lf %Lf\n", x, y, z ) ;

    return 0;
}