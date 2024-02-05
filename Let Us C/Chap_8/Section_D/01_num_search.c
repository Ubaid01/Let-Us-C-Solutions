#include<stdio.h>

int main(){
    int arr[25] , num, num_count = 0 ;

    for(int i = 0; i < 25; i++ ) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr[i] ) ;
    }

    printf("Enter the number to be searched: ") ;
    scanf("%d", &num ) ;

    for(int i = 0; i < 25; i++ ) {
        if( arr[i] == num ) {
            num_count++ ;
        }
    }

    if(num_count == 0)
        printf("Enter number is not present in array.\n") ;
    else
        printf("Number %d is present %d times in array.\n", num, num_count ) ;

    return 0;
}