#include<stdio.h>
#include<string.h>

int main(){
    char sentence[150] , ch ;
    FILE *fptr ;
    fptr  = fopen("05_char_case.txt", "r") ;

    if( fptr == NULL ) {
        printf("Error while opening file.\n\tExiting.") ;
        return 1 ;
    }

    int i = 0 ;
    while( ( ch = fgetc(fptr) ) != EOF ) {
        if( ch >= 'a' && ch <= 'z' ) { // OR can use ctye.h => islower here
            sentence[i]  = ch - 'a' + 'A'; // toupper here
        }
        else 
            sentence[i] = ch ;
        i++ ;
    }
    sentence[ strlen(sentence) - 1 ] = '\0' ;
    fclose(fptr) ;
    
    printf("Formatted sentence :-\n\t%s .", sentence ) ; 
    return 0;
}