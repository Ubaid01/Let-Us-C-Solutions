#include<stdio.h>
#include<string.h>

int xMystrcmp(const char s1[] , const char s2[]) {
    int count_s1 = 0, count_s2 = 0 , sum_1 = 0, sum_2 = 0;

    while( s1[count_s1] != '\0') {
        sum_1 += (int) s1[count_s1] ; // First add that ASCII value then increment index
        count_s1++ ;
    }

    while( s2[count_s2] != '\0') {
        sum_2 += (int) s2[count_s2] ; 
        count_s2++ ;
    }

    if( sum_1 == sum_2 )
        return 0 ;
    else if (sum_1 > sum_2 )
        return 1 ;
    else
        return  -1 ;
}

int main(){
    char  string1[ ] = "Jerry" ; 
    char  string2[ ] = "Ferry" ; 
    int  i, j, k ; 
    i = strcmp ( string1, "Jerry" ) ; 
    j = strcmp ( string1, string2 ) ; 
    k = strcmp ( string1, "Jerry boy" ) ; 
    printf ( "\n%d %d %d", i, j, k ) ;   

    int a, b, c ;
    a = xMystrcmp ( string1, "Jerry" ) ; 
    b = xMystrcmp ( string1, string2 ) ; 
    c = xMystrcmp ( string1, "Jerry boy" ) ; 
    printf ( "\n%d %d %d", a, b, c ) ;   
    return 0;
}