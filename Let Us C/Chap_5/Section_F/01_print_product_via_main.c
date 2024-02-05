#include<stdio.h>

float product(float a, int b) {
    return a * b ;
}
// If here delimitters are not used even though sinle statement so will give error unlike if(a>b) a = b;

int main(){
    float a ;
    int b;
    printf("Enter a floating point and integer: ") ;
    scanf("%f %d", &a, &b) ;

    printf("%.2f x %d = %.2f", a, b, product( a , b ) ) ;
    return 0;
}