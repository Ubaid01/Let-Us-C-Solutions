#include<stdio.h>

int main(){
    printf ( "He said, \"Let's do it!\"" ) ;  // To print double quotes using printf use escape character
    int  i = 10 ; 
    char  ch = 'A' ; 
    float  a = 3.14 ; 
    char  str[20] ;  
    printf ( "\n%d %c %f", i, ch, a ) ; 
    sprintf ( str, "%d %c %f", i, ch, a ) ; 
// 1st is the sting in which need to store 2nd is the storage format and 4rd are variables,contanst or strings corresponding to format specifiers.
    printf ( "\n%s", str ) ;    
// In this program the printf( ) prints out the values of i, ch and a on the screen, whereas sprintf( ) stores these values in the character array str. Since the string str is present in memory what is written into str using sprintf( ) doesn't get displayed on the screen. Once str has been built, its contents can be displayed on the screen. In our program this was achieved by the second printf( ) statement.  

// The counterpart of sprintf( ) is the sscanf( ) function. It allows us to read characters from a string and to convert and store them in C variables according to specified formats. The sscanf( ) function comes in handy for in-memory conversion of characters to values. 
    return 0;
}