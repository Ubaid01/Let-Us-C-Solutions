#include<stdio.h>

int main(){
// Below code shows how when an automatic storage class variable is declared, and the fact that if the variable is not initialized it contains a garbage value.
    auto int a, b ; 
    printf ( "\n%d %d", a, b ) ; // Here only 1s one is being assigned random value while 2nd one always has presetted value to 0

// Scope and life of an automatic variable is illustrated for auotmatic storage class as:-
    auto int i = 1 ; 
    {  auto int i = 2 ; 
        { 
            auto int i = 3 ; 
            printf ( "\n%d ", i ) ; 
        } 
        printf ( " %d ", i ) ; 
    } 

    printf ( " %d", i ) ;
    return 0;
}