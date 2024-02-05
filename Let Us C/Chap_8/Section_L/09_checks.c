#include<stdio.h>

int main(){

unsigned int  arr[3][3] = { 
      2, 4, 6, 
      9, 1, 10, 
      16, 64, 5 
        } ; 
 
    printf("%d\n", **arr ) ; 
    printf("%d\n", **arr < *( *arr + 2 )  ) ; 
    // printf("%d\n", *( arr + 2 ) / ( *( *arr + 1 ) > **arr ) ) ; // Error as comparing unsigned int (address) with int
    printf("%d\n", **( arr + 2 ) / ( *( *arr + 1 ) > **arr ) ) ; 
    printf("%d\n", *( arr[1] + 1 ) | arr[1][2]   ) ; 
    printf("%d\n", *( arr[0] ) | *( arr[2] )  ) ; 
    printf("%d\n", arr[1][1] < arr[0][1] ) ; 
    printf("%d\n", arr[2][1] & arr[2][0] ) ; 
    printf("%d\n", arr[2][2] | arr[0][1]   ) ; 
    printf("%d\n", arr[0][1] ^ arr[0][2] ) ; 
    printf("%d\n", ++**arr + --arr[1][1]  ) ; 

    // printf("%d\n", 0b1011) ; // To check binary equivalent
  
    return 0;
}