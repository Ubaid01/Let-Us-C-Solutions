#include<stdio.h>

int main(){
    int  i, j = 25 ; 
    int  *pi , *pj = & j ; 

    *pj = j + 5; 
    j = *pj + 5 ; 
    pj = pj ; 
    // *pi = i + j ;  (This line is causing error so)
    pi = i + j ;  // (This line is causing error so)

    printf("%u\n", &i ) ;
    printf("%u\n", &j ) ;
    printf("%u\n", pj ) ;
    printf("%d\n", *pj ) ;
    printf("%d\n", i ) ;
    printf("%u\n", pi ) ;
    printf("%d\n", *pi ) ;
    printf("%u\n", (pi + 2)  ) ;
    printf("%d\n", ( *pj + 2)  ) ; // This will add 2 in valueof *pj
    printf("%d\n", * (pi + 2)  ) ;

    return 0;
}