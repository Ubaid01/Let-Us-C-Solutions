#include<stdio.h>

int binaryFunc(int n){ 
    int binary = 0, base = 1; // Presetted to 0 cause iniially ony 1 decimal place so 0 * 10 = 0
    while (n > 0) {
        int digit = n % 2;
        binary += digit * base;
        n /= 2;
        base *= 10;
    }
    return binary;
}
int binaryRec(int n){
    if(n == 0) // If 0 entered so 0 will be binary conversion
        return 0 ;
    else{
        return   (n % 2)  + 10 * binaryRec( n / 2 ) ; // Muliply the already stored number to increase its decimal place and then add don't multiply wih n % 2
    }
}

int main(){
    int num;
    printf("Enter your +ve Number: ");
    scanf("%d", &num);

    if(num  <  0){
        printf("Invalid number.\n\t Try Again!\n") ;
        return 1 ;
    }

    printf("Decimal To Binary Using Recursion: %d", binaryRec(num) );
    printf("\nWithout Recursion: %d", binaryFunc(num) );
    return 0;
}