#include<stdio.h>

// To "comment out" obsolete lines of code. So to use them only when needed. Just like sometimes client want the old code back again just the way it was. SOo use conditional so you don't need to type again.
#ifdef OKAY 
    statement 1 ; 
    statement 2 ; /* detects virus */ 
    statement 3 ; 
    statement 4 ; /* specific to stone virus */ 
#endif 

// To make the programs portable, i.e. to make them work on two totally different computers OR OS's
#ifdef INTEL // ifdefine (ifndef works opposite to that of ifdef)
    code suitable for a Intel PC 
 #else 
     // code suitable for a Motorola PC 
 #endif 
    // code common to both the computers

// Suppose a function myfunc( ) is defined in a file ‘myfile.h’ which is #included in a file 'myfile1.h'. Now in your program file if you #include both 'myfile.h' and 'myfile1.h' the compiler flashes an error 'Multiple declaration for myfunc'. So to avoid this

/* myfile.h */ 
#ifndef __myfile_h 
 #define __myfile_h 
    myfunc( ) 
    { 
    /* some code */ 
    } 
#endif


// Using if / elif conditional (same as if/else)
#if ADAPTER == VGA 
    // code for video graphics array 
#else  // OR can also use #elif ADAPTER == SVGA
    #if ADAPTER == SVGA 
        code for super video graphics array 
    #else 
        code for extended graphics adapter 
    #endif 
#endif

// On some occasions it may be desirable to cause a defined name to become 'undefined'.
// Like by using below statement:- This would cause the definition of PENTIUM to be removed from the system. All subsequent #ifdef PENTIUM statements would evaluate to false.
#undef PENTIUM


int main(){
    
    return 0;
}