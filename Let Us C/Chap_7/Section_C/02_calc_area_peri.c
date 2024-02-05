#include<stdio.h>
#include"areaperi.h"


int main(){
    float tri_base = 4 , tri_height = 5 , sq_side = 3 ;
    float circle_side = 6.25 ;

    printf("Triangle Area = %.2f & Perimeter = %.2f.\n", TRIANGLE_AREA(tri_base, tri_height) , TRIANGLE_PERIMETER(tri_base, tri_base, tri_base ) ) ; 
    printf("Square Area = %.2f & Perimeter = %.2f.\n", SQUARE_AREA(sq_side) , SQUARE_PERIMETER(sq_side) ) ; 
    printf("Circle Area = %.2f & Perimeter = %.2f.\n", CIRCLE_AREA(circle_side) , CIRCLE_PERIMETER(circle_side) ) ; 
    return 0;
}