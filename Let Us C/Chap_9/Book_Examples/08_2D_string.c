#include<stdio.h>
#include<string.h>

#define FOUND 1 
#define NOTFOUND 0

int main(){
    char masterlist[6][10] = { "akshay" , "parag" , "raman", "gopal", "rajesh", "Obaid" } ;
// The first subscript gives the number of names in the array, while the second subscript gives the length of each item in the array.  
    int  i, flag, a ; 
    char  yourname[10] ;
    printf ( "\nEnter your name " ) ; 
    scanf ( "%s", yourname ) ; 
    flag = NOTFOUND ; 
    for ( i = 0 ; i <= 5 ; i++ ) { 
        // a = strcmp ( &masterlist[i][0], yourname ) ; // Will read all chars from [i][0] place
        a = strcmp ( masterlist[i], yourname ) ; // OR simply
         if ( a == 0 ) {
            printf ( "Welcome, you can enter the palace" ) ; 
            flag = FOUND ; 
            break ; 
        }
    } 
        if ( flag == NOTFOUND ) 
            printf ( "Sorry, you are a trespasser" ) ;

    return 0;
}