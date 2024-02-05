#include<stdio.h>

int main(){
    // char  name[3] ; 
    // float  price[3] ; 
    // int  pages[3], i ;  // Single variables declared for one time use

// 1st way to declare and define structue
    struct book {  
        char  name[25] ; 
        float  price ; 
        int  pages ; 
    } ; 
    struct book  b1, b2, b3 ;  // Multiple times same structure used
// Once the new structure data type has been defined one or more variables can be declared to be of that type. 

// 2nd way to declare structue
    // struct book { 
    //     char  name[25] ; 
    //     float  price ; 
    //     int  pages ; 
    // } b1, b2, b3 ;
    
// 3rd way to declare structue
    // struct    { 
    // char  name[25] ; 
    // float  price ; 
    // int  pages ; 
    // } b1, b2, b3 ;

    printf ( "\nEnter names, prices & no. of pages of 3 books\n" ) ; 
    scanf ( "%s %f %d", b1.name, &b1.price, &b1.pages ) ; 
    scanf ( "%s %f %d", b2.name, &b2.price, &b2.pages ) ; 
    scanf ( "%s %f %d", b3.name, &b3.price, &b3.pages ) ; 
    printf ( "\nAnd this is what you entered" ) ; 
    printf ( "\n%s %f %d", b1.name, b1.price, b1.pages ) ; 
    printf ( "\n%s %f %d", b2.name, b2.price, b2.pages ) ; 
    printf ( "\n%s %f %d", b3.name, b3.price, b3.pages ) ;
    return 0;
}