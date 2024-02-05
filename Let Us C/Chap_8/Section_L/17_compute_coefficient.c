#include<stdio.h>
#include<math.h>

int main() {
    double x[11] = { 34.22 ,39.87 ,41.85 ,43.23 ,40.06 ,53.29 ,53.29 ,54.14 ,49.12 ,40.71 ,55.15 } ;
    double y[11] = { 102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.5 } ;

    double n = 11 , sum_prod = 0, sum_x = 0, sum_y = 0 , sum_sq_x = 0, sum_sq_y = 0 ;
    for(int i = 0; i < 11; i++) {
        sum_prod += x[i] * y[i] ;      // E xy  (summasion of product of x and y)
        sum_x += x[i]  ;               // E x
        sum_y += y[i] ;                // E y 
        sum_sq_x += pow( x[i] , 2 ) ;  // E x^2
        sum_sq_y += pow( y[i] , 2 ) ;  // E y2
    }

    double r = ( ( n *  sum_prod )- ( sum_x * sum_y ) ) / sqrt ( ( ( n * sum_sq_x - ( pow ( sum_x , 2 ) ) ) * ( n * sum_sq_y - ( pow ( sum_y , 2 ) ) ) ) ) ; // Pearson correlation coefficient (r)

    printf("Correlation_Constant (r) of given data-set = %lf ", r ) ;

// Proper steps
    // double r_num = (n * sum_prod) - (sum_x * sum_y); // Numerator of r
    // double r_den = sqrt((n * sum_sq_x - pow(sum_x, 2)) * (n * sum_sq_y - pow(sum_y, 2))); // Denominator of r
    // double r1 = r_num / r_den; 
    return 0 ;    
}
