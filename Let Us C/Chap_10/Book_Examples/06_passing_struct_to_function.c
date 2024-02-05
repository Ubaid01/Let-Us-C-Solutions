#include<stdio.h>

/* Passing individual structure elements */
    struct book  { 
            char  name[25] ; 
            char  author[25] ; 
            int  callno ; 
            } ; 
// We are passing the base addresses of the arrays name and author, but the value stored in callno. Thus, this is a mixed => call—a call by reference as well as a call by value. 
void display ( char  *s, char  *t, int  n ) { 
    printf ( "\n%s %s %d", s, t, n ) ; 
} 

// The data type struct book is not known to the function display( ). Therefore, it becomes necessary to define the structure type struct book outside main( ), so that it becomes known to all functions in the program. 
void display_By_Entire_Structure ( struct book  b ) { 
    printf ( "\n%s %s %d", b.name, b.author, b.callno ) ; 
} 

int main(){
// Like an ordinary variable, a structure variable can also be passed to a function. We may either pass individual structure elements or the entire structure variable at one go.  
    struct book b1 = { "Let us C", "YPK", 101 } ; 
    display ( b1.name, b1.author, b1.callno ) ; 
    struct book  b2 = { "Let us C", "YPK", 101 } ; 
    display_By_Entire_Structure ( b2 ) ; 
    return 0;
}