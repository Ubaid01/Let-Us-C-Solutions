// My-Method
#include<stdio.h>

int main(){
    int n, max = 0, min , isFirst = 1;
    char ch;

    do{
        printf("Enter your number: \n");
        scanf("%d", &n);

        if(isFirst){ // Mistake
            min = n; // As we need to initialize min to n for frist time if we did ith 0 and entered only +ve numbers it will never update
            isFirst = 0;
        }
        
        if(n > max)
            max = n;
        else if(n < min)
            min = n;

        printf("Do you want to enter another number? (y/n): \n");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    int range = max - min;
    printf("Range of numbers is %d", range);
    return 0;
}

// Another-Way
// #include <stdio.h>

// int main() {
//     int n, number, smallest, largest;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     if (n <= 0) {
//         printf("Invalid input. Please enter a positive number of elements.\n");
//         return 1; // Exit the program with an error code
//     }

//     printf("Enter %d numbers:\n", n);
//     scanf("%d", &number);

//     smallest = largest = number; // Initialize smallest and largest with the first number

//     for (int i = 1; i < n; i++) {
//         scanf("%d", &number);

//         if (number < smallest) {
//             smallest = number;
//         } else if (number > largest) {
//             largest = number;
//         }
//     }

//     int range = largest - smallest;

//     printf("Range of the numbers: %d\n", range);

//     return 0;
// }
