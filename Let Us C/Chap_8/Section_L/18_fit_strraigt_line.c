#include<stdio.h>
#include<math.h>

int main(){
    double x[10] = { 3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0 } ;    
    double y[10] = { 1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0  } ;   

    // Method of least squares. ( y = mx + c  Here y = a + bx )
    double n = 10 , sum_prod = 0, sum_x = 0, sum_y = 0 , sum_sq_x = 0;
    for(int i = 0; i < 10; i++) {
        sum_prod += x[i] * y[i] ;      // E xy  (summasion of product of x and y)
        sum_x += x[i]  ;               // E x
        sum_y += y[i] ;                // E y 
        sum_sq_x += pow( x[i] , 2 ) ;  // Σx^2
        // sum_sq_x += x[i] * x[i];       
    }

    double b = ( ( ( n * sum_prod ) - ( sum_x * sum_y ) ) / ( ( n * sum_sq_x ) - ( pow( sum_x , 2 ) ) ) ) ;

    double a = ( ( sum_y - ( b * sum_x ) ) / n ) ;

    printf("a = %lf and b = %lf\n", a , b ) ;
    printf("Therefore eq of lines that best fits the given points is approximately: \n\t\ty = %.2lf + %.2lfx .", a, b ) ;
    return 0;
}
