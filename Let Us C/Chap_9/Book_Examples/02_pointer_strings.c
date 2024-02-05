#include<stdio.h>

int main(){
    char  str1[ ] = "Hello" ; 
    char  str2[10] ; 
    char  *s = "Good Morning" ; 
    char  *q ;   
    // str2 = str1 ; /* error */  
    q = s ; /* works */ 
// So  From this example, we cannot assign a string to another, whereas, we can assign a char pointer to another char pointer.

// Also, once a string has been defined it cannot be initialized to another set of characters. Unlike strings, such an operation is perfectly valid with char pointers. 

    char  str_2[ ] = "Hello" ; 
    char  *p = "Hello" ; 
    printf("%s", p) ;
    // str_2 = "Bye" ; /* error */  
    p = "Bye" ; /* works */
    printf("\n%s", p) ;
    return 0;
}