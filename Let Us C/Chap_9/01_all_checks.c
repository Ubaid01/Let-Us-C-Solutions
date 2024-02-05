#include<stdio.h>

int main(){
    // char  c[2] = "A" ; 
    // printf ( "\n%c", c[0] ) ; // This will print 1st char os string i.e. A
    // printf ( "\n%s", c ) ; // Whole string has A + '\0' so will print only before Null-char

//     char  s[ ] = "Get organised! learn C!!" ; 
//     printf ( "\n%s", &s[2] ) ; 
// // This will print the string starting from the character at index 2 ('t' in this case). So, the output will be: "t organised! learn C!!".
//     printf ( "\n%s", s ) ; // This will print all string before Null-Char so prints whole
// // %s limitation with spaces termination is with scanf() only
//     printf ( "\n%s", &s ) ; 
// // &s is the address of the entire string s, but the format specifier %s expects a pointer to a null-terminated string. Providing the address of the whole array may or may not print what expected.
//     printf ( "\n%c", s[2] ) ; // his will print 3rd char in string i.e. 't'

    // char  s[ ] = "No two viruses work s0imilarly" ; 
    // int  i = 0 ; 
    // // while( s[i] != 0 ) { // If simple 0 given so will print whole string.
    // while ( s[i] != '0' ) {  
    //     printf ( "\n%c %c", s[i], *( s + i ) ) ; // These all will print the same character by character till 0 not '\0'
    //     printf ( "\n%c %c", i[s], *( i + s ) ) ; 
    //     i++ ; 
    // } 


    // char s[] = "Churchgate: no church no gate";
    // char t[25];
    // char *ss, *tt; // Here tt nad t[] string both ae uninitalizd so contains garbage
    // ss = s;
    // while (*ss != '\0')
    //     *ss++ = *tt++; // Since tt points to garabge so Error as ss will also points to then
// Correction :-
    // ss = s;
    // tt = t; // Initialize tt to point to the start of t[]

    // while (*ss != '\0') {
    //     *tt = *ss;
    //     ss++;
    //     tt++;
    // }
    // *tt = '\0'; // Null-terminate the destination string
    // printf("\n%s", tt); // Will print nothing cause of above loop

    // char  s[ ] = "Churchgate: no church no gate" ; 
    // char  t[25] ;
    // printf("Your Name: ") ;
    // scanf("%[^\n]s", t) ; 
    // char  *ss, *tt ; 
    // ss = s ; // ss has base address of s[] string
    // tt = t ; // tt has base address of t[] string
    // while ( *ss != '\0' )  
    //     *ss++ = *tt++ ; // Iterate whole till ss points to '\0' and assign tt chars to it
        
    // printf ( "\n%s", s ) ; // will print t[] string till ss points to '\0'

//     char str1[ ] = { 'H', 'e' , 'l' , 'l' , 'o'  } ; 
//     char str2[ ] = "Hello" ; 
//     printf ( "\n%s", str1 ) ; 
// // For str1: The array str1 does not have a null terminator explicitly included in its initialization. Therefore, attempting to print str1 using %s might result in undefined behavior. It could print characters until it encounters a null character in memory after the array.
//     printf ( "\n%s", str2 ) ;  // The array str2 is a null-terminated string literal, so print whole str2


    // printf ( 5 + "Good Morning " ) ;
// The compiler considers the string literal "Good Morning " as an array of characters. When you add an integer value (5 in this case) to a string literal, it results in a pointer operation where the integer value dictates the offset from the base address of the string. Adding 5 to the string literal moves the pointer 5 positions ahead in memory from the initial address of the string literal. 
// So it tries to print the string starting from the memory location that is 5 characters ahead in the original string

    // printf ( "%c",  "abcdefgh"[4] ) ; // This will print the 4th index character (fifth character) from the string.

    printf ( "\n%d %d %d", sizeof ( '3' ), sizeof ( "3" ), sizeof ( 3 ) ) ;
    // printf ( "\n%d %d %d", sizeof (char), sizeof ( char* ), sizeof ( int ) ) ;
// sizeof('3'): 
// sizeof('3') determines the size in bytes of the character literal '3'.
// In C, character literals, such as '3'will be stored as ASCII occupy 4 byte of memory.So, sizeof('3') will evaluate to 4.

// sizeof("3"):
// sizeof("3") calculates the size of the string literal "3", including the null terminator '\0'.
// The string "3" consists of two characters: '3' and '\0'.Therefore, sizeof("3") will evaluate to 2.

// sizeof(3):
// sizeof(3) determines the size in bytes of the integer literal 3.
// In most implementations, an integer occupies 4 bytes (32 bits) in memory.Therefore, sizeof(3) will evaluate to 4.
    return 0;
}   