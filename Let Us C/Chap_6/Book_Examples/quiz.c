#include<stdio.h>

int x = 10 ;

void display(void) { 
    printf ( "\n%d", x ) ; 
} 

int main(){
    display( ) ; // Since display is called before changing value so only Global variable occurs
    
    int x = 20 ;
    printf ( "\n%d", x ) ; // However when both global and local variables are used 
// So Local variable has more priority than Global variable.
    return 0;
}