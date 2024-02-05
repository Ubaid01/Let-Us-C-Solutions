#include<stdio.h>
#include<stdlib.h>

int main(){
    int goals ; 
    printf ( "Enter the number of goals scored against India : " ) ; 
    scanf ( "%d", &goals ) ; 
    if ( goals <= 5 ) 
    goto sos ; // If want to take control of program (But avoid it mostly as it obscures the flow of control)
    else 
    { 
    printf ( "About time soccer players learnt C\n" ) ; 
    printf ( "and said goodbye! adieu! to soccer" ) ; 
    exit(1) ; /* terminates program execution Exit is always used for goto*/   
    } 
    sos :  
    printf ( "To err is human!" ) ;
    return 0;
}