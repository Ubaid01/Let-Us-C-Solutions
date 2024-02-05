#include <stdio.h>

int main() {
    float timeTaken; // In float as half-an hour can be expressed as 0.5 hours (30 mints)
    printf("Enter the time taken by the worker (in hours): ");
    scanf("%f", &timeTaken);

    if (timeTaken >= 2.0 && timeTaken <= 3.0)
        printf("The worker is highly efficient.\n");
    else if (timeTaken > 3.0 && timeTaken <= 4.0)
        printf("The worker needs to improve speed.\n");
    else if (timeTaken > 4.0 && timeTaken <= 5.0) 
        printf("The worker needs training to improve speed.\n");
    else if (timeTaken > 5.0) 
        printf("The worker has to leave the company.\n");
    else
        printf("Invalid input. Please enter a valid time taken.\n");

    return 0;
}
