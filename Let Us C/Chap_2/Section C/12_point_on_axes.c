#include <stdio.h>

int main() {
    double x, y;
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 && y == 0)
        printf("The point is at the origin (0, 0).\n");
    else if (x == 0){  // As point will be on y-axis so y can't be 0 so Case-for x=0
        if( y > 0)
            printf("The point lies on the +ve y-axis.\n");
        else
            printf("The point lies on the -ve y-axis.\n");
    }
    else if (y == 0){
        if(x > 0)
            printf("The point lies on the +ve x-axis.\n");
        else
            printf("The point lies on the -ve x-axis.\n");
    }
    else
        printf("The point does not lie on the x-axis, y-axis, or the origin.\n");

    return 0;
}
