#include <stdio.h>

#define LINES_PER_PAGE 50

void printFile(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char line[1000];
    int lineCount = 0;
    int pageCount = 1;

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); // Simulate printing by displaying lines on the screen
        lineCount++;

        if (lineCount >= LINES_PER_PAGE) {
            printf("\n--- Page %d ---\n", pageCount);
            printf("Please change the paper. Press Enter to continue...\n");
            getchar(); // Wait for user input before continuing to print

            lineCount = 0;
            pageCount++;
        }
    }

    fclose(file);
}

int main() {
    const char *inputFileName = "06_source_1.txt"; // Replace with your input file name

    printf("Printing file '%s'...\n", inputFileName);
    printFile(inputFileName);

    return 0;
}
