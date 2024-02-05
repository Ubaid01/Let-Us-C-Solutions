#include<stdio.h>

int main(){

    int r, c, sum ; 
    for ( r = 1 ; r <= 3 ; r++ ) { /* outer loop */     
        for ( c = 1 ; c <= 2 ; c++ ) { /* inner loop */  
            sum = r + c ; 
            printf ( "r = %d c = %d sum = %d\n", r, c, sum ) ; 
        } 
    }
    return 0;
}