// 3-Ways
// 1. Slope Equal
// 2. Determinant Method And Make eq from 2 and then put other point in it

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of the third point (x3 y3): ");
    scanf("%d %d", &x3, &y3);

    float slope1 = (y2 - y1) / (x2 - x1);
    float slope2 = (y3 - y1) / (x3 - x1);

    if (slope1 == slope2) {
        printf("Collinear-Points!\n");
        // printf("The three points are collinear and lie on the same straight line.\n");
    } else {
        printf("Non-Collinear Points!\n");
    }

    return 0;
}


