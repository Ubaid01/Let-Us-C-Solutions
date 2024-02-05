#include<stdio.h>

int main(){

    struct book { 
        char  name[10] ; 
        float  price ; 
        int  pages ; 
    } ; 
// The closing brace in the structure type declaration must be followed by a semicolon. 
// It is important to understand that a structure type declaration does not tell the compiler to reserve any space in memory. All a structure declaration does is, it defines the 'form' of the structure. 
// Usually they appear before any function OR variable OR put in a separate header file
    struct book  b1 = { "Maths", 130.00, 550 } ; 
    struct book  b2 = { "Physics", 150.80, 800 } ;    
    printf("%s %.2f %d\n", b1.name, b1.price, b1.pages) ;
    printf("%s %.2f %d\n", b2.name, b2.price, b2.pages) ;
    return 0;
}