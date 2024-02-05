#include<stdio.h>

// The only difference in the two programs is that one uses an auto storage class for variable i, whereas the other uses static storage class. 
// Like auto variables, static variables are also local to the block in which they are declared. The difference between them is that staticvariables don't disappear when the function is no longer active. Their values persist. If the control comes back to the same function again the static variables have the same values they had last time around. 

void autoIncrement(void)  { // So for auto i will initialize from 1 for each time call
    auto int i = 1 ;
    printf ( "%d ", i ) ; 
    i = i + 1 ; 
}

void staticIncrement(void) { // While for static i will keep its changed value i.e. for static it is initailized only single time not again & again.
    static int i = 1 ; // It is executed only once, irrespective of how many times the same function is called.
    printf ( "%d ", i ) ; 
    i = i + 1 ; 
}

int main(){
    autoIncrement( ) ;
    autoIncrement( ) ;
    autoIncrement( ) ;
    printf("\n") ;
    staticIncrement( ) ;
    staticIncrement( ) ;
    staticIncrement( ) ;

// All this having been said, a word of advice—avoid using static variables unless you really need them. Because their values are kept in memory when the variables are not active, which means they take up space in memory that could otherwise be used by other variables.
    return 0;
}