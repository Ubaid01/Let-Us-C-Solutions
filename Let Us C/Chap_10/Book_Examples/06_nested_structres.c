#include<stdio.h>

int main(){
// One structure can be nested within another structure. Using this facility complex data types can be created.
    struct address { 
        char  phone[15] ; 
        char  city[25] ; 
        int  pin ; 
    } ; 
    struct emp { 
        char  name[25] ; 
        struct address  a ; // Nested address structure
    } ; 
    struct emp  e = { "jeru", "531046", "nagpur", 10 };  
    printf ( "\nname = %s phone = %s", e.name, e.a.phone ) ; 
    printf ( "\ncity = %s pin = %d", e.a.city, e.a.pin ) ;  
// Notice the method used to access the element of a structure that is part of another structure. For this the dot operator is used twice, as in the expression,  e.a.pin  or  e.a.city   
    return 0;
}