#include <stdio.h>

// Function to find prime factors without recursion
void primeFactorsWithoutRecursion(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i ;
        }
    }
    printf("\n");
}

// Function to check if a number is prime
int isPrime(int num, int i) {
    if (i == 1) {
        return 1; // Base case: 1 is always a factor
    }
    else {
        if (num % i == 0) {
            return 0; // Not a prime number
        } 
        else {
            return isPrime(num, i - 1); // Recursively check for prime till i reaches 1 so set i = 2 that is start check from 2 till i < num i.e. checks all cases but retaining Prime = 1 and if divisible so 0
        }
    }
}

// Function to find prime factors using recursion
void primeFactorsWithRecursion(int n, int i) {
    if (n == 1) {
        return;
    }

    if (n % i == 0) {
        if (isPrime(i, i / 2)) { // Checks if i is divisible starting from i / 2 till 1 as 1 divisor will must be less than or equal t i / 2 like 25 for 5, 5
            printf("%d ", i);
        }
        primeFactorsWithRecursion(n / i, i); // Proceeds to n / i and again checks for that i like 24 / 2 = 12 but 12 is again divisible by 2
    }
    else {
        primeFactorsWithRecursion(n, i + 1); // Proceed to next number
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num  <  0){
        printf("Invalid number.\n\t Try Again!\n") ;
        return 1 ;
    }
    printf("Prime factors without recursion: ");
    primeFactorsWithoutRecursion(num);

    printf("Prime factors with recursion: ");
    primeFactorsWithRecursion( num, 2 );
    printf("\n");

    return 0;
}
