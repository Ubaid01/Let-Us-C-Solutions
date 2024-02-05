/* File-copy program which copies text, .com and .exe files */ 
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include <sys/stat.h>

int main(  int  argc, char  *argv[ ] ) {
    char  buffer[ 512 ], source [ 128 ], target [ 128 ] ; 
// buffer[512] This is the buffer in which the data read from the disk will be placed. The size of this buffer is important for efficient operation. 
    int  inhandle, outhandle, bytes ; 
    printf ( "\nEnter source file name: " ) ; 
    gets ( source ) ; 
// O_CREAT  -  Creates a new file for writing (has no effect if file already exists) 
// O_RDONLY -  Creates a new file for reading only 
// O_RDWR -  Creates a file for both reading and writing 
// O_WRONLY -  Creates a file for writing only 
// O_BINARY -  Creates a file in binary mode 
// O_TEXT -  Creates a file in text mode 
// These ‘O-flags’ are defined in the file “fcntl.h” . . When two or more O-flags are used together, they are combined using the bitwise OR operator ( | ). 
    inhandle = open ( source, O_RDONLY | O_BINARY ) ; 
    if ( inhandle == -1 ) { 
        puts ( "Cannot open file" ) ; 
        exit(1) ; 
    } 
    printf ( "\nEnter target file name" ) ; 
    gets ( target ) ; 
// S_IWRITE -  Writing to the file permitted
// S_IREAD  - Reading from the file permitted
    outhandle = open ( target, O_CREAT | O_BINARY | O_WRONLY , S_IWRITE );
    if ( inhandle == -1 ) { 
        puts ( "Cannot open file" ) ; 
        close ( inhandle ) ; 
        exit(1) ; 
    } 
    while ( 1 ) { 
        bytes = read ( inhandle, buffer, 512 ) ; 
// The read( ) function takes three arguments. The first argument is the file handle, the second is the address of the buffer and the third is the maximum number of bytes we want to read.The read( ) function returns the number of bytes actually read. 
        if ( bytes > 0 ) 
            write ( outhandle, buffer, bytes ) ;
        else 
            break;
    }
    close ( inhandle ) ; 
    close ( outhandle ) ; 
    return 0;
}