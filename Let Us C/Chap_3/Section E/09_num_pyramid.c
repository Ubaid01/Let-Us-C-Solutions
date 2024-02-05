#include<stdio.h>

int main(){
    int n; 
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    for(int i=0, k = 1; i < n; i++){
        for(int space = 0; space < n - i - 1; space++){
            printf(" ");
        }

        for(int j = 0; j <= i ; j++){
            // printf("%d", k);
            printf(" %d", k); // Add space before each num for separation
            k++ ;
        }
        printf("\n");
    }   
    return 0;
}