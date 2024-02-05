#include<stdio.h>

int main(){
    int threed[3][2][3] = { // 3 Rows 2 columns i.e. 2 1D-arrays containing 3 values
                            { 
                                { 2, 4 , 6 }, 
                                { 7, 8 , 9 }, 
                            }, 

                            { 
                                { 7, 6 , 5 }, 
                                { 3, 4 , 5 }, 
                            }, 

                            { 
                                { 8, 9 , 0 }, 
                                { 7, 2 , 21 }, 
                             } 
                        } ;
    printf("%d\n", threed[0][0][0] ) ;  // For 1st element
    printf("%d ", threed[2][1][2] ) ;  // To refer last element
    return 0;
}