#include<stdio.h>
#include<math.h>

void Operatorions(int num[], int *sum, double *avg, double *std_deviate){
    for(int i = 0; i < 5; i++){
        * sum += num[i] ;
    }
    
    * avg = *sum / 5.0 ;

    for(int i = 0; i < 5; i++) {
        *std_deviate += pow( num[i] - *avg ,  2.0 )  ; // 1st sum all the values - mean then divide by n - 1 and then take root
    }
    *std_deviate = sqrt( *std_deviate / ( 5.0 - 1 ) ) ; // Calculate standard deviation (Use brackets else it will calculate using operator precedence '/' (divide) 1st)
}

int main(){
    int nums[5] ;
    for(int i = 0; i < 5; i++){
        printf("Enter %d Number: ", i + 1) ;
        scanf("%d", &nums[i] ) ;
    }

    int sum = 0;
    double avg = 1, std_dev = 0 ;
    Operatorions( nums, &sum, &avg, &std_dev ) ; // Using pointers (As told to print in main function)
    printf("Sum = %d\nAverage = %.2lf\nStandard-Deviation = %.2lf", sum, avg, std_dev ) ;
    return 0;
}