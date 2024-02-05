#include<stdio.h>

int main(){
    int arr[25] , pos_count , neg_count, zeros_count, odd_count, even_count;
    pos_count = neg_count = zeros_count = odd_count = even_count = 0 ; // Now 0 will be assigned 1st to even count then even_count's value to previous variable and vice versa.

    for(int i = 0; i < 25; i++ ) {
        printf("Enter Number %d: ", i + 1 ) ;
        scanf("%d", &arr[i] ) ;

        if( arr[i] > 0 )
            pos_count++ ;
        else if( arr[i] < 0 )
            neg_count++ ;
        else
            zeros_count++ ;

        if( arr[i] % 2 == 0 )
            even_count++ ;
        else 
            odd_count++ ;
    }

    printf("In given array :\n Positive Numbers = %d\n Negative Numbers = %d\n Zeros = %d\n Even Numbers = %d\n Odd Numbers = %d\n", pos_count, neg_count, zeros_count, even_count, odd_count ) ; 
    return 0;
}