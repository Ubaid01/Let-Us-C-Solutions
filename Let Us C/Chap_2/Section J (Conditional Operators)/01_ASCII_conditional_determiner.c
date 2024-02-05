// My-Way
#include<stdio.h>
#include<conio.h>

int main(){
    char ch;
    do{ // Do-while so that before exiting the character should be displayed
        printf("Enter your character(OR press Q or q to exit): ");
        scanf(" %c", &ch); // Good practice to leave space as to avoid white-spaes buffer
        printf("\n");

        (ch >= 'A' && ch <= 'Z') ? printf("%c is an Upper-case character\n", ch) : (( ch >= 'a' && ch <= 'z' ) ? printf("%c is a lower-case character\n", ch) : ( ch >= '0' && ch  <= '9' ) ? printf("%c is a digit\n", ch) : printf("%c is a special character\n", ch)) ;
        

    }while(ch != 'Q');

    return 0;
}

// // Another-Way
// #include <stdio.h>

// int main() {
//     char ch;

//     // Input a character from the keyboard
//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     // Check if the character is a lowercase alphabet using conditional operator
//     int isLowercase = (ch >= 'a' && ch <= 'z') ? 1 : 0;

//     // Check if the character is a special symbol using conditional operator
//     int isSpecialSymbol = ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) ? 1 : 0;

//     // This means if isLowerCase is True(1) so print ? ellse print :
//     isLowercase ? printf("The character is a lowercase alphabet.\n") : printf("The character is not a lowercase alphabet.\n") ;

//     isSpecialSymbol ? printf("The character is a special symbol.\n") : printf("The character is not a special symbol.\n");

//     return 0;
// }
