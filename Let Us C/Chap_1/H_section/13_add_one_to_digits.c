#include <stdio.h>

int main() {
    int num, newNumber = 0;
    int multiplier = 1; // Used to extract and modify digits

    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    int d;
    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
    } else {
        while (num > 0) {
            int digit = num % 10; // Get the last digit
            digit = (digit + 1); // Add one and wrap around if needed
            newNumber += digit * multiplier; // Add the modified digit
            multiplier *= 10; // Move to the next position in places
            num /= 10; // Remove the last digit
        }

        printf("New number with one added to each digit: %d\n", newNumber);
    }
    
    return 0;
}
