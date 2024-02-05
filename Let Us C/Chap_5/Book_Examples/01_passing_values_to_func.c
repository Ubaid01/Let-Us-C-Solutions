#include<stdio.h>

int calsum (int x , int y, int z) ; // This method is called ANSI method and is more commonly used these days.

// calsum ( x, y, z ) 
// int x, y, z ;  Kernighan and Ritchie (or just K & R) method. to declare formal arguments

// return ( x, 12 ) ; A function can return only 1 value at a time so unvalid
char fun(void) 
{ 
 char ch ; 
 printf ( "\nEnter any alphabet " ) ; 
 scanf (" %c", &ch) ; 
 if ( ch >= 65 && ch <= 90 ) 
 return ( ch ) ; 
 else 
 return ( ch - 32 ) ; 
} 

int main(){
    int a, b, c, sum ; 
    printf ( "\nEnter any three numbers " ) ; 
    scanf ( "%d %d %d", &a, &b, &c ) ; 
    sum = calsum ( a, b, c ) ;
    printf ( "\nSum = %d", sum ) ;

    printf("\n%c ", fun() );
    return 0;
}

int calsum ( x, y, z ) 
int x, y, z ; 
{ 
 int d ; 
 d = x + y + z ; 
 return ( d ) ; // If only (return ;) written only so means return successfully
}
