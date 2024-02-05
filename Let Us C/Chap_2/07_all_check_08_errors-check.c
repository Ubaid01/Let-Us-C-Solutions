#include<stdio.h>

int main(){

    // int i = -4, j, num ; 
    // j = ( num < 0 ? 0 : num * num ) ; // In Ternary (Conditional) The condition before ? is if-condition and ? 0 will run if True and if if -condition False so (:) after it statement will run
    // // Here since num < 0 cause we don't initalize it so it will have no value that's why condition will always be False either < or >
    // printf ( "\n%d", j ) ; 


    // int k, num = 30 ; 
    // k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;// If k is printed so 1st condition is True i.e. (30 > 5) then it will goto ? where another conditional which is False so will print (:) block i.e. 200
    // printf ( "\n%d", k ) ;

    // int j = 4 ; // Since j is +ve so will be considered True and its logical ! is 0 since 0 != 1 is True so print Welcome
    // ( !j != 1 ? printf ( "\nWelcome") : printf ( "\nGood Bye") ) ;


    // int tag = 0, code = 1 ; 
    // if ( tag == 0 ) // Since tag=0 True but code > 1 so will print (:) operator in if i.e. Hi
    // ( code > 1 ? printf ( "\nHello" ) : printf ( "\nHi" ) ) ; 
    // else 
    // printf ( "\nHello Hi !!" ) ; 


    // int ji = 65 ; 
    // // printf ( "\nji >= 65 ? %d : %c", ji ) ; Original 
    // ji >= 65 ? printf("Greater than 65") :  ji  ; 


    // int i = 10, j ; 
    // i >= 5 ? ( j = 10 ) : ( j = 15 ) ; // Since condition is True so will assign value 10 to j
    // printf ( "\n%d %d", i, j ) ; 


    // int a = 5 , b = 6 ; 
    // ( a == b ? printf( "%d",a) ) ; // Original
    // ( a == b ? printf( "%d",a) : printf("Both are not equal!") ) ; // Corrected 


    // int n = 9 ; 
    // // ( n == 9 ? printf( "You are correct" ) ; : printf( "You are wrong" ) ;) ; // Original
    // ( n == 9 ? printf("You are correct") : printf( "You are wrong")) ;// Statement terminators used wrongly


    int kk = 65 ,ll ; 
    ll = ( kk == 65 ? printf ( "\n kk is equal to 65" ) : printf ( "\n kk is not equal to 65" ) ) ; 
    // Both printf functions are executed, and they each print their respective message, which contains 19 and 23 characters. which is also assigned to ll after 65 so whole-statement with in end 6519 or 6523 are being printed 
    printf( "%d", ll ) ; 


    // int x = 10, y = 20 ; 
    // x == 20 && y != 10 ? printf( "True" ) : printf( "False" ) ; // Condition Flase so print False



    return 0;
}