#include <stdio.h>
#include <stdlib.h>

struct date {
    int d, m, y;
};

struct employee {
    int empcode;
    char empname[20];
    struct date join_date;
    float salary;
};

int compareDates(const void *a, const void *b) {
    struct employee *emp1 = (struct employee *)a;
    struct employee *emp2 = (struct employee *)b;

    if (emp1->join_date.y != emp2->join_date.y) {
        return emp1->join_date.y - emp2->join_date.y;
    } else if (emp1->join_date.m != emp2->join_date.m) {
        return emp1->join_date.m - emp2->join_date.m;
    } else {
        return emp1->join_date.d - emp2->join_date.d;
    }
}

int main() {
    FILE *sourceFile, *targetFile;
    struct employee employees[100];

    sourceFile = fopen("employee_records.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening employee_records.txt file.\n");
        return 1;
    }

    int i = 0;
    while (fscanf(sourceFile, "%d %s %d %d %d %f",
                  &employees[i].empcode, employees[i].empname,
                  &employees[i].join_date.d, &employees[i].join_date.m, &employees[i].join_date.y,
                  &employees[i].salary) == 6) {
        i++;
    }
    fclose(sourceFile);

    qsort(employees, i, sizeof(struct employee), compareDates);

    targetFile = fopen("sorted_employee_records.txt", "w");
    if (targetFile == NULL) {
        printf("Error creating sorted_employee_records.txt file.\n");
        return 1;
    }

    for (int j = 0; j < i; j++) {
        fprintf(targetFile, "%d %s %d %d %d %.2f\n",
                employees[j].empcode, employees[j].empname,
                employees[j].join_date.d, employees[j].join_date.m, employees[j].join_date.y,
                employees[j].salary);
    }

    fclose(targetFile);

    printf("Records sorted based on join date and written to sorted_employee_records.txt.\n");

    return 0;
}
