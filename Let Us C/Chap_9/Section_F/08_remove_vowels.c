#include <stdio.h>
#include <string.h>

int main() {
    char sentence[81]; // +1 for null terminator
    printf("Enter your statement: ");
    fgets(sentence, sizeof(sentence), stdin);

    char vowels[] = "aeiouAEIOU";
    int i = 0 ;

    while (sentence[i] != '\0') {
        for (int j = 0; vowels[j] != '\0'; j++) {
            if (sentence[i] == vowels[j]) {
                sentence[i] = sentence[i + 1] ; // Replace with next character
                sentence[i + 1] = ' ' ; // Remove next one
                break;
            }
        }
        i++;
    }

    sentence[strlen(sentence) - 1] = '\0' ;
    printf("After removing vowels(with spaces): %s\n", sentence);
    return 0;
}

// Another Way:

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void removeVowels(char *sentence) {
//     int i, j = 0;

//     for (i = 0; sentence[i] != '\0'; i++) {
//         if (!(tolower(sentence[i]) == 'a' || tolower(sentence[i]) == 'e' ||
//               tolower(sentence[i]) == 'i' || tolower(sentence[i]) == 'o' ||
//               tolower(sentence[i]) == 'u')) {
//             sentence[j++] = sentence[i];
//         }
//     }
//     sentence[j] = '\0';
// }

// int main() {
//     char sentence[81]; // Maximum sentence length of 80 characters + 1 for null terminator

//     printf("Enter a sentence (max 80 characters): ");
//     fgets(sentence, sizeof(sentence), stdin);

//     // Remove the newline character if present
//     if (strlen(sentence) > 0 && sentence[strlen(sentence) - 1] == '\n') {
//         sentence[strlen(sentence) - 1] = '\0';
//     }

//     removeVowels(sentence);

//     printf("After removing vowels: %s\n", sentence);

//     return 0;
// }