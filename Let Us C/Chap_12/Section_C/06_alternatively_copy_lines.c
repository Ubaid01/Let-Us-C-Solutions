#include <stdio.h>

int main() {
    FILE *file1, *file2, *targetFile;
    char *file1Name = "06_source_1.txt" , *file2Name = "06_source_2.txt";
    char  targetFileName[] = "06_target.txt";
    char line[1000];

    file1 = fopen(file1Name, "r");
    file2 = fopen(file2Name, "r");
    targetFile = fopen(targetFileName, "w");

    if (file1 == NULL || file2 == NULL || targetFile == NULL) {
        printf("Unable to open files.\n");
        return 1;
    }

    // Merge lines alternately from file1 and file2 into targetFile
    while (1) {
        if (fgets(line, sizeof(line), file1) != NULL) {
            fputs(line, targetFile);
        }
        // printf("%s", line); // To check
        if (fgets(line, sizeof(line), file2) != NULL) {
            fputs(line, targetFile);
        }

        if (feof(file1) && feof(file2)) {
            break; // Both files reached EOF
        }
    }

    printf("Merged lines from '%s' and '%s' into '%s' successfully.\n", file1Name, file2Name, targetFileName);

    fclose(file1);
    fclose(file2);
    fclose(targetFile);

    return 0;
}
