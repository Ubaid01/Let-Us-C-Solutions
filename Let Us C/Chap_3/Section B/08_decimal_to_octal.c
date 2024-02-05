#include<stdio.h>

int main(){
    long long int num, octal = 0, multiplier = 1;;
    printf("Enter your number(in decimal-system): ");
    scanf("%lld", &num);
    long long int Original = num;

    while(num > 0){
        int digit = num % 8 ;
        // octal = octal * 10 + digit ; //If we wan the number in reverse but here we want straight from last divisor so  first add then multiply
        octal = octal + digit * multiplier; // As 0 can't be reversed so first add and then multiply to store it as well
        multiplier *= 10;
        num = num / 8; // Move to the next dividend
    }

    printf("%lld in decimal = %lld in octal\n", Original, octal);
    printf("Octal equivalent: %o\n", Original); 
    printf("Hexa-decimal equivalent: %X\n", Original); // %p is used top rint address in hexa-decimal form

    return 0;
}