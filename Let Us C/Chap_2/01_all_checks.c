#include<stdio.h>

int main(){
    // int a = 300, b, c ; 
    // if ( a >= 400 ) 
    //     b = 300 ; // Since a>=400 so if-block will not execute till first terminator as no delimitters are introduced so b will give address of b OR 0 while c will print normally
    // c = 200 ; 
    // printf ( "\n%d %d", b, c ) ; 

    //  int a = 500, b, c ; 
    // if ( a >= 400 ) // Now since a i.e. 500>400 so if-block will assign b=300
    //     b = 300 ; 
    // c = 200 ; 
    // printf ( "\n%d %d", b, c ) ; 


    // int x = 10, y = 20 ; 
    // if ( x == y ) ; // Since statement terminator is defined right after if-condition so below any line will not be counted in if-block whether conditon is True or Not
    // printf ( "\n%d %d", x, y ) ; 

    // int x = 3, y = 5 ; 
    // if ( x == 3 ) 
    //     printf ( "\n%d", x ) ; 
    // else ; // Else-block will also run even though abov condition is True as it has statement terminator in end
    // printf ( "\n%d", y ) ; 

 
    // int x = 3 ; 
    // float y = 3.0 ;
    // //  Since x is an integer and y is a float, they have different data types. However, C/C++ is capable of performing type coercion (implicit type conversion) in certain situations. So 3 will be implicity converted to float and 3 = 3.0 so program will print x and y are equal 
    // if ( x == y ) 
    // printf ( "\nx and y are equal" ) ; 
    // else 
    // printf ( "\nx and y are not equal" ) ; 

    // int x = 3, y, z ; 
    // y = x = 10 ; //  assigns the value 10 to x, and then assigns the value of x to y. This means that both x and y will be set to 10.
    // z = x < 10 ; // evaluates the expression x < 10. Since x is 10, this comparison is false, and z will be assigned the value 0 because in C/C++, false is represented by 0 and true is represented by 1.
    // // So program will give x=10 y=10 z=0
    // printf ( "\nx = %d y = %d z = %d", x, y, z ) ; 


    // int k = 35 ; 
    // printf ( "\n%d %d %d", k == 35, k = 50, k > 40 ) ; // Answer of such questions is ambiguous as it mostly depends on compiler in my case it associates(moves) from right to left since 35>40 is False so will give 0 then k=50 will assign value 50; in-end relational operator k i.e. 50==35 is also false so will give 0


    // int i = 65 ; 
    // char j = 'A' ; 
    // if ( i == j ) //character literals like 'A' are represented as integers in C (according to their ASCII values), this comparison is true because both i and j have the same value, which is 65.
    // printf ( "C is WOW" ) ; 
    // else 
    // printf( "C is a headache" ) ; 


    // int a = 5, b, c ; 
    // b = a = 15 ; 
    // c = a < 15 ; 
    // printf ( "\na = %d b = %d c = %d", a, b, c ) ; 


    int x = 15 ; 
    printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ; // Depends on compiler here it also moves from right to left

    return 0;
}