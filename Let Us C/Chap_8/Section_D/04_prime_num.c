#include <stdio.h>

void sieveOfEratosthenes() {
    int num[101]; // Creating an array to hold numbers from 1 to 100

    // Step 1: Fill the array with numbers from 1 to 100
    for (int i = 0; i <= 100; ++i) {
        num[i] = i;
    }

    // Step 2 to Step 4: Mark multiples of each prime number as zero
    for (int i = 2; i * i <= 100; ++i) { // check multiples so i * i iterations
        if (num[i] != 0) {
            for (int j = i * i; j <= 100; j += i) { 
/* It starts from j = i * i because any smaller multiples of i less than i * i would have already been marked as zero by a smaller prime number.It increments j by i each time (j += i). This ensures that all multiples of the current prime number (i) in the array are marked as zero.      */

/* Let's take an example:
When i = 2, it starts marking multiples of 2 as zero from j = 2 * 2 = 4 and then increments j by 2: j = + 2 = 6, j = 6 + 2 = 8, and so on, marking all multiples of 
2. When i = 3, it starts marking multiples of 3 as zero from j = 3 * 3 = 9 and then increments j by 3: j = + 3 = 12, j = 12 + 3 = 15, and so on, marking all multiples of 3.      */
                num[j] = 0;
            }
        }
    }

    // Step 5: Print the prime numbers
    printf("Prime numbers from 1 to 100 are:\n");
    for (int i = 2; i <= 100; ++i) {
        if (num[i] != 0) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");
}

int main() {
    sieveOfEratosthenes();
    return 0;
}
