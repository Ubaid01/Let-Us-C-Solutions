#include<stdio.h>
#include<string.h>

int main(){
    char str[100] ;
    printf("Enter your sentence: ") ;
    fgets(str, sizeof(str), stdin) ;

    printf("%s\n", str ) ;
    // OR directly use library function.
    // printf("%s\n", strupr(str) ) ;

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') 
            str[i] = str[i] - 'a' + 'A' ; 
        // OR  str[i] = str[i] - 32 ;
    }

    printf("%s\n", str) ;
    return 0;
}