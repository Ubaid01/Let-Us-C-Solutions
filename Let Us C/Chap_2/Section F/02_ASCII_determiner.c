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