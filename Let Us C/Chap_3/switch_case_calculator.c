#include <stdio.h>

int main() {
    double num1, num2;
    char ch, operator;
    do {
        printf("Enter The Two Numbers: ");
        scanf("%lf %lf", &num1, &num2);
        fflush(stdin); // Added to tackle the input buffer

        printf("Enter any operator (+, -, *, /): ");
        scanf(" %c", &operator); // Note the space before %c (Mistake)
        // a common practice in C to handle potential issues with whitespace characters in the input buffer.
        // OR to handle the unintended behaviour
        
        switch (operator) {
            case '+':
                printf("%.1f + %.1f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.1f - %.1f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.1f * %.1f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Division by zero is not allowed.\n");
                } else {
                    printf("%.1f / %.1f = %.2f\n", num1, num2, num1 / num2);
                }
                break;
            default:
                printf("Invalid Operator!\n");
                break;
        }
        
        printf("Enter Y or y to continue: ");
        scanf(" %c", &ch); // Note the space before %c
    } while (ch == 'Y' || ch == 'y');

    return 0;
}
