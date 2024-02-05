#include <stdio.h>
#include <conio.h>

// Function to find the day of the week for a given date
int dayOfWeek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

// Function to print the calendar for a given month and year
void printCalendar(int year, int month) {
    int daysInMonth, currentDay, i;

    // Array to store the names of months
    char *months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Array to store the number of days in each month
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        days[1] = 29;

    printf("\n\t  %s %d\n", months[month - 1], year);
    printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

    // Get the day of the week for the first day of the month
    currentDay = dayOfWeek(1, month, year);

    // Printing spaces for days before the first day of the month
    for (i = 0; i < currentDay; i++)
        printf("     ");

    daysInMonth = days[month - 1];

    // Printing the days of the month
    for (i = 1; i <= daysInMonth; i++) {
        printf("%-5d", i);
        if (++currentDay > 6) {
            currentDay = 0;
            printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int year, month;

    printf("Enter year and month (YYYY MM): ");
    scanf("%d %d", &year, &month);

    int ch;

    while (1) {
        printCalendar(year, month);

        ch = getch(); // Get the arrow key pressed

        if (ch == 27) // Check for Escape key
            break;

        switch (ch) {
            case 72: // Up Arrow
                year++;
                break;
            case 80: // Down Arrow
                year--;
                break;
            case 77: // Right Arrow
                month++;
                if (month > 12) {
                    month = 1;
                    year++;
                }
                break;
            case 75: // Left Arrow
                month--;
                if (month < 1) {
                    month = 12;
                    year--;
                }
                break;
        }
    }


    return 0;
}
