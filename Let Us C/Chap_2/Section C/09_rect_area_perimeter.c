#include <stdio.h>

int main() {
    double length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &breadth);

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter) 
        printf("The area of the rectangle is greater than its perimeter.\n");
    else if(area < perimeter) 
        printf("The area of the rectangle is not greater than its perimeter.\n");
    else
        printf("Both are Equal!");

    return 0;
}