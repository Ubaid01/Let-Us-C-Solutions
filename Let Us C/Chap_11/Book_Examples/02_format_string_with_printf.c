#include<stdio.h>

int main(){
    char  firstname1[ ] = "Sandy" ; 
    char  surname1[ ] = "Malya" ; 
    char  firstname2[ ] = "AjayKumar" ; 
    char  surname2[ ] = "Gurubaxani" ; 
    
    printf ( "\n%20s%20s", firstname1, surname1 ) ; // Reserve 20 spaces from left side 
    printf ( "\n%-20s%-20s", firstname2, surname2 ) ;  // Reserve 20 spaces from right side
// .2f is used to show how many decimal palces to show to user.
   
    return 0;
}