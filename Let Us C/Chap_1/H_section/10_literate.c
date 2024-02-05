#include<stdio.h>
#include <math.h>

int main(){
    int total = 80000;
    int men = 0.52 * total;
    int liter = 0.48 * total;
    int liter_men = 0.35 * total;
    int illiter_men = men - liter_men;
    int illiter_women = total - men - (liter-liter_men); // So for total women substracted total from men and literate women = toal literacy rate - lieratre men OR (0.48 - 0.35) * total Now substract it from total women (0.48 * total) - (0.13 * total)
    printf("Illiteratre Men = %d\n",illiter_men);
    printf("Illiteratre Women = %d\n",illiter_women);
    return 0;
}
