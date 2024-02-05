#include<stdio.h>

#pragma pack(1) 
struct book {  
        char  name ; 
        float  price ; 
        int  pages ; 
        char  name_1 ; 
    } ; 
int main(){
    #pragma pack( )
    struct book  b1 = { 'B', 130.00, 550, 'Z' }; ; 
    printf ( "\nAddress of name = %u", &b1.name ) ;   
    printf ( "\nAddress of price = %u", &b1.price ) ; 
    printf ( "\nAddress of pages = %u", &b1.pages ) ;
    printf ( "\nAddress of name = %u", &b1.name_1 ) ; 
//  The architecture of this microprocessor is such that it is able to fetch the data that is present at an address, which is a multiple of four much faster than the data present at any other address. Hence the VC++ compiler aligns every element of a structure at an address that is multiple of four. That’s the reason why there were three holes created between the char and the float.  
// All are stored in same memory range i.e. of 4 bytes.  
    return 0;
}