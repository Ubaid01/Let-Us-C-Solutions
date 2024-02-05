#include<stdio.h>

int main(){
    int arr[3][4][2] = { // 3 Rows 4 columns i.e. 4 1D-arrays containing 2 values
                            { 
                                { 2, 4 }, 
                                { 7, 8 }, 
                                { 3, 4 }, 
                                { 5, 6 } 
                            }, 

                            { 
                                { 7, 6 }, 
                                { 3, 4 }, 
                                { 5, 3 }, 
                                { 2, 3 } 
                            }, 

                            { 
                                { 8, 9 }, 
                                { 7, 2 }, 
                                { 3, 4 }, 
                                { 5, 1 }, 
                             } 
                        } ;

    // Accessing Element (Inner one number with array name is always Row.Num)
    printf("%d  %d", arr[2][3][1],  *( *( *( arr + 2 ) + 3 ) + 1 ) ) ;
    return 0;
}