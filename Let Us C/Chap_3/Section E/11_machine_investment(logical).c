#include<stdio.h>

int main(){
    int year=0, invest, alternate;

    while(alternate > invest)
    {
        year++;  //year = year + 1 (Before calaculating increase year)

        // yearly produce income form alternate solution (may be installements)
        // 12 % of 1000 = 120
        alternate = year * 120;

        // yearly produced income from machine
        // 1000 per year - [6000(machine cost) - 2000(salvage or scrap value of machine)]
        // 1000 * year - [6000-2000]
         invest = (1000*year) - 4000;

    }
    printf("The Life of Machine: %d years", year);
    return 0;
}