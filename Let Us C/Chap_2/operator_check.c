#include<stdio.h>

int main(){
    int a = 10, b = 12, c = 0;
    printf("%d \n", a != 6 && b > 5); // 0 (As a is not 6 and b is also greater than 5)
    printf("%d \n", a == 9 || b < 3); // 0 (As neither a=9 OR b i.e. 12 is less than 3)
    printf("%d \n", ! ( a < 10 ) ); // 1 (As a is not less than 10 but only equals to so False but !-operator makes whole expression true)
    printf("%d \n",  ! ( a > 5 && c ) ); // (As a is greater than 5 so this condition is True (1) but c=0 which will be treated as False(0) so this is False but !-operator makes whole True)
    printf("%d \n", 5 && c != 8 || !c );

// 5 is a non-zero value, which is treated as true in a boolean context.
// c != 8 is true because c is 0, which is not equal to 8.
// !c is true because the logical NOT of 0 is true(1)
// So 1 && 1 || 1 => will evaluate 1.
    return 0;
}