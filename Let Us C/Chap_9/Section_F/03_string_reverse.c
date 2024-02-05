#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xstrrev(char *str) {  // This not works on pointer to string constant array
    int len = strlen(str);
    for (int i = 0; i < len / 2 ; i++ ) { // Replace first and last char till middle.
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

void xstrrev_const(const char *str) {
    // Determine the length of the string
    size_t len = strlen(str);

    // Allocate memory for a copy of the string (+1 for null terminator)
    char *copy = (char *)malloc((len + 1) * sizeof(char));
    if (copy == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Copy the constant string to the modifiable memory
    strcpy(copy, str);

    // Reverse the copied string
    for (size_t i = 0, j = len - 1; i < j; i++, j--) {
        char temp = copy[i];
        copy[i] = copy[j];
        copy[j] = temp;
    }

    // Print the reversed string
    // printf("Original String: %s\n", str);
    printf("%s\n", copy);

    // Free the allocated memory
    free(copy);
}

int main() {
    char s[][60] = {
        "To err is human...",
        "But to really mess things up...",
        "One needs to know C!!"
    };

    printf("Original String: \n") ;
    for (int i = 0; i < 3; i++) {
        printf("%s\n", s[i]);
    }
    // printf("Reversed String: \n") ;
    // for(int i = 0 ; i < 3; i++ ) {
    //     xstrrev(s[i]);
    //     printf("%s\n", s[i]);
    // }

    printf("\nReversed String: \n") ;
    for (int i = 0; i < 3; i++) {
        xstrrev_const(s[i]);
    }
    return 0;
}
