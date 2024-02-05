#include<stdio.h>

int main(){
    int i ; 
    printf ( "Enter either 1 or 2 " ) ; 
    scanf ( "%d", &i ) ; 
    if ( i == 1 ) 
        printf ( "You would go to heaven !\n" ) ; 
    else 
    { 
        if ( i == 2 ) 
            printf ( "Hell was created with you in mind\n" ) ; 
        else 
            printf ( "How about mother earth !\n" ) ; 
    }

    int a ; 
    printf ( "Enter value of a " ) ; 
    scanf ( "%d", &a ) ; 
    // if ( a = 5 ) // We have used the assignment operator = instead of the relational operator ==. As a result, the condition gets reduced to if ( 5 ), irrespective of what you supply as the value of a
    if(a==5)
        printf ( "You entered 5\n" ) ; 
    else 
        printf ( "You entered something other than 5\n" ) ;
    return 0;
}