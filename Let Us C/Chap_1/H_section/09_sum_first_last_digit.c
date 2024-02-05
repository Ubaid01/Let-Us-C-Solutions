#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum=0;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Please enter a valid four-digit number.\n");
    } 
    else {
        lastDigit = num % 10; // Since remainder is the last digit if dividing by 10
        firstDigit = num / 1000; // Since for 4-digit num the answer of dividing by 1000 is first digit

        sum = firstDigit + lastDigit;

        printf("Sum of the first and last digits: %d\n", sum);
    }

    return 0;
}

// For all numbers
// #include<stdio.h>

// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int a,b;
//     a = num % 10;
//     while(num>0){
//         b = num % 10; // It will stop at the last number
//         num = num / 10; // To reduce digit places and remove used numbers
//     }

//     printf("Sum of 1st and last digit is %d",a+b);
//     return 0;
// }