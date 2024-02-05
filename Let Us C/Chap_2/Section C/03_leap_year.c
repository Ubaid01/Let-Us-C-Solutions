#include<stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Conditions:- 1. If a year is divisible by 4 and not divisible by 100, it is a leap year.
    // 2. If a year is divisible by 400, it is a leap year.
    // Even wihout brackets, AND has more prioriy then OR
    if((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0))
        printf("%d is a leap year", year);
    else{
        printf("%d is NOT a leap year", year);
    }   
    return 0;
}