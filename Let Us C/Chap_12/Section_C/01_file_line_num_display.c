#include <stdio.h>

int main() {
    FILE *file;
    char filename[50];
    char line[100];
    int lineNumber = 1;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Contents of the file '%s' with line numbers:\n", filename);

    // Read lines from the file and display with line numbers
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%d: %s", lineNumber, line);
        lineNumber++;
    }

    fclose(file);
    return 0;
}
