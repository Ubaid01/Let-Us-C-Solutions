#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeWord(char *str, const char *word ) {
    int i = 0 , count = 0 , found = 0 ;
    int len = strlen(word);  // Calculate the length of the word
    while(str[i] != '\0') {
        int k = 0 ;
        while (str[i] == word[k]) {
            i++;
            k++;
        }
        if (k == len) {
            found = 1;  // Word found in the string
        } else {
            str[count++] = str[i++];
        }
    }
    str[count] = '\0' ;

}

// void removeWord(char *str, const char *word) {
//     int i, j, k, len, wordLen, found;

//     len = strlen(str);
//     wordLen = strlen(word);

//     for (i = 0; i < len; ++i) {
//         found = 1;
//         for (j = 0, k = i; j < wordLen; ++j, ++k) {
//             if (tolower( str[k] ) != tolower( word[j] ) ) {
//                 found = 0;
//                 break;
//             }
//         }

//         if (found == 1 && (str[i + wordLen] == ' ' || str[i + wordLen] == '\0')) { // Replace spaces and copy without word 
//             for (j = i; j <= len - wordLen; ++j) {
//                 str[j] = str[j + wordLen + 1];
//             }
//             len -= wordLen + 1; // Total length minus that word's
//         }
//     }
//     str[len] = '\0';
// }

int main() {
    char line[200], word[50] ;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);
    line[ strcspn(line, "\n") ] = '\0';

    printf("Enter the word to be removed: ") ;
    fgets(word, sizeof(word), stdin);
    word[ strcspn(word, "\n") ] = '\0';
    
    removeWord(line, word);

    printf("After removing '%s': %s\n", word, line);

    return 0;
}
