#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
    } 
    else {
        while (num > 0) {
            int rem = num % 10;
            reversed = reversed * 10 + rem; // We multipled by 10 so to increse digit place each time like units to tens
            num = num / 10;
        }

        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}
