#include<stdio.h>

int main(){

    // int suite = 1 ; 
    // switch ( suite ) // ; And here statement terminator used so switch block will give error
    // { 
    //     // case 0;
    // case 0 : // Semi-Colon is used instead of Colon in both the case so correct would be case 0:
    // printf ( "\nClub" ) ; 
    // case 1 :
    // printf ( "\nDiamond" ) ; 
    // } 

    // int temp; 
    // scanf ( "%d", &temp ) ; 
    // switch ( temp ) 
    // { 
    // case  (temp >= 20)  : // As we its syntax error to Relational operators in case-conditions so invalid. Need to use only integers in case
    // printf ( "\nOoooooohhhh! Damn cool!" ) ; 
    // case ( temp > 20 && temp < 30 ) : 
    // printf ( "\nRain rain here again!" ) ; 
    // case ( temp > 30 && temp < 40 ) : 
    // printf ( "\nWish I am on Everest" ) ; 
    // default : 
    // printf ( "\nGood old nagpur weather" ) ; 
    // } 

    // float a = 3.5 ; 
    // switch ( a ){ // As its not possible to use float data-type in switch-condition so syntax error
    //     case 0.5 : 
    //         printf ( "\nThe art of C" ) ; 
    //         break ; 
    //     case 1.5 : 
    //         printf ( "\nThe spirit of C" ) ; 
    //         break ; 
    //     case 2.5 : 
    //         printf ( "\nSee through C" ) ; 
    //         break ; 
    //     case 3.5 : 
    //           printf ( "\nSimply c" ) ; 
    // } 


    // int a = 3, b = 4, c ; 
    // c = b - a ; 
    // switch ( c ) 
    // { 
    // case 1 || 2 : 
    //     printf ( "God give me an opportunity to change things" ) ; 
    //     break ; 
    // case a || b : // Syntax error to use relational operator b/w variables if used only 1 time so allowed but program will only print that case like here if case a||b changes to case 5 || 6 and above one to only case 2 then it will print the OR-operator case irrespective
    //     printf ( "God give me an opportunity to run my show" ) ; 
    //     break ; 
    // } 

    char ch = 2 ;

    switch(ch){
        case 1 :
            printf("Blue-Berries.\n");
            break;
        case 2 :
            printf("Nightmare.\n");
            // break ;
        case 3 :
            printf("Happy Life.\n");
            // break ;
        default :
            printf("Invalid option mate!\n");

    }

    int c = 'v' ; 
    switch ( 3 ) // Since switch = 3 so it will be executed and program will exit switch
    { 
    case 'v' : 
        printf ( "I am in case v \n" ) ; 
        break ; 
    case 3 : 
        printf ( "I am in case 3 \n" ) ; 
        break ; 
    case 12 : 
        printf ( "I am in case 12 \n" ) ; 
        break ; 
    default : 
        printf ( "I am in default \n" ) ; 
    }
    return 0;
}