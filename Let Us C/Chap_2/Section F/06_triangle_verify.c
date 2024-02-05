#include <stdio.h>

int main() {
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the triangle is valid (Check For All Sides)
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
        printf("The triangle is valid.\n");
    else 
        printf("The triangle is not valid.\n");

    return 0;
}
