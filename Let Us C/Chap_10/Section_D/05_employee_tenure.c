#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 20
#define NAME_LENGTH 50

// Structure to store information about employees
struct Employee {
    int employeeCode;
    char name[NAME_LENGTH];
    char dateOfJoining[11]; // Date format: DD/MM/YYYY (e.g., 01/01/2022)
};

// Function to calculate tenure in years
int calculateTenure(const char *currentDate, const char *joinDate) {
    int currentYear, joinYear;
    sscanf(currentDate, "%*d/%*d/%d", &currentYear); // Only the num without pointers will be stored.
    sscanf(joinDate, "%*d/%*d/%d", &joinYear);
    return currentYear - joinYear;
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];

    // For demonstration, some sample data is initialized
    employees[0] = (struct Employee){1001, "Employee1", "01/01/2019"};
    employees[1] = (struct Employee){1002, "Employee2", "15/06/2010"};
    employees[2] = (struct Employee){1006, "Employee3", "15/07/2021"};
    employees[3] = (struct Employee){1010, "Employee4", "19/06/2017"};
    employees[4] = (struct Employee){1000, "Employee5", "03/12/2016"};

    int numEmployees = 5; // Number of employees in the array

    char currentDate[11];
    printf("Enter current date (DD/MM/YYYY): ");
    scanf("%s", currentDate);

    // Display names of employees with tenure 3 or more than 3 years
    printf("\nEmployees with tenure of 3 or more than 3 years:\n");
    for (int i = 0; i < numEmployees; i++) {
        int tenure = calculateTenure(currentDate, employees[i].dateOfJoining);
        if (tenure >= 3) {
            printf("Name: %s\n", employees[i].name);
        }
    }

    return 0;
}
