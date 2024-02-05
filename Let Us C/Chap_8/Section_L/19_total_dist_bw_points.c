#include <stdio.h>
#include <math.h>

// Function to calculate distance between two points
double calculate_distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
    double coordinates[2][10];
    double total_distance = 0.0;

    // Taking input for X and Y coordinates
    for (int i = 0; i < 10; i++) {
        printf("Enter X and Y coordinates for point %d: ", i + 1, i + 1);
        scanf("%lf %lf", &coordinates[0][i], &coordinates[1][i] ) ; // All x-coordinates in 1st row & All y-coordinates in 2nd row
    }

    // Calculating total distance
    for (int i = 0; i < 9; i++) { // cause calculating till i + 1 so i < 9
        total_distance += calculate_distance(coordinates[0][i], coordinates[1][i],
                                              coordinates[0][i + 1], coordinates[1][i + 1]);
    }

    // Printing the total distance
    printf("The total distance from the first point to the last point is: %.2lf\n", total_distance);

    return 0;
}