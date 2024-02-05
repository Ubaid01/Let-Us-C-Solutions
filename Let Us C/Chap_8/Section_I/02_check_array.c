#include<stdio.h>
#include <stdbool.h>

bool checkReverseEquality(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) { // 5 / 2 so checks till n = 2 ( 0, 1, 2)
        if (arr[i] != arr[n - i - 1]) { // checks 1st and last element till middle of array
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Enter no.of Elements: ") ;
    scanf("%d", &n ) ;

    int arr[n] ;
    printf("Enter Elements of Array-1: \n") ;

    for(int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr[i] ) ;
    }   

    bool isEqual = checkReverseEquality(arr, n);

    if (isEqual)
        printf("The array satisfies the condition: arr[0] = arr[n-1], arr[1] = arr[n-2], and so on.\n");
    else
        printf("The array doesn't satisfy the given condition.\n");

    return 0;
}