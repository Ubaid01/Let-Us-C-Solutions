#include <stdio.h>
#include <string.h>

void printReverseWord(const char* filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    char word[100];

    while (fscanf(file, "%s", word) == 1) {
        int len = strlen(word);

        // Print each word in reverse order
        for (int i = len - 1; i >= 0; i--) {
            printf("%c", word[i]);
        }
        printf(" ");
    }

    fclose(file);
}

int main() {
    const char* inputFileName = "06_source_1.txt"; // Replace with your input file name

    printf("Input: ");
    printReverseWord(inputFileName);

    printf("\n");

    return 0;
}
