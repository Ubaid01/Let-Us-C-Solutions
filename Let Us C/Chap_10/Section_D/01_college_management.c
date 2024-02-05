#include <stdio.h>
#include <conio.h>
#include <string.h>

// Define a structure to represent student data
struct Student {
    char rollNumber[10];
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of students who joined in a particular year
void printStudentsByYear(struct Student students[], int size, int year) {
    printf("Students who joined in year %d:\n", year);
    for (int i = 0; i < size; ++i) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print data of a student based on roll number
void printStudentByRollNumber(struct Student students[], int size, char roll[] ) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if ( strcmp( students[i].rollNumber , roll ) == 0 ) {
            printf("Student details for roll number %s:\n", roll);
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %s\n", students[i].rollNumber);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n\n", students[i].yearOfJoining);
            found = 1;
        }
    }
    if (!found) {
        printf("Student with roll number %d not found.\n", roll);
    }
}

void appendStudentDataToFile(struct Student student) {
    FILE *file = fopen("student_data.txt", "a");
    if (file == NULL) {
        printf("Error opening the file for appending.\n");
        return;
    }

    fprintf(file, "\n%s %s %s %s %d", student.rollNumber, student.name, student.department, student.course, student.yearOfJoining);
    fclose(file);
}

int main() {
    // Maximum 450 students
    struct Student students[450];
    printf("To track from previous record(Press R):\nTo track from user input data(Press E):\n") ;
    char ch = getch() ; 
    int numberOfStudents ;

    // // Sample data initialization
    // students[0] = (struct Student){ "CT_102", "Alice", "Computer Science", "B.Tech", 2020 };
    // students[1] = (struct Student){ "EE_101", "Bob", "Electrical Engineering", "B.E.", 2020 };
    // students[2] = (struct Student){ "ME_103", "Charlie", "Mechanical Engineering", "B.E.", 2021 };
    // students[3] = (struct Student){ "CT_102", "Mathew", "Computer Science", "B.Tech.", 2021 };


    if( ch == 'E' || ch == 'e' ) {
        printf("Enter the number of students: ");
        scanf("%d", &numberOfStudents);
        getchar(); // Consume newline

        for (int i = 0; i < numberOfStudents; ++i) {
            printf("\nEnter details for student %d:\n", i + 1);
            printf("Enter roll number: ");
            fgets(students[i].rollNumber, sizeof(students[i].rollNumber), stdin );
            students[i].rollNumber[strcspn(students[i].rollNumber, "\n")] = '\0';
            printf("Enter name: ");
            fgets(students[i].name, sizeof(students[i].name), stdin );
            students[i].name[strcspn(students[i].name, "\n")] = '\0';   
            printf("Enter department: ");
            fgets(students[i].department, sizeof(students[i].department), stdin );
            students[i].department[strcspn(students[i].department, "\n")] = '\0';
            printf("Enter course(Like B.Tech, B.E): ");
            scanf("%s", &students[i].course);
            printf("Enter year of joining: ");
            scanf("%d", &students[i].yearOfJoining);
            getchar(); // Consume newline
            appendStudentDataToFile( students[i] ) ; // Append whole structure to file
        }
    }

    else if( ch == 'R' || ch == 'r' ) {
        numberOfStudents = 4; // Number of students in the array
        FILE *file = fopen("student_data.txt", "r");
        if (file == NULL) {
            printf("Error opening the file.\n");
            return 1;
        }

        while (fscanf(file, "%s %s %s %s %d",
                    students[numberOfStudents].rollNumber,
                    students[numberOfStudents].name,
                    students[numberOfStudents].department,
                    students[numberOfStudents].course,
                    &students[numberOfStudents].yearOfJoining) != EOF) {
            numberOfStudents++;
        }

        fclose(file);
    }

    // Example usage of functions
    printStudentsByYear(students, numberOfStudents, 2020); // Students who joined in 2020
    printf("\n");
    printStudentByRollNumber(students, numberOfStudents, "CT_102"); // Students with roll number 102

    return 0;
}
