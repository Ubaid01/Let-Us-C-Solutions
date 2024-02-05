#include <stdio.h>

int main() {
    char  name[ ] = "Klinsman" ; 
    int  i = 0 ; 
    // while ( i <= 7 ) {  
    // OR by pointer  while( *ptr != '\0')
    // OR
    while ( name[i] != '\0' ) {
        printf ( "%c", name[i] ) ; 
        i++ ; 
    }
    // char  name_1[25] ; 
    // printf ( "\nEnter your name " ) ; 
    // scanf ( "%s", name_1 ) ;
    // printf ( "Hello %s!", name_1 ) ; 

    // For multi_word
    char  name_1[25] ; 
    printf ( "\nEnter your full name " ) ; 
    // scanf("%[^\n]s", name_1) ;  // This scanf can also be used for multi-word strings.
    gets ( name_1 ) ; 
    puts ( "Hello!" ) ;  // puts print the statement and add \n in end automatically.
    puts ( name_1 ) ;

// Thus, all the following notations refer to the same element: 
// name[i] 
// *( name + i )   ( sizeof(char) = 1 )
// *( i + name ) 
// i[name] 

    return 0;
}