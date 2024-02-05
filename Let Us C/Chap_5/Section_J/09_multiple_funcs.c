#include <stdio.h>
#include <math.h>

double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Area of a triangle using Heron's formula OR can also use determinant method
double calculateAreaOfTriangle(double x1, double y1, double x2, double y2, double x3, double y3) {
    double side1 = distanceBetweenPoints(x1, y1, x2, y2);
    double side2 = distanceBetweenPoints(x2, y2, x3, y3);
    double side3 = distanceBetweenPoints(x3, y3, x1, y1);
    
    double S = (side1 + side2 + side3) / 2.0;
    return sqrt(S * (S - side1) * (S - side2) * (S - side3));
}

// Function to determine if a point (x, y) lies inside the triangle ABC
int pointInsideTriangle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3) {
     // Area of whole trinagle
    double areaABC = calculateAreaOfTriangle(x1, y1, x2, y2, x3, y3);

    // Area with 2 sides each
    double areaPBC = calculateAreaOfTriangle(x, y, x2, y2, x3, y3);
    double areaPCA = calculateAreaOfTriangle(x1, y1, x, y, x3, y3);
    double areaPAB = calculateAreaOfTriangle(x1, y1, x2, y2, x, y);
    
    // If the sum of the areas of triangles PBC, PCA, and PAB is equal to ABC, then the point is inside the triangle
    if (areaABC == (areaPBC + areaPCA + areaPAB)) 
        return 1; // Point lies inside the triangle
    else
        return 0; // Point does not lie inside the triangle

}

int main() {
    double x1, y1, x2, y2, x3, y3, x, y;

    printf("Enter coordinates of vertex A (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates of vertex B (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter coordinates of vertex C (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    printf("Enter coordinates of the point (x y): ");
    scanf("%lf %lf", &x, &y);

    printf("Distance b/w (%.2lf, %.2lf) and (%.2lf, %.2lf) = %.2lf\n\n", x2, y2, x3, y3, distanceBetweenPoints(x2, y2, x3, y3) ) ;

    printf("Area Of Trinagle with sides AB = %.2lf, BC = %.2lf and CA = %.2lf is %.2lf\n\n",distanceBetweenPoints(x1, y1, x2, y2) , distanceBetweenPoints(x2, y2, x3, y3), distanceBetweenPoints(x3, y3, x1, y1) , calculateAreaOfTriangle(x1, y1, x2, y2, x3, y3 ) ) ;

    int result = pointInsideTriangle(x, y, x1, y1, x2, y2, x3, y3);
    if (result == 1) {
        printf("The point (%.2lf, %.2lf) lies inside the triangle ABC.\n", x, y);
    } 
    else {
        printf("The point (%.2lf, %.2lf) does not lie inside the triangle ABC.\n", x, y);
    }

    return 0;
}
