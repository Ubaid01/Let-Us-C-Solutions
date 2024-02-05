#include<stdio.h>
#include<stdlib.h>

long long fact(int n);
int checkPrime(int n);
void checkOddEven(int n);

int main(){
    int choice, a, b, c; 
    while ( 1 ) 
    { 
        printf ( "\n1. Factorial" ) ; 
        printf ( "\n2. Prime" ) ; 
        printf ( "\n3. Odd/Even" ) ; 
        printf ( "\n4. Exit" ) ; 
        printf ( "\nYour choice? " ) ; 
        scanf ( "%d", &choice ) ; 
        switch ( choice ) 
        { 
        case 1 : 
            printf("Enter your number: ");
            scanf("%d", &a);
            printf("Factorial of %d = %lld\n", a, fact(a));
            break ; 
        case 2 : 
            printf("Enter test number: ");
            scanf("%d", &b);
            checkPrime(b);
            break ; 
        case 3 : 
            printf("Enter test number: ");
            scanf("%d", &c);
            checkOddEven(c);
            break ; 
        case 4 : 
            exit(0) ; 
        } 
        } 
    return 0;
}

long long fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else 
        return n * fact(n-1);
}

int checkPrime(int n){
    int isPrime = 1; // Flag as number started as being prime 
    for(int i = 2; i < n; i++ ){
        if(n % i == 0)
            isPrime = 0;
            break;
    }

    if(isPrime)
        return printf("%d is a Prime Number.\n", n); // Can use this OR below return method to print also
    else 
        return printf("%d is  NOT a Prime Number.\n", n);
}

void checkOddEven(int n){
    if(n % 2 == 0)
        printf("%d is an EVEN number.\n", n);
    else
        printf("%d is a ODD number.\n", n);
}