#include<stdio.h>

#define ARITHMETIC_MEAN(x, y) ( ( (float) x + y ) / 2) // type-casted cause if int given so direcly converts it to float OR else multiply by 0.5 instead of 1 / 2
#define ABSOLUTE_VALUE(x) (((x) < 0) ? -(x) : (x))
#define IS_UPPER_CASE(c) ((c >= 'A' && c <= 'Z') ? 1 : 0)
#define TO_LOWER_CASE(c) ((IS_UPPER_CASE(c)) ? ((c) + 32) : (c))
#define MAX(a, b) ((a > b) ? a : b)


int main(){
    printf("Average of 5 & 6 = %.2f\n", ARITHMETIC_MEAN(5, 6) ) ;
    printf("Absolute of -99 = %d\n", ABSOLUTE_VALUE(99) ) ;
    int e = MAX( 40, 33 ) ;
    printf("%d is max number.\n", e ) ;
    return 0;
}