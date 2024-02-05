#include<stdio.h>

int main(){
    char  *names[ ] = { "akshay","parag", "raman", "srinivas" ,"gopal", "rajesh" } ;
//  In this declaration names[ ] is an array of pointers. It contains base addresses of respective names. That is, base address of "akshay" is stored in names[0], base address of "parag" is stored in names[1] and so on.  

    // int  i ; 
    // char  t ;   
    // printf ( "\nOriginal: %s %s", &names[2][0], &names[3][0] ) ;    
    // for ( i = 0 ; i <= 9 ; i++ ) { 
    //     t = names[2][i] ; 
    //     names[2][i] = names[3][i] ; 
    //     names[3][i] = t ; 
    // } 
    // printf ( "\nNew: %s %s", &names[2][0], &names[3][0] ) ; 

    // Easy way to change strings in array
    char  *temp ; 
    printf ( "Original: %s %s", names[2], names[3] ) ; 
    temp = names[2] ; 
    names[2] = names[3] ; 
    names[3] = temp ; 
    printf ( "\nNew: %s %s", names[2], names[3] ) ; 
   return 0;
}