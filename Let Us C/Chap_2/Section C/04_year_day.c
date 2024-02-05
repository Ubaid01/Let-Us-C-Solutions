#include <stdio.h>

int main() {
    int year, month = 1, day = 1; // d and m = 1 as we required of 1st January 

    // Input the year from the user
    printf("Enter the year that you want to know the day of (of 1st January) : ");
    scanf("%d", &year);

    // Zeller's Congruence formula
    // More corrected way
    if (month < 3) {
        month += 12;
        year--; //  -1 to get proper year for century
    }


    // Zeller's Congruence formula
    int h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // Determine the day of the week
    char days[7][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    // Output the result
    printf("On 1st January %d, it is a %s.\n", ++year, days[h]);

    return 0;
    // int k = year % 100; // K last 2 digits of a year
    // int j = year / 100; // J is the Century
    // int h = (day +  13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j ) % 7;//  (Accurate Formula)
}

// Other-Method
// #include <stdio.h>
// #include <math.h>
// #include <string.h>

// int main()

// {

// int num,year;
// char day[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

// printf("Enter the year that you want to know the day of (of 1st January) : ");
// scanf("%d",&year);

// num=(year-1900)+floor((year-1900)/4); // floor() :-used to convert a floating point number to its immediately smaller integer 
// printf("\nThe day on 1st January %d was : ", year);

// if(year%4==0)
// printf("%s\n",day[num%7-1]);
// else
// printf("%s\n",day[num%7]);

// return 0;

// }