#include<stdio.h>

int main(){
    int num[6] = { 2, 4, 12, 5, 45, 5 } ; 
    int n[ ] = { 2, 4, 12, 5, 45, 5 } ; // If initializing at same time can declare elements OR left for compiler
    float press[ ] = { 12.3, 34.2 , -23.4, -11.3 } ;

    for(int i = 0; i <= 3; i++) {
        printf("%.1f ", press[i] ) ;
    }

    return 0;
}