#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    // char  *names[6] ; 
    // int  i ; 
    // for ( i = 0 ; i <= 5 ; i++ ) { 
    //     printf ( "\nEnter name " ) ; 
    //     // scanf ( "%s", names[i] ) ; // The program doesn’t work because; when we are declaring the array it is containing garbage values. And it would be definitely wrong to send these garbage values to scanf( ) as the addresses
    //     scanf ( "%s", &names[i] ) ;
    // }

    // printf("Name entered are : ") ;
    // for(int  i = 0 ; i <= 5 ; i++ ) {
    //     printf("%s ", &names[i] ) ;
    // }

    // For more easiness can you dynamic memory allocation
    char  *names[6] ; 
    char n[50] ; 
    int  len, i ; 
    char *p ; 
    for ( i = 0 ; i <= 5 ; i++ ) { 
        printf ( "\nEnter name " ) ; 
        scanf ( "%s", n ) ; 
        len = strlen ( n ) ; 
        p = malloc(len + 1);  // Allocate memory for each string
        if (p == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(p, n); // The address returned by this function is always of the type void *. Hence it has been converted into char * using a feature called typecasting. 
        names[i] = p;  // Store the address in names array
    }

    for (i = 0; i < 6; i++)
        printf("\n%s", names[i]);

    // Free allocated memory for each string
    for (i = 0; i < 6; i++)
        free(names[i]);

    return 0;
}