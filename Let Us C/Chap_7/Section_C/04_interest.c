#include<stdio.h>
#include"interest.h"

int main(){
    double a = SIMPLE_INTEREST(4000, 4 , 3) ; // As already divided by 100 in formula so writ ate as 4 instead of 0.25 OR 1 / 4
    double b = AMOUNT(4000, a) ;
    printf("Simple-Interest will be %.2lf\n While New-Amount = %.2lf.", a, b ) ;
    return 0;
}