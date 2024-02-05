#include<stdio.h>

int main(){
    FILE  *fs, *ft ; 
    int ch ; 
    fs = fopen ( "pr1.exe", "rb" ) ; 
    if ( fs == NULL ) { 
        puts ( "Cannot open source file" ) ; 
        return 1 ; 
    } 

    ft = fopen ( "newpr1.exe", "wb" ) ; 
    if ( ft == NULL ) { 
        puts ( "Cannot open target file" ) ; 
        fclose ( fs ) ; 
        return 1 ; 
    } 

    while ( 1 ) { 
        ch = fgetc ( fs ) ; 
        if ( ch == EOF ) 
            break;
        else 
            fputc ( ch, ft ) ; 
    } 

    fclose ( fs ) ; 
    fclose ( ft ) ;    
    return 0;
}