#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

//Defines gotoxy() for new C compilers. 
void gotoxy(short x, short y) { 
    COORD pos = {x, y}; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); 
} 

int main(){
    FILE  *fp, *ft ; 
    char  another, choice ;  
    struct emp  { 
        char  name[40] ; 
        int  age ; 
        double  bs ; 
    } ; 
    struct emp  e ; 
    char  empname[40] ; 
    long int  recsize ; 
    
    fp = fopen ( "EMP.dat", "rb+" ) ; 
    
    if ( fp == NULL ) { 
        fp = fopen ( "EMP.dat", "wb+" ) ; 
    
        if ( fp == NULL ) { 
            puts ( "Cannot open file" ) ; 
            exit(1) ; 
        } 
    } 
    
    recsize = sizeof ( e ) ; 
    
    while ( 1 ) { 
    system("cls") ; 
    
    gotoxy ( 30, 10 ) ; 
    printf ( "1. Add Records " ) ; 
    gotoxy ( 30, 12 ) ; 
    printf ( "2. List Records " ) ; 
    gotoxy ( 30, 14 ) ; 
    printf ( "3. Modify Records " ) ; 
    gotoxy ( 30, 16 ) ; 
    printf ( "4. Delete Records " ) ; 
    gotoxy ( 30, 18 ) ; 
    printf ( "0. Exit " ) ; 
    gotoxy ( 35, 15 ) ; 
    printf ( "\nYour choice: " ) ; 
    
    fflush ( stdin ) ; 
    choice = getche( ) ; 
    switch ( choice ) 
    { 
    case '1' : 
    
        fseek ( fp, 0 , SEEK_END ) ; 
        another = 'Y' ; 
    
        while ( another == 'Y' ) { 
            printf ( "\nEnter name, age and basic sal. " ) ; 
            scanf ( "%s %d %lf", e.name, &e.age, &e.bs ) ; 
            fwrite ( &e, recsize, 1, fp ) ;  
            printf ( "\nAdd another Record (Y/N) " ) ; 
            fflush ( stdin ) ; 
            another = getche( ) ; 
        } 
        break ; 
        
    case '2' : 
    
        rewind ( fp ) ; 
    
        while ( fread ( &e, recsize, 1, fp ) == 1 ) 
            printf ( "\n%s %d %lf", e.name, e.age, e.bs ) ;  
        getch() ;
        break ; 
    
    case '3' : 
    
        another = 'Y' ; 
        while ( another == 'Y' ) { 
            printf ( "\nEnter name of employee to modify " ) ; 
            scanf ( "%s", empname ) ; 
        
            rewind ( fp ) ; 
            while ( fread ( &e, recsize, 1, fp ) == 1 ) {    
                if ( strcmp ( e.name, empname ) == 0 ) { 
                printf ( "\nEnter new name, age & bs" ) ; 
                scanf ( "%s %d %lf", e.name, &e.age, 
                    &e.bs ) ; 
                fseek ( fp, - recsize, SEEK_CUR ) ; 
// The fseek( ) function lets us move the pointer from one record to another. Here it moves the pointer to the previous record from its current position.
// Here, -recsize moves the pointer back by recsize bytes from the current position. SEEK_CUR is a macro defined in "stdio.h"
//  SEEK_END means move the pointer from the end of the file, SEEK_CUR means move the pointer with reference to its current position and SEEK_SET means move the pointer with reference to the beginning of the file. 
// If we wish to know where the pointer is positioned right now, we can use the function ftell( ). It returns this position as a long int which is an offset from the beginning of the file.  
                fwrite ( &e, recsize, 1, fp ) ;  
                break ;  
            }    
        } 
    
        printf ( "\nModify another Record (Y/N) " ) ; 
        fflush ( stdin ) ; 
        another = getche( ) ; 
        } 
    
        break ; 
        
    case '4' : 
    
        another = 'Y' ; 
        while ( another == 'Y' ) { 
            printf ( "\nEnter name of employee to delete " ) ; 
            scanf ( "%s", empname ) ; 
        
            ft = fopen ( "TEMP.dat", "wb" ) ; 
        
            rewind ( fp ) ; 
// The rewind( ) function places the pointer to the beginning of the file, irrespective of where it is present right now. 
            while ( fread ( &e, recsize, 1, fp ) == 1 ) { 
                if ( strcmp ( e.name, empname ) != 0 ) 
                    fwrite ( &e, recsize, 1, ft ) ;  
            } 
        
            fclose ( fp ) ; 
            fclose ( ft ) ; 
            remove ( "EMP.dat" ) ; 
            rename ( "TEMP.dat", "EMP.dat" ) ; 
            fp = fopen ( "EMP.dat", "rb+" ) ; 
            printf ( "Delete another Record (Y/N) " ) ; 
            fflush ( stdin ) ; 
            another = getche( ) ; 
        }
        break ;

        case '0' : 
            fclose ( fp ) ; 
            exit(1) ;
        }
    }    
    return 0;
}