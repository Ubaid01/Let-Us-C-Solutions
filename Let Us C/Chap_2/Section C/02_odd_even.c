#include<stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if( num % 2 ==0)
        printf("%d is an even number", num);
    else{
        printf("%d is a odd number", num);
    }
    return 0;
}