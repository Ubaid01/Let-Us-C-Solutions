#include<stdio.h>

int main(){
    // int num[26], temp ; 
    // num[0] = 100 ; 
    // num[25] = 200 ; 
    // temp = num[25] ; // 200 stored in temp and num[0] i.e. 100 assigned to num[25] while temp to num[0]
    // num[25] = num[0] ; 
    // num[0] = temp ; 
    // printf ( "\n%d %d", num[0], num[25] ) ; // prints 200  100

     
    // int array[26], i ; 
    // for ( i = 0 ; i <= 25 ; i++ ) { 
    //     array[i] = 'A' + i ; // Here 65 ASCII-code is being added to each array[i]
    //     printf ( "\n%d %c", array[i], array[i] ) ; // so %d will print 65 till 65 + 25 = 90 while %c prints 'A' till 26 chars i.e. A to Z
    // }

     
    int sub[50], i ; 
    for ( i = 0 ; i <= 48 ; i++ ) ;  { // Since there is statement terminator at the end of for-block so it will run complete but not stores as below blocks are not included and when it leaves loops then i will be 49 > 48 so sub[49] will have 49 and it will be printed
        sub[i] = i ; 
        printf ( "\n%d", sub[i] ) ; 
    } 
    return 0;
}