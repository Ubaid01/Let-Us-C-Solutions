// Conditions
// Outside: x1^2 + y1^2 – r^2 > 0
// On: x1^2 + y1^2 – r^2 = 0
// Inside: x1^2 + y1^2 – r^2 < 0
// If distance from point is greater than circle's radius so outside
#include<stdio.h>
#include<math.h>

int main(){
    double centerX, centerY, radius, x, y;
    printf("Enter the center coordinates of the circle (x y): ");
    scanf("%lf %lf", &centerX, &centerY);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("Enter the coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    // double distance = sqrt((x - centerX) * (x - centerX) + (y - centerY) * (y - centerY));
    double distance = sqrt( pow(x-centerX , 2) + pow(y-centerY , 2) );

    if (distance < radius)
        printf("The point is inside the circle.\n");
    else if (distance > radius) 
        printf("The point is outside the circle.\n");
    else 
        printf("The point is on the circle.\n");
    

    return 0;
}
    // My method (also right)
    // double x, y, r;
    // printf("Enter the coordinates of the point (x , y): ");
    // scanf("%lf %lf", &x, &y);
    // printf("Enter the radius of circle: ");
    // scanf("%lf", &r);

    // double condition = pow(x,2) + pow(y,2) - pow(r,2);
    // if(condition > 0)
    //     printf("Pt (%d,%d) is OUTSIDE the circle:\n",x,y);
    // else if(condition < 0)
    //     printf("Pt (%d,%d) is INSIDE the circle:\n",x,y);
    // else
    //     printf("Pt (%d,%d) is ON the circle:\n",x,y);
