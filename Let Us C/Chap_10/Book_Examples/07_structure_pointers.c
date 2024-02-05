#include<stdio.h>

int main(){
    struct book  { 
            char  name[25] ; 
            char  author[25] ; 
            int  callno ; 
            } ; 
    struct book  b1 = { "Let us C", "YPK", 101 } ; 
    struct book  *ptr ; 
    ptr = &b1 ; 
    // (*ptr).code = 101;  Since *ptr points to e1 so to separate it use brackets
    // while *(ptr).code means ptr.code is pointer
    // ptr -> code = 101; // Same work as above 
    // Arrow operator is a short cut to access members: a pointer pointing to structure   

    printf ( "\n%s %s %d", b1.name, b1.author, b1.callno ) ; 
    printf ( "\n%s %s %d", ptr->name, ptr->author, ptr->callno )  ;
    printf("\nNormal Abbreviation = %d", (*ptr).callno ) ; // First derefernce pointer then use callno. 
//  We can’t use ptr.name or ptr.callno because ptr is not a structure variable but a pointer to a structure, and the dot operator requires a structure variable on its left.
// In such cases C provides an operator ->, called an arrow operator to refer to the structure elements.Remember that on the left hand side of the ‘.’ structure operator, there must always be a structure variable, whereas on the left hand side of the ‘->’ operator there must always be a pointer to a structure. 
    return 0;
}