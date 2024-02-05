#include<stdio.h>

int main(){

    // int i = 4, z = 12 ; 
    // if ( i = 5 || z > 50 ) // As we have used the assignment operator so i=5 condition will always be true and cause of OR-operator if-block will run
    //     printf ( "\nDean of students affairs" ) ; 
    // else 
    //     printf ( "\nDosa" ) ; 

    // int i = 4, z = 12 ;
    // if ( i = 5 && z > 5 ) // Since the both conditions of if-block are True so it will execute 
    //     printf ( "\nLet us C" ) ; 
    // else 
    //     printf ( "\nWish C was free !" ) ; 


    // int i = 4, j = -1, k = 0, w, x, y, z ; // C-compiletr treats All non-zero values as True, and zero values to False. With negative numbers being non-zero, they are converted to True.
    // w = i || j || k ; // Here 1 || 1 || 0 => will evaluate 1
    // x = i && j && k ; // Here 1 &&1 && 0 => will evaluate 0 as all are not True
    // y = i || j && k ; // Here 1 || 1 && 0 => as && has high priority than || so first evaluate j && k which gives 0 then 1 || 0 => 1
    // z = i && j || k ; // Here 1 && 1 || 0 => First 1 && 1 gives 1 then 1 || 1 also gives 1
    // printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ; 

 
    // int i = 4, j = -1, k = 0, y, z ; 
    // y = i + 5 && j + 1 || k + 2 ; // First 4+5 && -1+1 i.e 1 && 0 will give 0 and 0 || 0+2 => 0 || 1 give 1 
    // z = i + 5 || j + 1 && k + 2 ;  // First -1+1 && 0+2 i.e. 0 && 1 gives 0 which then with 1 || 0 gives 1
    // printf ( "\ny = %d z = %d", y, z ) ; 


    // int i = -3, j = 3 ; // Both are True (1)
    // if ( !i + !j * 1 ) // Not(!) will convert both to logical 0(False) so 0 + 0 * 1 = 0 which is False so it means if-block condition is Flase so it will not execute
    //     printf ( "\nMassaro" ) ; 
    // else 
    //     printf ( "\nBennarivo" ) ; 

    //  int a = 40 ; 
    // if ( a > 40 && a < 45 ) // Since a==40 so this condition is False and else-block will execute
    //     printf ( "a is greater than 40 and less than 45" ) ;
    // else 
    //     printf ( "%d", a ) ; 


    // int p = 8, q = 20 ; 
    // if ( p == 5 && q > 5 ) // As p==5 is False so will print wlse-block
    //      printf ( "\nWhy not C" ) ; 
    // else 
    //     printf ( "\nDefinitely C !" ) ; 


    // int i = -1, j = 1, k ,l ; 
    // k = i && j ; // 1 && 1 => 1
    // l = i || j ; // 1 || 1 => 1
    // printf ( "%d %d", l, j ) ; 


    // int x = 20 , y = 40 , z = 45 ; 
    // if ( x > y && x > z ) 
    //     printf( "x is big" ) ; 
    // else if ( y > x && y > z ) 
    //     printf( "y is big" ) ; 
    // else if ( z > x && z > y ) // As this condiotion is True so print it 
    //     printf( "z is big" ) ; 

    // int i = -1, j = 1, k ,l ; 
    // k = !i && j ; // 0 && 1 => 0  as the !-logical of i(True) will be False
    // l = !i || j ; // 0 || 1 => 1
    // printf ( "%d %d", i, j ) ; // (Mistake) as my-mind was like previous questions so forget to see print variables


    int j = 4, k ; 
    k = !5 || j ; // not 5 i.e. !(True) is False so 0 || 1 => 1
    printf ( "\nk = %d", k ) ; 

    return 0;
}