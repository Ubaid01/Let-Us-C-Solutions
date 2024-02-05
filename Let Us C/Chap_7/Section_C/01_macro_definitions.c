#include<stdio.h>

#define IS_SMALL_CASE(c) ((c >= 'a' && c <= 'z') ? 1 : 0)
#define IS_UPPER_CASE(c) ((c >= 'A' && c <= 'Z') ? 1 : 0)
#define IS_ALPHABET(c) (IS_SMALL_CASE(c) || IS_UPPER_CASE(c))
#define MAX(a, b) ((a > b) ? a : b)


int main(){
    char ch = 'c', c = 'A' ;
    if( IS_SMALL_CASE(ch) )
        printf("%c is a small character.\n", ch);
    else
        printf("%c is NOT a small character.\n", ch);

    ( IS_UPPER_CASE(c) ) ? printf("%c is a Capital charater.\n", c) : printf("%c is not Upper-case.\n", c) ;
    ( IS_ALPHABET(c) ) ? printf("%c is an ALPHABET.\n", c) : printf("%c is NOT an alphabet.\n", c) ;
    
    int e = MAX( 10, 33 ) ;
    printf("%d is bigger number.\n", e ) ;

    return 0;
}