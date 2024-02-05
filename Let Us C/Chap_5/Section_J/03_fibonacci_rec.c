#include <stdio.h>

int fibRec(int n) {
    if (n == 0 || n == 1 ) { // Write 0 & 1 as we have to use in array else n == 1 || n == 2 and for loop from 1 till <= n
        return 1 ;
    }
    else {
        return fibRec(n - 1) + fibRec(n - 2) ;
    }
}

// Function to print the first 25 numbers in the Fibonacci sequence
void printFibonacciSeries(int n) {
    printf("Fibonacci Series (first %d numbers): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibRec(i) );
    }
    printf("\n");
}

int main() {
    int seriesNum = 25 ; // Number of terms to generate for the Fibonacci sequence
    printFibonacciSeries(seriesNum);

    return 0;
}
