#include<stdio.h>
#include<string.h>

struct gospel { 
        int  num ; 
        char  mess1[50] ; 
        char  mess2[50] ; 
        } m1 =  { 2, "If you are driven by success", 
                "make sure that it is a quality drive" 
            } ; 

int main(){
//     struct gospel { 
//         int  num ; 
//         char  mess1[50] ; 
//         char  mess2[50] ; 
//         } m ; 
//     m.num = 1 ; 
//     strcpy ( m.mess1, "If all that you have is hammer" ) ; 
//     strcpy ( m.mess2, "Everything looks like a nail" ) ; 
//     /* assume that the strucure is located at address 1004 */ 
//     printf ( "\n%u %u %u %u", &m ,&m.num, m.mess1, m.mess2 ) ;  
// // &m and &m.num will have same address as structrue is staring from it. 
// // 1st integer and string is separated by 4 bytes but next two strings  are separated by 50 bytes as 1D-char string is given size of 50


    struct gospel  m2, m3 ; // m1 structure is declared globally so can use it in any function
    m2 = m1 ; // assigns whole m1 to m2
    m3 = m2 ; 
    printf ( "\n%d %s %s", m1.num, m2.mess1, m3.mess2 ) ;
// Will print 2 "If you are"(string) and "make sure"(string) 
    return 0;
}