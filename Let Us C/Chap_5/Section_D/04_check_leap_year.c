#include<stdio.h>
#include<stdbool.h>

bool leapyr(int year){
    if( ( year % 4 == 0 && year % 100 != 0  ) || year % 400 == 0)
        return 1 ;
    else
        return 0 ;
}


int main(){
    int year ;
    printf("Enter any year: ") ;
    scanf("%d", &year ) ;

    if( leapyr(year) ) // Nothing written so means when condition is TRUE
        printf("%d is a LEAP year.\n", year) ;
    else
        printf("%d is a NOT a leap year.\n", year) ;

    return 0;
}