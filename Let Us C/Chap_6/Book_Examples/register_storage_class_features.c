#include<stdio.h>

int main() {
// A value stored in a CPU register can always be accessed faster than the one that is stored in memory. Therefore, if a variable is used at many places in a program it is better to declare its storage class as register. A good example of frequently used variables is loop counters.
    register int i ; 
    for ( i = 1 ; i <= 10 ; i++ ) 
    printf ( "\n%d", i ) ;

// But For example, if the microprocessor has 16-bit registers then they cannot hold a float value or a double value, which require 4 and 8 bytes respectively. However, if you use the register storage class for a float or a double variable you won't get any error messages. All that would happen is the compiler would treat the variables to be of auto storage class.

    return 0;
}