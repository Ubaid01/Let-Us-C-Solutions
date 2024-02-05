#include<stdio.h>
#include<string.h>
#include<ctype.h>  // For tolower function.
#include<stdlib.h> // For memory allocation

int main() {
    int num;
    printf("Enter the number of names you want to arrange: ");
    scanf("%d", &num);
    fflush(stdin);

    char **names = (char **)malloc(num * sizeof(char *));
    for (int i = 0; i < num; i++) {
        names[i] = (char *)malloc(100 * sizeof(char));
        printf("Enter names: ");
        fgets(names[i], 100, stdin);
    }

    // MY logic
    for (int i = 0; i < num - 1; i++) {
        for (int k = i + 1; k < num; k++) {
            int j = 0;
            char *ptr = names[i];
            char *ptr1 = names[k];
            while (ptr[j] != '\0' && ptr1[j] != '\0') {
                if (tolower(ptr[j]) == tolower(ptr1[j])) {
                    j++;
                } 
                else if (tolower(ptr[j]) > tolower(ptr1[j])) {
                    char *str = names[i];
                    names[i] = names[k];
                    names[k] = str;
                    break;
                } 
                else {
                    break;
                }
            }
            // // If the names are equal up to the length of the shorter name, swap if necessary
            // if (ptr[j] == '\0' && ptr1[j] != '\0') {
            //     char *str = names[i];
            //     names[i] = names[k];
            //     names[k] = str;
            // }
        }
    }

    //     // OR    Bubble sort algorithm to sort names alphabetically
    // for (int i = 0; i < num - 1; i++) {
    //     for (int j = 0; j < num - i - 1; j++) {
    //         char *name1 = names[j];
    //         char *name2 = names[j + 1];
    //         if (strcasecmp(name1, name2) > 0) { // Compares the strings without case (case insensitives)
    //             char *temp = names[j];
    //             names[j] = names[j + 1];
    //             names[j + 1] = temp;
    //         }
    //     }
    // }

    printf("\nSorted Names:\n");
    for (int i = 0; i < num; i++) {
        printf("%s", names[i]);
    }

    for (int i = 0; i < num; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}

// Another simple qsort() logic
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define NUM_NAMES 5  // Change this value according to the number of names you have

// int compareStrings(const void *a, const void *b) {
//     const char **str1 = (const char **)a;
//     const char **str2 = (const char **)b;
//     return strcmp(*str1, *str2);
// }

// int main() {
//     char *names[] = {
//         "John",
//         "Alice",
//         "Michael",
//         "Emma",
//         "David"
//     };  // Replace these names with your own set of names

//     printf("Original order of names:\n");
//     for (int i = 0; i < NUM_NAMES; i++) {
//         printf("%s\n", names[i]);
//     }

//     // Sorting the array of names
//     // qsort(names, NUM_NAMES, sizeof(char *), compareStrings);  // Also works for numbers
//     qsort(names, NUM_NAMES, sizeof(*names), compareStrings);


//     printf("\nNames in alphabetical order:\n");
//     for (int i = 0; i < NUM_NAMES; i++) {
//         printf("%s\n", names[i]);
//     }

//     return 0;
// }
