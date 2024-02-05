#include<stdio.h>
#include<string.h>

int main(){
    // char *str1 = "United" ; 
    // char *str2 = "Front" ; 
    // char *str3 ; 
    // // str3 = strcat ( str1, str2 ) ; // Since strcat retruns a  void type so can't initalize it in other variable so this will give Error or print nothing or garbage.
    // // Correct
    // strcpy(str3, str1); // Copy str1 to str3
    // strcat(str3, str2); // Concatenate str2 to str3
    // printf ( "\n%s", str3 ) ;

    // int  arr[ ] = { 'A', 'B', 'C', 'D' } ; 
    // int  i ; 
    // for ( i = 0 ; i <= 3 ; i++ ) 
    //     printf ( "\n%d", arr[i] ) ; // Using %d will pint the ASCII values of each character in string here 65 66 67 68 !

    // char  arr[8] = "Rhombus" ; // Since here string literal is used which directly can't be incremented so initiliaze y pointer to string literal.
    char  *arr = "Rhombus" ; 
    int  i ; 
    for ( i = 0 ; i <= 7 ; i++ ) {
        printf ( "\n%d", *arr ) ; // This will print ASCII values of all characters in pointer string including '\0' so last one value will be 0
        arr++ ; 
    }
    return 0;
}