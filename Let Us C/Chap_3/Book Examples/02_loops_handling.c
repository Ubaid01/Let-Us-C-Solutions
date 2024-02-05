#include<stdio.h>

int main(){
    int i = 0;
    while(i++ < 5){ // This OR ++i will not print anything if i is not pre initialzied to 0
        printf("%d\n", i); // ++i will first increment and then check condition so will only print till 4
    } // While i++ will print upto 5 despite condition being i<5 as it is first checked and then incremented so 4 will be checked i.e. 4++ < 5 and then ++ so will print 5

    return 0;
}