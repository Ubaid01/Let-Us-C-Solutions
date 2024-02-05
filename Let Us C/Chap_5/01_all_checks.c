// #include<stdio.h>

// void display(void) ;

// int main(){
//     printf ("\nOnly stupids use C?" ) ; 
//     display() ; 
//     return 0;
// }

// void display(void) { 
//     printf ( "\nFools too use C!" ) ; 
//     main() ; // Since we are again calling main here so it will start main all again which is Wrong so it will keep printing both statements again & again till memory exhausts.
// } 
// Also we defined here not with prototype as if function defined before main so it will not know what is main so can give AN ERROR or proceed as mentioned above

// #include<stdio.h>

// int main(){
//     printf ( "\nC to it that C survives" ) ; 
//     main() ; // It will also keep printing above line as main is called again & again which will start the execution from start.(all over again)
//     return 0;
// }

// #include<stdio.h>

// int check ( int ch ) { 
//     if ( ch >= 45 ) // No matter what condiiton is TRUE this function will return 100 in each case
//         return ( 100 ) ; 
//     else 
//         return ( 10 * 10 ) ; 
// }

// int main(){
//     int i = 45, c ; 
//     c = check ( i ) ; 
//     printf ( "\n%d", c ) ; 
//     return 0;
// }

#include<stdio.h>

int check ( int ch ) { 
    if ( ch >= 40000 ) 
        return ( ch / 10 ) ; 
    else 
        return ( 10 ) ; 
} 

int main(){
    int i = 45, c ; 
    // c = multiply ( i * 1000 ) ; // As mentioned in declaration we have named function as check so
    c = check( i * 1000 ) ; // And will print ch / 10 => 45000/10 => 4500
    printf ( "\n%d", c ) ; 
    return 0;
}