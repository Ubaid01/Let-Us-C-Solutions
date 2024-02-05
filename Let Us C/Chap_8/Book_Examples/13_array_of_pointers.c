#include<stdio.h>

// pointer to array means the varaible pointer is pointing to a whole 1d-array index
// array of pointer is collectin of adddresses in array

int main(){
    int *arr[4] ; /* array of integer pointers */
    int i = 31, j = 5, k = 19, l = 71, m ; 
    arr[0] = &i ; 
    arr[1] = &j ; 
    arr[2] = &k ; 
    arr[3] = &l ; 
    for ( m = 0 ; m <= 3 ; m++ ) 
        printf ( "%d ", * ( arr[m] ) ) ; // arr[m] will have adresses so * ( arr[m] ) to know value

    
// An array of pointers can even contain the addresses of other arrays.
    static int a[ ] = { 1, 7, 2, 0, 4 } ; 
    int *p[ ] = { a, a + 1, a + 2, a + 3, a + 4 } ; // 1st element is base address of a i.e. a[0] and so on.
    printf ( "\n%u %u %d", p, *p, * ( *p ) ) ;

/*  Address of p   : [Some memory address] address of the array of pointers p.
    Value at *p    : [ Address of a[0] ] 
    Value at *(*p) i.e. a[0] :         1                */
    return 0;
}