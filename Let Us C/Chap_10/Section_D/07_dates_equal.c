#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int compareDates(struct Date date1, struct Date date2) {
    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) 
        return 1; // Dates are equal
    else 
        return 0; // Dates are unequal
}

int main() {
    struct Date date1, date2;

    printf("Enter first date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    if (compareDates(date1, date2)) 
        printf("Equal\n");
    else 
        printf("Unequal\n");
    
    return 0;
}
