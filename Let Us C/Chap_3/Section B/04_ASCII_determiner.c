#include<stdio.h>

int main(){
    int i = 1;
    while( i<=255 ){
        printf("%3c = %-3d",i,i);
        i++;
    }
    return 0;
}