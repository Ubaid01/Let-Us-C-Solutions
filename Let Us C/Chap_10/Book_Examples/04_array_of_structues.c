#include<stdio.h>
void vilinkfloat( ) { 
    float a = 0, *b ; 
    b = &a ;  /* cause emulator to be linked */ 
    a = *b ;    /* suppress the warning - variable not used */ 
}    

// What is the function linkfloat( ) doing here? If you don’t define it you are bound to get the error "Floating Point Formats Not Linked" with majority of C Compilers.How can we force the formats to be linked? That’s where the linkfloat( ) function comes in. It forces linking of the floating-point emulator into an application. There is no need to call this function, just define it anywhere in your program.  
int main(){
    struct book { 
        char  name ; 
        float  price ; 
        int  pages ; 
            } ; 
    struct book  b[100] ;
//This provides space in memory for 100 structures of the type struct book.   
//  In our example, b[0]’s name, price and pages in memory would be immediately followed by b[1]’s name, price and pages, and so on. What is the
    int  i ; 
    for ( i = 0 ; i <= 99 ; i++ ) { 
        printf ( "\nEnter name, price and pages " ) ; 
        scanf ( "%c %f %d", &b[i].name, &b[i].price, &b[i].pages ) ; 
    } 
    for ( i = 0 ; i <= 99 ; i++ ) 
    printf ( "\n%c %f %d", b[i].name, b[i].price, b[i].pages ) ; 
    return 0;
}