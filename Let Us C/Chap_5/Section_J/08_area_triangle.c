#include<stdio.h>
#include<math.h>

double areaofTriangle(double a, double b, double c){
    double S = ( a + b + c ) / 2 ; // Semi-perimeter (used brackets as whole divided by 2)
    double result = sqrt(S * (S - a) * (S - b) * (S - c) ) ; // Heron' Formula for area of 
    return result ;
}
int main(){
    double a, b, c ;
    printf("For Triangle:- \n") ;
    printf("Enter the length of Side BC : ") ;
    scanf("%lf", &a ) ; 
    printf("Enter the length of Side CA : ") ; 
    scanf("%lf", &b ) ; 
    printf("Enter the length of Side AB : ") ; 
    scanf("%lf", &c ) ; 

    if (a + b > c && a + c > b && b + c > a){ // Two sides sum must be individually greater than remaing one
        printf("Area Of triangle = %.2lf", areaofTriangle(a, b, c) ) ;
    }
    else
        printf("Triangle with given sides is NOT Possible.\n") ;
    return 0;
}