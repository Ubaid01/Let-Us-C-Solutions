// Till now I can't understand these
#include<stdio.h>

int main(){
    
    struct 
    { 
    int  x, y; 
    }
    s[ ] = { 10, 20, 15, 25, 8, 75, 6, 2 }; 
    int  *i ; 
    i = s ;

    printf("%u\n", *( i + 3 ) ) ;                          
    printf("%d\n", s[i[7]].x ) ;                          
    // printf("%d\n", s[ (s + 2)->y / 3[I]].y ) ; // (Errored) 
    printf("%d\n", i[i[1]-i[2]] ) ;                    
    printf("%d\n", i[s[3].y] ) ;                         
    // printf("%d\n" , ( s + 1 ) - > x + 5 ) ;    // (Errored)              
    printf("%d\n", *( 1 +i )**( i + 4 ) / *i ) ;            
    printf("%d\n", s[i[0] - i[4]].y + 10 ) ;                
    printf("%d\n", ( *(s + *( i + 1) / *i ) ).x + 2 ) ;     
    // printf("%d\n", ++i[i[6]] j. 100 ) ;   // (Errored) 
    return 0;
}
