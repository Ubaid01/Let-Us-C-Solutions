#include<stdio.h>
#include<math.h>

double power(double base, float exp){
    double result = 1.0 ;
    if( fmod( exp , 1 ) == 0 ) { // check if the exponent given is a complete whole number OR NOT
        if ( exp >= 0 ) {
            for(int i = 1 ; i <= exp; i++){
                result *= base ; // Multiple base by previous result till exponent times
            }
        }
        else { // For -ve whole number exponent => 5 ^-2 => 1/5 ^2
             exp = -exp ;
             base = 1 / base ;
            for(int i = 1 ; i <= exp; i++){
                result *= base ; 
            }
        }
        return result ;
    }
    else
        return pow( base , exp ) ;
}

int main(){
    double base , exp ;
    printf("Enter your base and exponent: ");
    scanf("%lf %lf", &base, &exp );

    double test = power( base, exp ) ;
    printf("%.2lf raised to %.2lf times = %.3lf", base, exp, test ) ;
    return 0;
}