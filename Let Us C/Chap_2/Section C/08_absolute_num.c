#include<stdio.h>
#include<math.h>

int main(){
    float num;
    printf("Enter your number: ");
    scanf("%f", &num);

    if( num >=0 )
        printf("Absolute number is %.2f", num);
    else
        printf("Absolute number is %.2f", -num); // -ve added so to make sign +ve => -ve(-ve)

    printf("\nAbsolute number is %.2f", fabs(num)); // OR by using library
    
    return 0;
}