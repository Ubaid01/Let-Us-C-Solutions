#include<stdio.h>
#include<string.h>

void xMystrcat(char *t, const char *s) {

    // Find the length of the target string
    while (*t != '\0') {
        t++;
    }

    // Concatenate the source string to the end of the target string
    while (*s != '\0') {
        *t = *s;
        t++;
        s++;
    }

    *t = '\0'; // Null-terminate the concatenated string
}

int main(){
    char  source[ ] = "Folks!" ; 
    char  target[30] = "Hello" ; // Note that the target string has been made big enough to hold the final string. 
    strcat ( target, source ) ; 
    printf ( "\nsource string = %s", source ) ; 
    printf ( "\ntarget string = %s", target ) ;

    char  source_2[ ] = "Folks!" ; 
    char  target_2[30] = "Hello" ; 
    xMystrcat ( target_2, source_2 ) ; 
    printf ( "\nsource string = %s", source_2 ) ; 
    printf ( "\ntarget string = %s", target_2 ) ;


    return 0;
}