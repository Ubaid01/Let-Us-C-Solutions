// #include<stdio.h>

// void junk ( int i, int j ) { 
//     i = i * i ; 
//     j = j * j ; 
// }
// int main(){
//     int i = 5, j = 2 ;
//     junk ( i, j ) ; 
//     printf ( "\n%d %d", i, j ) ; 
// // Since we didn't pass by reference OR return a value but a copy is passed so  when printed in main i and j will remain unchanged
//     return 0;
// }

// #include<stdio.h>

// void junk ( int *i, int *j ) { 
//  *i = *i * *i ; 
//  *j = *j * *j ; 
// } 
// int main(){
//     int i = 5, j = 2 ; 
//     junk ( &i, &j ) ; 
// // Now since we call function by reference so changing in function will be replicated in main function as well so i => 5 x 5 = 25 and j => 2 x 2 = 4 
//     printf ( "\n%d %d", i, j ) ;  
//     return 0;
// }

// #include<stdio.h>

// void junk ( int *i, int j ) { 
//  *i = *i * *i ; 
//  j = j * j ; 
// }
// int main(){
//     int i = 4, j = 2 ; 
//     junk ( &i, j ) ; // Now here i's address is passed but j's copy is given to function so only changes in i's value will be replicated in main function. Hene i => 4 x 4 = 16 while j = 2
//     printf ( "\n%d %d", i, j ) ;  
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     float a = 13.5 ; 
//     float *b, *c ; // Since declared as pointers so whenever used will only used to store address
//     b = &a ; /* suppose address of a is 1006 */
//     c = b ; 
//     printf ( "\n%u %u %u", &a, b, c ) ; 
// // &a => memory address of a while b and c are containers whole that address
//     printf ( "\n%f %f %f %f %f", a, *(&a), *&a, *b, *c ) ;
// //  *(&a) will be same as printing a while to print values pointed by pointers * is used like *b, *c 
//     return 0;
// }


// // QUESTION I

// #include<stdio.h>
// #include<stdlib.h> // FOR exit function

// int main(){
//     int i = 0 ; 
//     i++ ; 
//     if ( i <= 5 ) // Since at 1st time i is less than 5 so if-block will run and print line 
//     { 
//         printf ( "\nC adds wings to your thoughts" ) ; 
//         exit( 1 ) ; // So before calling the main function again and again it will exit() i.e. stop the execution of main completely

//         main( ) ; // If exit not used so main will be called again and again till memory exhausts cause i will be again preseted to 0 for each main call 
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int main(){
    static int i = 0 ; 
// When you declare a variable as static int i = 0; inside a function, it becomes a static variable. Static variables retain their values between function calls. Their lifetime is throughout the program's execution, and they preserve their values between function calls.

// In the context of this code, using static int i = 0; ensures that i retains its value between calls to main(), allowing the code to limit the recursive calls by incrementing i until it reaches the value of 5.

    i++ ; 
    if ( i <= 5 ) { 
        printf ( "\n%d", i ) ; 
        main( ) ; 
    } 
    else
        exit( 1 ) ; 
    return 0;
}