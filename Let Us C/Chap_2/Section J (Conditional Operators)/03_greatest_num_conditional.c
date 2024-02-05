#include<stdio.h>

int main(){
    int n1, n2, n3, T;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    n1 > n2 ? (T = n1) : (T = n2) ;
    T > n3 ? printf("Greatest number among three is %d", T) : printf("Greatest number among three is %d", n3); 

    return 0;
}