#include<stdio.h>

int main(){
    int i = 3, *x ; 
    float j = 1.5, *y ; 
    char k = 'c', *z ; 
    printf ( "\nValue of i = %d", i ) ; 
    printf ( "\nValue of j = %f", j ) ; 
    printf ( "\nValue of k = %c", k ) ; 
    x = &i ; 
    y = &j ; 
    z = &k ; 
    printf ( "\nOriginal address in x = %u", x ) ; 
    printf ( "\nOriginal address in y = %u", y ) ; 
    printf ( "\nOriginal address in z = %u", z ) ; 
    x++ ; // This will increment the address of pointer to next element like in array from a[0] to a[1]
    y++ ; 
    z++ ; 
    printf ( "\nNew address in x = %u", x ) ; // For int and float +4 gap
    printf ( "\nNew address in y = %u", y ) ; 
    printf ( "\nNew address in z = %u", z ) ; // For char pointer only +1

    // Substractuion of one pointer to another
    int arr[ ] = { 10, 20, 30, 45, 67, 56, 74 } ; 
    int *a, *b ; 
    a = &arr[1] ; // Adddress of 2nd element
    b = &arr[5] ; // Addresses of 2nd element + 16 i.e. (4 * 4) sizeofinteger => 4
    printf ( "\n%d %d", b - a , *b - *a ) ; // First one will decrement the addresses i.e. addresses gap b/w them like 5 - 1 = 4 addresses gap . This is because j and i are pointing to locations that are 4 integers apart. While 2nd one will decrement the values pointers are holding
    return 0;
}