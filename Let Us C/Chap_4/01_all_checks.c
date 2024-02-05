#include<stdio.h>

int main(){

    // char suite = 3 ; 
    // switch ( suite ) 
    // { 
    // case 1 : 
    // printf ( "\nDiamond" ) ; 
    // case 2 : 
    // printf ( "\nSpade" ) ; 
    // default :  // As case = 3 which is default so it will be printed and then exit switch to print new line
    // printf ( "\nHeart") ; 
    // } 
    // printf ( "\nI thought one wears a suite" ) ; 


    // int c = 3 ; 
    // switch ( c ) 
    // { 
    // case 'v' : 
    // printf ( "I am in case v \n" ) ; 
    // break ; 
    // case 3 : // Since case = 3 so it will be executed and program will exit switch
    // printf ( "I am in case 3 \n" ) ; 
    // break ; 
    // case 12 : 
    // printf ( "I am in case 12 \n" ) ; 
    // break ; 
    // default : 
    // printf ( "I am in default \n" ) ; 
    // }

    // int k, j = 2 ; 
    // switch ( k = j + 1 ) // Since k will be assigned value 2+1 = 3 and case 3 not present so default block will be executed
    // { 
    // case 0 : 
    // printf ( "\nTailor") ; 
    // case 1 : 
    // printf ( "\nTutor") ; 
    // case 2 : 
    // printf ( "\nTramp") ; 
    // default : 
    // printf ( "\nPure Simple Egghead!" ) ; 
    // } 

    // int i = 0 ; 
    // switch ( i ) 
    // { 
    // case 0 : // Now since i=0 and no break statements are used so switch block will run all statements whether True or False till default statement
    // printf ( "\nCustomers are dicey" ) ; 
    // case 1 : 
    // printf ( "\nMarkets are pricey" ) ; 
    // case 2 : 
    // printf ( "\nInvestors are moody" ) ; 
    // case 3 : 
    // printf ( "\nAt least employees are good" ) ; 
    // } 

    // int k ; 
    // float j = 2.0 ; 
    // switch ( k = j + 1 ) // Since 2.0 exactly equals to 3.0 and since used int so dropped down to 3 hence case 3 is executed but if k is also float so program will show syntax error as switch not takes float or <= & >= as arguments
    // { 
    // case 3 : 
    //     printf ( "\nTrapped" ) ; 
    //     break ; 
    // default : 
    //     printf ( "\nCaught!" ) ; 
    // }


    // int ch = 'a' + 'b' ; 
    // switch ( ch ) 
    // { 
    // case 'a' : 
    // case 'b' : 
    // printf ( "\nYou entered b" ) ; 
    // case 'A' : 
    // printf ( "\na as in ashar" ) ; 
    // case 'b' + 'a' : // Since individual characters are added so it will treat it as ASCII-values and print it but if variables a + b were used so will show syntax error as not allowed only integers and chars can be binary operated in case-statements
    // printf ( "\nYou entered a and b" ) ; 
    // } 


    int i = 1 ; 
    switch ( i - 1 ) // Since by evaluating i - 2 = -1 and break statements used so it will print all cases from -1 whether True or False till default case
    { 
    case -1 : 
    printf ( "\nFeeding fish" ) ; 
    case 0 : 
    printf ( "\nWeeding grass" ) ; 
    case 1 : 
    printf ( "\nmending roof" ) ; 
    default : 
    printf ( "\nJust to survive" ) ;
    }

    return 0;
}