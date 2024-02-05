// #include<stdio.h>

// float circle ( int r ) { 
//     float a ; 
//     a = 3.14 * r * r ; 
//     return ( a ) ; 
// }
// int main(){
//     float area ; 
//     int radius = 1 ; 
//     area = circle ( radius ) ; 
//     printf ( "\n%f", area ) ; // This will print 3.14 till 6 decimal places
//     return 0;
// }

#include<stdio.h>

int slogan(void) { 
    printf ( "\nOnly He men use C!" ) ; 
    return ; // This will show error as value is not Returned so will terminate prematurely
} 
int main(){
    int c = 5 ; 
    c = slogan() ; // Hence c will hold the number of characters in statement printed along with no_of_chars for new line
    printf ( "\n%d", c ) ; 
    return 0;
}