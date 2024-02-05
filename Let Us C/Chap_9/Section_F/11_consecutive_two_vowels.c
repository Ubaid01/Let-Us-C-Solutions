#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countSuccessiveVowels(char *text) {
    int count = 0;

    while (*text != '\0') {
        if (isVowel(*text) && isVowel(*(text + 1))) {
            printf("%c%c ", *text, *(text + 1));
            count++;
        }
        text++;
    }

    printf("\nTotal occurrences of two successive vowels: %d\n", count);
}

int main() {
    // char *sentence = "Pleases read this application and give me gratuity" ; 
    char sentence[100]; // Define an array to store the input
    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline character if present
    printf("Occurrences of any two successive vowels: ");
    countSuccessiveVowels(sentence);

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>

// int isVowel(char c) {
//     c = tolower(c);
//     return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
// }

// void countSuccessiveVowels(char **text, int size) {
//     int count = 0;

//     for (int i = 0; i < size; i++) {
//         char *current = text[i];
//         while (*current != '\0' && *(current + 1) != '\0') {
//             if (isVowel(*current) && isVowel(*(current + 1))) {
//                 printf("%c%c ", *current, *(current + 1));
//                 count++;
//             }
//             current++;
//         }
//     }

//     printf("\nTotal occurrences of two successive vowels: %d\n", count);
// }

// int main() {
//     int n = 3; // Number of strings in the array
//     char *sentence[] = {"Pleases read this application and give me gratuity",
//                         "Test with another sentence",
//                         "Example of more treat"}; // String array

//     printf("Occurrences of any two successive vowels: ");
//     countSuccessiveVowels(sentence, n);

//     return 0;
// }
