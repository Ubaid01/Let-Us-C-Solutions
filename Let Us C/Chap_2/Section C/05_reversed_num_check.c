#include<stdio.h>

int main() {
    int num, reversed = 0, original;
    printf("Enter your number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while (num != 0) {
        int digit = num % 10; // As here num will keep changing till =0 so stored previously as we have to compare afterwards
        reversed = reversed * 10 + digit;
        num /= 10; // Remove the last digit
    }

    printf("Reversed number is %d\n", reversed);

    if (original == reversed) // Compare the original and reversed numbers
        printf("Original and reversed numbers are Equal!");
    else {
        printf("Unequal Numbers!");
    }

    return 0;
}