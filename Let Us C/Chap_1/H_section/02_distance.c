#include<stdio.h>

int main(){
    float dist;
    printf("Enter the distance b/w cities in kilometers: ");
    scanf("%f", &dist);
    float met = dist * 1000;
    printf("Distance b/w cities in meters is: %.2f meters\n",met);
    float feet = dist * 3280.84;;
    printf("Distance b/w cities in feet is: %.2f feet\n",feet);
    float inch = dist * 39370.1;
    printf("Distance b/w cities in inches is: %.2f inches\n",inch);
    float cms = dist * 100000;
    printf("Distance b/w cities in cm is: %.2f centimeters\n",cms);
    return 0;
}