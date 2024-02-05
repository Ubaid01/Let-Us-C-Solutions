#include<stdio.h>

// HCF (GCD) by Eculid's algorithm
int greatestCommonDivisor(int a, int b){
    int digit , result ;
    while( b != 0 ){
        result = b ; // To store previously stored result
        digit = a / b ;
        b = a - ( digit * b ) ;
        a = result ; // Replace with previous value of b i.e. result 
    }
    return result ;
}

int findGCD(int J, int K) {
    int temp;
    while (K != 0) {
        temp = K;
        K = J % K; // This is equal to the above whole process (above one is short cut to find remainder manually)
        J = temp;
    }
    return J;
}

int main(){
    int a , b ;
    printf("Enter your 2 numbers: ") ;
    scanf("%d %d", &a, &b ) ;
    printf("GCD Of %d and %d = %d", a, b, greatestCommonDivisor( a , b ) ) ;
    printf("\n2nd Mehtod:- GCD Of %d and %d = %d", a, b, findGCD( a , b ) ) ;
    return 0;
}