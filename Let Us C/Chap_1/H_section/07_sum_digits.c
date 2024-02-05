#include<stdio.h>

int main(){
    int num, sum=0;
    printf("Enter your number: ");
    scanf("%d", &num);

    while(num !=0){
    int a = num % 10; // To get individual digits
    sum += a;
    num = num / 10; // To get next digit
    }

    printf("Sum of Individual digits = %d",sum);
    return 0;
}