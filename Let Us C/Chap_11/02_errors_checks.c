#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    // int i ; 
    // // char a[ ] = "Hello" ;
    // char *a = "Hello" ; // If using pointer to print so can't initialize by string.
    // while ( *a != '\0' ) { 
    //     printf ( "%c", *a ) ; 
    //     a++ ; 
    // } 
// OR can also do like this.
    // int i = 0; 
    // char a[ ] = "Hello" ; 
    // while ( a[i] != '\0' ) { 
    //     printf ( "%c", a[i] ) ; 
    //     i++ ; 
    // } 

    // double dval ; 
    // // scanf ( "%f", &dval ) ; // Wrong format specifier used for input
    // scanf ( "%lf", &dval ) ;
    // printf ( "\nDouble Value = %lf", dval ) ;

    // int ival ; 
    // // scanf ( "%d\n", &n ) ; // Wrong address given for variable and since scanf already requires \n so can't use it again...
    // scanf ( "%d", &ival ) ;
    // printf ( "\nInteger Value = %d", ival ) ; 

    // char  *mess[3] ; // It is a 2D- pointer to string
    // for ( int i = 0 ; i < 3 ; i++ ) {
    //     mess[i] = (char *)malloc(100 * sizeof(char)); // Allocate memory for each string
    //     // scanf ( "%s", mess[i] ) ; // Can input string without spaces
    //     fgets( mess[i] , 100 * sizeof(char) , stdin ) ; // With spaces
    //     printf("%s\n", mess[i] ) ;

    //     free(mess[i]) ;
    // }

//     int dd, mm, yy ; 
//     printf ( "\nEnter day, month and year\n" ) ; 
//     scanf ( "%d%*c%d%*c%d", &dd, &mm, &yy ) ;
// // %*c : Reads a character (in this case, it expects and reads a delimiter character like -, /, etc.) but does not assign it to any variable. The * in %*c indicates that the character read should be discarded.
//     printf ( "The date is: %d - %d - %d", dd, mm, yy ) ; 


    // // char text ; // Not declared as a string
    // char text[30] ;
    // sprintf ( text, "%4d\t%2.2f\n%s", 12, 3.452, "Merry Go Round" ) ; 
    // printf ( "\n%s", text ) ; 


    char buffer[50] ;
    int no = 97; 
    double val = 2.34174 ; 
    char name[10] = "Shweta" ; 
    sprintf ( buffer, "%d %lf %s", no, val, name ) ;
// sprintf: It takes a format string (const char *format) similar to printf, but instead of printing to the standard output, it writes the formatted output to the character array str. 
    printf ( "\n%s", buffer ) ; 

    char data[] = "Apple 10.5";
    char fruit[20];
    float price;
    sscanf(data, "%s %f", fruit, &price);
// sscanf : It takes a string str and reads data from it based on the provided format string (const char *format) just like scanf does from standard input.
    printf("\nFruit: %s\nPrice: %.2f\n", fruit, price); 
    return 0;
}