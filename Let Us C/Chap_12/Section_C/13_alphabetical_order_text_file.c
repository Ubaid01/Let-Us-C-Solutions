#include <stdio.h>
#include <string.h>

#define MAX_WORDS 25
#define MAX_LENGTH 50

void sortWords(char words[][MAX_LENGTH], int count) {
    char temp[MAX_LENGTH];

// Using bubble sort to check all strings
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    int count = 0;

    FILE *file = fopen("06_source_1.txt", "r");
    if (file == NULL) {
        printf("Error opening word_list.txt file.\n");
        return 1;
    }

    // Read words until ZZZZZZ or maximum words are reached
    while (fscanf(file, "%s", words[count]) == 1 && strcmp(words[count], "ZZZZZZ") != 0 && count < MAX_WORDS) {
        count++;
    }

    fclose(file);

    // Sort the words in alphabetical order
    sortWords(words, count);

    // Display total number of words
    printf("Total Number of words in the list is %d\n", count);

    // Display alphabetical listing of words
    printf("Alphabetical listing of words is:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
