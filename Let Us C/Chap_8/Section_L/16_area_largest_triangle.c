#include<stdio.h>
#include<math.h>

#ifndef M_PI
#define M_PI 3.141592653589793 
#endif

int main(){
    double a[6] = { 137.4 , 155.2, 149.3, 160.0, 155.6, 149.7 } ;  
    double b[6] = { 80.9, 92.62, 97.93, 100.25, 68.95, 120.0 } ;
    double angle[6] = { 0.78, 0.89, 1.35, 9.00, 1.25, 1.75 } ,  max_area = 0 ;  
    
    for( int i = 0; i < 6; i++ ) {
        double area[6] ; 
        area[i] = 0.5 * ( a[i]  * b[i] * sin( angle[i] ) ) ; // Used 0.5 isead of 1 / 2 cause to avoid double to int error
        printf("Area of Triangle-%d = %lf \n", i + 1,  area[i] ) ;

        if( area[i] > max_area ) // Used after so check for all areas and free area afterwards
            max_area = area[i] ;
    }

    printf("\nMaximum Area = %lf ", max_area ) ;

    // printf("%lf", sin(M_PI * 45 / 180) ) ; // Works in Radian only
    return 0; 
}