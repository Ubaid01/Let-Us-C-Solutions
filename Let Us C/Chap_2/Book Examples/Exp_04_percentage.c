#include<stdio.h>

int main(){
    int m1, m2, m3, m4, m5, per ; 
    printf ( "Enter marks in five subjects " ) ; 
    scanf ( "%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5 ) ; 
    per = ( m1 + m2 + m3 + m4 + m5 ) / 5 ;
    // if ( per >= 60 ) 
    //     printf ( "First division ") ; 
    // else 
    // { 
    //     if ( per >= 50 ) 
    //         printf ( "Second division" ) ; 
    //     else 
    //     { 
    //         if ( per >= 40 ) 
    //             printf ( "Third division" ) ; 
    //         else 
    //             printf ( "Fail" ) ; 
    //     } 
    // }

    // OR

    // if ( per >= 60 ) 
    //     printf ( "First division" ) ; 
    // else if ( per >= 50 ) 
    //     printf ( "Second division" ) ; 
    // else if ( per >= 40 ) 
    //     printf ( "Third division" ) ; 
    // else
        // printf ( "fail" ) ;

    // Another-Method (Using Logical Operators)
    if ( per >= 60 ) 
        printf ( "First division" ) ; 
    if ( ( per >= 50 ) && ( per < 60 ) ) 
        printf ( "Second division" ) ; 
    if ( ( per >= 40 ) && ( per < 50 ) ) 
        printf ( "Third division" ) ; 
    if ( per < 40 ) 
        printf ( "Fail" ) ;
    return 0;
}