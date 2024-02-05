#include<stdio.h>
#include<math.h>

int main(){

    printf("Prime numbers b/w 1-300 are: ");
    for(int i=1; i<=300; i++){
        int isPrime = 1; // Initially considered as Prime
        for(int j=2; j <= sqrt(i); j++){ // As we don't need to check till number as one factor is less and other is greater like 72 = 19 * 4 so just check till square root of i like sqrt(49) i.e. 7 divides it so break (Better practice to decrease ruun-time and memory)
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime) // i.e. if its True(1)
            printf("%d ", i);
    }
    return 0;
}

// printf("%d", i); // In else this will print all i's upto which indivisible so WRONG Method