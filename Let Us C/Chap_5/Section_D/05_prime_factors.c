#include<stdio.h>
#include<math.h>

int count = 0 ; // Global Varable

void primeFactors( int n , int prime[] ){
    
// According to question (Taking LCM factors)
    int i = 2 ; // Start checking from 2
    while( n != 1 ){ // Till completely divisible i.e. n becomes 1
        while(n % i == 0) {
            prime[count] = i;
            count++;
            n = n / i; // Now move to next number obtained by dividing
        }
        i++ ; //Increment when not divisible
    }

        // For single times each prime factor
        
// int i, j , isPrime = 1 ; // Set isPrime to True for every iteration
        // for(int i = 2; i <= n; i++){ 
        // if( n % i == 0){
        //     for(j = 2; j < i ; j++){
        //         if( i % j == 0 ){
        //             isPrime = 0 ; // Turn it off and exit loop
        //             break ;
        //         }
        //     }
        //     if( isPrime ){
        //         prime[count] = i ;
        //         count++ ;
        //     }
        // }
    // }
}

int main(){
    int n ;
    printf("Enter your +ve number: ") ;
    scanf("%d", &n) ;

    if( n <= 0 ){
        printf("Invalid Number!\nNot designed for -ve numbers handling.");
        return 1 ;
    }
    int arr[100] ; // Pre-initialized whole but will be used accordingly

    primeFactors( n , arr ) ;

    if(count == 0){
        printf("(Prime-Number) %d prime factors are : 1, %d", n, n) ;
    }
    else{
        printf("(Composite-Number) %d Prime Factors are : ", n ) ;
        for(int i = 0; i < count; i++){
            if( i != count - 1 )
                printf("%d, ", arr[i] ) ;
            else
                printf("%d.", arr[i] ) ;

        }
    }

    return 0;
}