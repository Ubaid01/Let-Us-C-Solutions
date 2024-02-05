#include<stdio.h>
#include<math.h>

int main(){
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Pythagoras-Theorem (HYP)^2 = (PERP)^2 + (BASE)2
    if ( pow(side1 , 2) == pow(side2 , 2) + pow(side3 , 2) ||
         pow(side2 , 2) == pow(side1 , 2) + pow(side3 , 2)||
         pow(side3 , 2) == pow(side1 , 2) + pow(side2 , 2) ){
        printf("The triangle is a right-angled triangle.\n");
    } // This will only run when Right-Angled

    if(side1 == side2 == side3)
        printf("It is an Equilateral Triangle!");
    else if(side1 == side2 || side2 == side3 || side1 == side3)
        printf("It is an Isosceles Triangle!");
    else
        printf("It is a Scalene Triangle!");

    return 0;
}