#include <stdio.h> // signs only check header file in specified directory
#include"sum.h" // Quotations are used to check header file in currect directory and given path also

// Can also save as sum.c and include then
int main(){
    printf("%d", sumRec( 4 ) ) ;
    return 0;
}