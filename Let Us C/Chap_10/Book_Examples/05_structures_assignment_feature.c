#include<stdio.h>
#include<string.h>

int main(){
// The values of a structure variable can be assigned to another structure variable of the same type using the assignment operator. It is not necessary to copy the structure elements piece-meal.
    struct employee { 
        char  name[10] ; 
        int  age ; 
        float  salary ; 
                } ; 
    struct employee  e1 = { "Sanjay", 30, 5500.50 } ; 
    struct employee  e2, e3 ; 
    /* piece-meal copying */ 
    strcpy ( e2.name, e1.name ) ; 
    e2.age = e1.age ; 
    e2.salary = e1.salary ; 
    /* copying all elements at one go */ 
    e3 = e2 ; 
// This copying of all structure elements at one go has been possible only because the structure elements are stored in contiguous memory locations. 
    printf ( "\n%s %d %f %u", e1.name, e1.age, e1.salary, e1.name ) ; 
    printf ( "\n%s %d %f %u", e2.name, e2.age, e2.salary , e2.name) ; 
    printf ( "\n%s %d %f %u", e3.name, e3.age, e3.salary, e3.name) ; // All things are arranged in proper sequence (contiguous) memory location.
    
    return 0;
}