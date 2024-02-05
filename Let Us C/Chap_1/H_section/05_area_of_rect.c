#include<stdio.h>

int main(){
    float len,width,rad;
    printf("Enter the length of rectangle: ");
    scanf("%f",&len);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&width);
    printf("Enter the radius of circle: ");
    scanf("%f",&rad);

    printf("Area of Rectangle = %.2f\n",len * width);
    printf("Perimeter of Rectangle = %.2f\n",2 * (len + width));
    printf("Area of Circle = %.2f\n",3.142 * rad * rad);
    printf("Circumference of Circle = %.2f\n",2 * 3.142 * rad);
    return 0;
}