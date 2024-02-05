#include<stdio.h>

int main(){
    float ftemp, ctemp; 
    printf("Type temperature in degrees fahrenheit: \n"); 
    scanf("%f", &ftemp); 
    ctemp = (ftemp-32.0) * 5.0 / 9.0; // Either use type-cast (int) or use decimals like 5.0 / 9.0
    printf("Temperature in degrees centigrade is %.2f", ctemp); 
    return 0;
}