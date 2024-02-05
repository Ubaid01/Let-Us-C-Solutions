#include<stdio.h>
#include<math.h>

#ifndef M_PI // if M_PI is used in code only then it will compile this macro
#define M_PI (3.14159265358979323846)
#endif
// Value of pi (π); It may show error but will calculate on run-time so beter way is to use macros

long long int fact(int n){
    if(n == 0 || n == 1)
        return 1 ;
    else
        return n * fact(n - 1) ;
}

// Using Taylor Series Calculus (Calculus only works in radian)
double calcSine( double radian_angle ){
    double result = 0;
    int sign = 1; // To alternate the signs in the series

    for (int i = 1; i <= 9; i += 2) { // Uptill  5 terms of series
        double term = pow( radian_angle , i ) / fact(i); // As pow returns double so no need to Type-Cast
        result += sign * term; // 1st multiply by sign then add in result
        sign = -sign;
    }

    return result;
}

int main(){
    double degree ;
    printf("Enter your degree angle: ") ;
    scanf("%lf", &degree ) ;

    double radian = degree ;
    while( radian < -360 || radian > 360 ){ // If exceeded the range so substract 1 total round i.e. 360
        if( radian > 360 )
            radian = radian - 360 ;
        else if( radian < -360 )
            radian = radian + 360 ;
    }

// sine +ve in 1st & 2nd quadrant anti-clockwise ; while for clockwise 3rd and 4th qudarant 
    if( ( radian >= 0 && radian <= 180 ) || ( radian <= -180 && radian >= -360 ) ) 
        radian = radian * ( M_PI / 180.0 ) ;
    else 
        radian = radian * ( - M_PI / 180.0 ) ;

    double sinValue = calcSine(radian);
    printf("sin(%.2lf degrees) = %.5lf\n", degree, sinValue);

    return 0;
}