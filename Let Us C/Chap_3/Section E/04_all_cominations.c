#include <stdio.h>

int main() {
    int n = 3; // The number of elements (1, 2, 3) 
    // Number of digits = Number of loops for combination

    for (int i = 1; i <= n; i++) { // For Left number
        for (int j = 1; j <= n; j++) { // For Middle number
            for (int k = 1; k <= n; k++) { // For Right-Number
                printf("%d %d %d\n", i, j, k);
            }
        }
    }

    return 0;
}
