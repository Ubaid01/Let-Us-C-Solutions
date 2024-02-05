#include <stdio.h>

void circularRightShift(int *x, int *y, int *z, int n) {
    for(int i = 1 ; i <= n ; i++) {
        int temp = *z; // Saves 3rd value
        *z = *y; // Now z contains 2nd value
        *y = *x; // y becomes 1st
        *x = temp; // x has last value i.e. of z
    }
}

int main() {
    int x = 5, y = 8, z = 10, n ;
    // printf("Enter 3 numbers: ") ;
    // scanf("%d %d %d", &x, &y, &z ) ;
    printf("How many times you want to shift value: ");
    scanf("%d", &n ) ;

    printf("Initial values: x = %d, y = %d, z = %d\n", x, y, z);

    circularRightShift(&x, &y, &z, n);
    printf("After circular right shift: x = %d, y = %d, z = %d\n", x, y, z) ;

// If wanted to show according to question BUT will get confuse as changing values can't be recognize easily
    // if( n % 3 == 1 ) // i.e. 1, 4, 7......
    //     printf("y = %d, z = %d, x = %d\n", y, z, x) ;
    // else if ( n % 3 ==2 ) 
    //     printf("z = %d, x = %d, y = %d\n", z, x, y ) ;
    // else 
    //     printf("x = %d, y = %d, z = %d\n", x, y, z) ;

    return 0;
}
