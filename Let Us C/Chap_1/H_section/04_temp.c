#include<stdio.h>

int main(){
    float far,cel;
    printf("Enter temperature in farenheit: ");
    scanf("%f",&far);
    cel = 5.0 * (far-32) / 9.0 ;
    printf("Temperature in Celsius is %.2f",cel);
    return 0;
}