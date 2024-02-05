// #include<stdio.h>

// int main(){
//     double base, exp, pow = 1; // preset to 1 as any base raise to 0 is 1 => 2^0 = 1
//     double a, b;
//     printf("Enter the base and exponent: ");
//     scanf("%d %d", &base, &exp);

//     if(exp < 0){
//             a = base; 
//             b = exp; 
//             base = 1.0 / base;
//             exp = -exp;
//     }

//     for(int i=1; i<=exp ; i++){
//         pow *= base;
//     }

//     if(exp < 0)
//         printf("%.1lf raised to %.1lf is %.2lf", a , b, pow);
//     else
//         printf("%.1lf raised to %.1lf is %.2lf", base, exp, pow);
//     return 0;
// }

// I had used loop but due to its inefficiency in handling multiple multipying and float data-types
// Manage easily by if-else in user-defined functions
#include <stdio.h>
#include <math.h>

double power(double base, double exp) {
    if (exp == 0) 
        return 1.0; // preset to 1 as any base raise to 0 is 1 => 2^0 = 1
    else if (exp < 0) 
        return 1.0 / (base * power(base, -exp - 1));  // Muliply base by reciprocaling and using pow(exp-1)
    else if (fmod(exp, 1.0) == 0) { // Check if exp is an integer.fmod is same as n % 1 operator in integers as all integers will be divisible by 1
        int intExp = (int)exp;
        double result = 1.0;
        for (int i = 0; i < intExp; i++) {
            result *= base;
        }
        return result;
    } 
}

int main() {
    double base, exp;
    printf("Enter the base and exponent: ");
    scanf("%lf %lf", &base, &exp);

    if(fmod(exp , 1.0) == 0){ // Only for integer exponents
        double result = power(base, exp);
        printf("%.1lf raised to %.1lf is %.2lf\n", base, exp, result);
    }
    else{
        double result = pow(base, exp);
        printf("%.1lf raised to %.1lf is %lf\n", base, exp, result);
    }
    return 0;
}
