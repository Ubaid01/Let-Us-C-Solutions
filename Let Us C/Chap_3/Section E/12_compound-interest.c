#include<stdio.h>
#include<math.h>

int main(){
    double q; // Principal Amount, No.of times interest applied (i.e. quarterly 4, halvely 2), Years can be 2.5
    double p , n, r, a[10]; // Array used to simply store in one variable except of many

    for(int i = 0; i < 10; i++){
        printf("Enter values for set %d (p q n r): ", i + 1);
        scanf("%lf %lf %lf %lf%%", &p, &q, &n, &r);
        r = r / 100;
        a[i] = p * pow( 1 + r/q , n*q); // Made mistake in formula also included p in pow (1+r/q) ^ nt
    }

    // So shows after inputing all sets
    for(int i = 0; i < 10; i++){
        printf("Amount-compounded for %d-set = %.2lfRs\n", i+1, a[i]);
    }
    return 0;
}