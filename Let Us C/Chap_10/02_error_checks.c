#include<stdio.h>
#include<string.h>

    // struct s  { 
//             char  ch ; 
//             int  i ; 
//             float  a ; 
//             } ; 

// // void f ( struct s  v ) {  // Wrong arguments given ( Here giving simple struct variable but using arrow pointer operator to access it )
// void f ( struct s  *v ) {  
//     printf ( "\n%c %d %f", v -> ch, v -> i, v -> a ) ; 
// } 

// // void g ( struct s  *v ) { // Here giving address of struct variable but using simple dot opertor
// void g ( struct s  v ) { 
//     printf ( "\n%c %d %f", v.ch, v.i, v.a ) ; 
// } 


int main(){
    // struct employee { 
    //     char  name[25] ; 
    //     int  age ; 
    //     float  bs ; 
    //     } ; 
    // struct employee  e ; 
    // strcpy ( e.name, "Hacker" ) ;  // Correctly use as initialzing e.name by copying
    // int age = 30 ; // Did not declare age separately for main
    // e.age = 25 ; // OR use struct.age instead
    // printf ( "\n%s %d", e.name, age ) ;    
    // printf ( "\n%s %d", e.name, e.age ) ;    


// // As initializing by 3rd method so need to declare e at end of strcut
//     struct  { 
//             char  name[25] ; 
//             char  language[10] ; 
//         //  } ; 
//         } e = { "Hacker", "C" } ; 
//     // struct employee  e = { "Hacker", "C" } ; 
//     // printf ( "\n%s %d", e.name, e.language ) ; // Also use %s to print language string
//     printf ( "\n%s %s", e.name, e.language ) ;


// struct virus {
//     char signature[25];
//     char status[20];
//     int size;
// } v[2] = {  {"Yankee Doodle", "Deadly", 1813},   // All defined at 0th index of respective
//             {"Dark Avenger", "Killer", 1795}  }; // All defined at 1st index of respective

//     int i;

//     for (i = 0; i <= 1; i++) 
//         printf("\n%s %s %d", v[i].signature, v[i].status, v[i].size);
// //       printf("\n%s %s %d", v.signature, v.status, v.size); // Worng way to access array
     

    // struct s  var = { 'C', 100, 12.55 } ; 
    // // f ( var ) ; g(&var)  Wrong argument also passed 
    // f ( &var ) ; 
    // g ( var ) ;

    struct s  { 
            int  i ; 
            struct s  *p ; 
            } ;
    struct s  var1, var2 ; 
    var1.i = 100 ; 
    var2.i = 200 ; 
// var1.p is assigned the address of var2. This means var1's pointer p now points to var2 AND var2's pointer p points back to var1.
    var1.p = &var2 ; 
    var2.p = &var1 ; 
    printf ( "\n%d %d", var1.p -> i, var2.p -> i ) ; 
// var1.p->i accesses the i member of the struct that var1.p points to. Since var1.p points to var2, it prints the value var2.i, which is 200. and var2.p -> i prints 100 
    return 0;
}