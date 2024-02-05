#include<stdio.h>
#include<conio.h>
#include<string.h>

void xgets(char str[]) {
    int i = 0;
    char ch;
    while ((ch = getche()) != '\r') { // Terminates on Enter 
        if (ch == '\b' && i > 0) { // Handles backspace
            printf("\b \b"); // Removes previous character
            i--;
        } 
        else if (ch != '\b') { // Ignores backspace as input
            str[i] = ch;
            i++;
        }
    }
    str[i] = '\0'; // Null-terminate the string
    printf("%s\n", str) ;
}

void xputs(const char *str) { // While printing don't change string
    if(str == NULL ) {
        printf("Error writing output.\n");
        return ;
    }
    else
       printf("%s\n", str) ;
}

int main(){
    char buf[50] ;
    // puts("Enter ") ;
    // gets(buf) ;
    // puts("Entered string") ;
    // puts(buf) ;
    xputs("Enter ") ;
    xgets( buf );
    xputs("Entered string") ;
    xputs(buf) ;
    return 0;
}