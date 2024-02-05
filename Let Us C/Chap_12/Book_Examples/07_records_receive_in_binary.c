/* Receives records from keyboard and writes them to a file in binary mode */ 

#include<stdio.h>
#include<conio.h>

int main(){
    FILE  *fp ; 
    char  another = 'Y' ;  
    struct emp  { 
        char  name[40] ; 
        int  age ; 
        // float  bs ; 
        double bs; // Use double for higher precision in case of binary mode
    } ; 

    struct emp  e ; 
//     fp = fopen ( "07_EMP.dat", "wb" ) ; 
//     if ( fp == NULL )  { 
//         puts ( "Cannot open file" ) ; 
//         return 1 ; 
//     } 

//     while ( another == 'Y' ) { 
//         printf ( "\nEnter name, age and basic salary: " ) ; 
//         scanf ( "%s %d %lf", e.name, &e.age, &e.bs ) ; 
//         fwrite ( &e, sizeof ( e ), 1, fp ) ; 
// // fwrite used to write in binary mode in file
// // 1st Argument is  address of the structure to be written to the disk. 
// // 2nd Argument is  size of the structure in bytes. 
// // 3rd Argument is  number of such structures that we want to write at one time. In this case, we want to write only one structure at a time. Had we had an array of structures, for example, we might have wanted to write the entire array at once.  
// // 4th Argument is pointer to the file we want to write to. 
//         printf ( "Add another record (Y/N) " ) ; 
//         fflush ( stdin ) ; 
//         another = getche( ) ; 
//     } 
//     fclose ( fp ) ; 

    // To read from binary file
    fp = fopen ( "07_EMP.dat", "rb" ) ; 
    if ( fp == NULL ) { 
        puts ( "Cannot open file" ) ; 
        return 1 ; 
    } 
// The function fread( ) returns the number of records read. Ordinarily, this should correspond to the third argument, the number of records we asked for... 1 in this case. If we have reached the end of file, since fread( ) cannot read anything, it returns a 0.
    while ( fread ( &e, sizeof ( e ), 1, fp ) == 1 ) 
        printf ( "\n%s %d %lf", e.name, e.age, e.bs ) ;  
    
    fclose ( fp ) ; 
    return 0;
}