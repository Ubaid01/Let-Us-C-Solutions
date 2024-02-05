#include<stdio.h>
#include<stdbool.h>

int main(){
    int n ;
    printf("Enter your number: \n");
    scanf("%d", &n);

    bool ans = (n % 2) ; // Using Bool

    switch(ans){
        case 0:
            printf("%d is an Even number\n", n);
            break;
        case 1:
            printf("%d is a Odd number\n", n);
            break;
    }
    return 0;
}