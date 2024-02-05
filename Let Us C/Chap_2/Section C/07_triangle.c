#include <stdio.h>

int main() {
    int angle1, angle2, angle3;
    printf("Enter the 1st 2nd and 3rd angles: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if the angles form a valid triangle
    if (angle1 + angle2 + angle3 == 180 && ! (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) ) // And the angle can't be zero or less 
        printf("The angles form a valid triangle.\n");
    else 
        printf("The angles do not form a valid triangle.\n");

    return 0;
}
