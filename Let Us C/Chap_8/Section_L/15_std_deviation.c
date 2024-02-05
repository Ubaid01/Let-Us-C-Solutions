#include<stdio.h>
#include<math.h>

int main(){
    int arr[15] = { -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2 } ;
    double avg = 0 , std_dev = 0 ;

    for(int i = 0; i < 15; i++) {
        avg += arr[i] ;
    }

    avg = avg / 15 ;

    for(int i = 0; i < 15; i++) {
        std_dev += pow( arr[i] - avg , 2 ) ;
    }

    printf("Standard-Deviation of given set = %.2lf \n", sqrt( std_dev / 15 ) ) ;

    return 0;
}