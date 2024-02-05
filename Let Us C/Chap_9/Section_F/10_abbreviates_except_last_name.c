#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(char str[]) {
    int len = strlen(str);

    // To remove any leading or trailing spaces
    int start = 0, end = len - 1;
    while (isspace((unsigned char)str[start])) {
        start++;
    }
    while (end >= start && isspace((unsigned char)str[end])) {
        end--;
    }
    str[end + 1] = '\0'; // Trimming the string

    // To store extracted words
    char t[50] = "";
    int i;
    for (i = 0; i <= end; i++) {
        char ch = str[i];

        if (ch != ' ') {
            // Forming the word
            int len_t = strlen(t);
            t[len_t] = ch;
            t[len_t + 1] = '\0';
        } else {
            // Printing the first letter of the name in capital letters
            printf("%c. ", toupper(t[0]));
            t[0] = '\0';
        }
    }

    char temp[50] = "";

    // For the surname, print the entire surname and not just the initial
    // String "t" has the surname now
    int j;
    for (j = 0; j < strlen(t); j++) {
        // First letter of surname in capital letter
        if (j == 0) {
            temp[0] = toupper(t[0]);
            temp[1] = '\0';
        } else {
            // Rest of the letters in small
            int len_temp = strlen(temp);
            temp[len_temp] = tolower(t[j]);
            temp[len_temp + 1] = '\0';
        }
    }

    // Printing surname
    printf("%s\n", temp);
}

int main() {
        int n ;
        printf("Enter no.of Names to be entered: ") ;
        scanf("%d", &n) ;

        fflush(stdin) ;
        char names[n][50] ;
        
        for(int i = 0 ; i < n ; i++) {
        printf("Enter Whole Name of Member-%d: ", i + 1) ;
        fgets(names[i] , sizeof( names[i] ) , stdin) ;
        names[i][ strcspn(names[i], "\n") ] = '\0' ;
    }

    for(int i = 0 ; i < n ; i++) 
        printInitials( names[i] );

    return 0;
}