#include <stdio.h>

int main() {
    int marks[5]; // An array to store marks in five subjects
    int maxMarks = 100; // Maximum marks for each subject
    int totalMarks = 0;

    printf("Enter the marks obtained in five subjects:\n");
    
    // Input marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    float percentage = (float)totalMarks / (5 * maxMarks) * 100; // OR 5.0

    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage Marks: %.2f%%\n", percentage);

    return 0;
}
