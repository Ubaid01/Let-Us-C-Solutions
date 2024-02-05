#include<stdio.h>
#include<conio.h>

int main(){
        char ch;
    printf("Enter a character: ");
    while((ch = getch()) != '\r'){ // \r stands for Enter key
        printf("\n");
        if(ch>=65 && ch<=90){
            printf("%c upper-case character was entered\n",ch);
        }
        else if(ch>=97 && ch<=122){
            printf("%c lower-case character was entered\n",ch);
        }
        else if(ch>=48 && ch<=57){
            printf("%c digit was entered\n",ch);
        }
        else{
            printf("%c special character was entered\n",ch);
        }
    }
    return 0;
}

// Improved version
// As conio is not present in most compilers so getchar used and \n is used mostly instead of \r
// This getchar will stored all characters separately until the next line is not printed
// #include <stdio.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
    
//     while ((ch = getchar()) != '\n') {
//         if ((ch >= 'A' && ch <= 'Z')) {
//             printf("%c is an uppercase character.\n", ch);
//         } else if ((ch >= 'a' && ch <= 'z')) {
//             printf("%c is a lowercase character.\n", ch);
//         } else if ((ch >= '0' && ch <= '9')) {
//             printf("%c is a digit.\n", ch);
//         } else {
//             printf("%c is a special character.\n", ch);
//         }
//     }
    
//     return 0;
// }
