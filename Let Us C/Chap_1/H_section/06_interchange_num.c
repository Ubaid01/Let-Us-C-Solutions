#include<stdio.h>

int main(){
    int a,b;
    printf("Enter Number 1: ");
    scanf("%d", &a);
    printf("Enter Number 2: ");
    scanf("%d", &b);
    printf("Before Interchanging: a = %d and b = %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("After Interchanging: a = %d and b = %d\n",a,b);
    return 0;
}