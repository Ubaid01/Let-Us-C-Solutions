#include<stdio.h>

int main(){
    int i;
    for(i = 0; i <= 1000; i++)
        printf("%c %c ", 3, 4); // As 2 characters so screen will be filled earlier that's why end-limit 1000
    fflush(stdout);
    return 0;
}