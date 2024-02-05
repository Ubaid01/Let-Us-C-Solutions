#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
};

// Comparison function for sorting based on names
int compareNames(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return strcmp(studentA->name, studentB->name);
}

int main() {
    FILE *file;
    struct Student students[100]; // Assuming a maximum of 100 records
    int numRecords = 0;

    file = fopen("04_students_record.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Read student records from the file
    while (fscanf(file, "%s %d", students[numRecords].name, &students[numRecords].age) != EOF) {
        numRecords++;
    }

    fclose(file);

    // Sort student records by name
    qsort(students, numRecords, sizeof(struct Student), compareNames);

    // Display sorted student records by name
    printf("Student records sorted by name:\n");
    for (int i = 0; i < numRecords; i++) {
        printf("Name: %s -> Age: %d\n", students[i].name, students[i].age);
    }

    return 0;
}
