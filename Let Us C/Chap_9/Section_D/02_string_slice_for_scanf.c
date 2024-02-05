#include<stdio.h>

int main(){
    char str[] = "Alice in wonderland." ;
    printf("%s\n", str) ; // This will print whole string

    // Using scanf ( The scanf function reads input until it encounters whitespace (space, tab, newline). )
// str1 will contain "Alice"
// str2 will contain "in"
// str3 will contain "wonder"
// str4 will contain "land"
    char str1[10], *str2, str3[10], str4[10] ;
    scanf("%s %s %s %s", str1,  str2, str3, str4) ;
    printf("%s %s %s %s", str1, str2, str3, str4) ;
    return 0;
}