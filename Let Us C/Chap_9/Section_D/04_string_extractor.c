#include<stdio.h>
#include<string.h>

int main(){
    char str[200] , temp[200];
    printf("Enter your sentence: ") ;
    fgets(str, sizeof(str), stdin) ;
    
    int pos, num_chars ;
    printf("Position from where the string is to be extracted: ") ;
    scanf("%d", &pos ) ;
    printf("Enter no.of chars to be extracted(inclusively): ") ;
    scanf("%d", &num_chars ) ;
    -- pos ; // Decremented to adjust i as per string index

    if( pos < strlen(str) && pos >= 0) { // less then length cause adjusted as per indices
        if(num_chars > 0 && (pos + num_chars) <= strlen(str) ) { // So if string is of 5 and 4th index seleced with chars 2 so doesn' give error in long term else it also works without pos-condition.
            int i ;
            for(i = pos ; i < (pos + num_chars) ; i++) {
                temp[i - pos] = str[i] ;
            }
            temp[i - pos] = '\0' ; // (MISTAKE not correctly ending string)
            printf("Extracted string = %s\n", temp ) ;
        }
        else if (num_chars == 0)
            printf("Selected string = %s\n", &str[pos] ) ; // OR also can do str 
        else
            printf("Invalid number of character.\n") ;
    }
    else
        printf("Invalid Position.\n\tTry Again!\n") ;
    return 0;
}