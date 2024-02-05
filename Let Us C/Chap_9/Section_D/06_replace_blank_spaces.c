#include <stdio.h>
#include <stdbool.h>

void removeExtraSpaces(char *str) {
    int i, j;
    bool spaceFound = false;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') { // This used to pass on if space encountered
            if (!spaceFound) { // Apply the previous index single space and set space true
                str[j++] = str[i];
                spaceFound = true;
            }
        } else {
            str[j++] = str[i];
            spaceFound = false; // If no space found for consecutive space so set spaceFound to false
        }
    }
    str[j] = '\0';
}

// Another My Way
// void removeExtraSpaces(char *str) {
//     int j = 0 ;
//     for(int i = 0 ; str[i] != '\0' ; i++) {
//         if(str[i] == ' ' && str[i+1] == ' ' ) 
//             continue ;
//         else 
//             str[j++] = str[i] ;
//     }
//     str[j] = '\0' ;
// }

int main() {
    char str[] = "Grim      return        to   the        planet       of               apes!!";
    
    printf("Original string: %s\n", str);
    
    removeExtraSpaces(str);
    
    printf("Modified string: %s\n", str);

    return 0;
}
