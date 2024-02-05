#include<stdio.h>

int main(){
    for(int i=1; i<=256; i++){
        printf("%3c= %-3d",i,i);
    }
    return 0;
}