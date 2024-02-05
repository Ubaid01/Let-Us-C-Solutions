#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void encryptOffset(FILE *fp, FILE *ft) {
    char ch;

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        ch = ch + 128; /* Offset cipher encryption */

        fputc(ch, ft);
    }
}

void decryptOffset(FILE *fp, FILE *ft) {
    char ch;

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        ch = ch - 128; /* Decryption: Subtracting the offset */

        fputc(ch, ft);
    }
}

void encryptSubstitution(FILE *fp, FILE *ft) {
    char ch;

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        // Perform substitution encryption here
        // For example, replace 'A' with '!', 'B' with '5', etc.
        if (ch >= 'A' && ch <= 'Z') {
            ch = '!' + (ch - 'A');
        } 
        else if (ch >= 'a' && ch <= 'z') {
            ch = '5' + (ch - 'a');
        }
        else if( ch >= '0' && ch <= '9') {
            ch = '+' - (ch - '0');
        }

        fputc(ch, ft);
    }
}

void decryptSubstitution(FILE *fp, FILE *ft) {
    char ch;

    while (1) {
        ch = fgetc(fp);

        if (ch == EOF)
            break;

        // Perform substitution decryption here (reverse of encryption)
        if (ch >= '!' && ch <= '}') {
            ch = 'A' + (ch - '!');
        } 
        else if (ch >= '5' && ch <= '~') {
            ch = 'a' + (ch - '5');
        }
        else if (ch >= '#' && ch <= '+') {
            ch = (ch - '+') + '0' ;
        }

        fputc(ch, ft);
    }
}

int main() {
    FILE *fp, *ft;
    char choice;
    char *pass = "NULL^", try[20];

    system("cls");

    fp = fopen("08_data.txt", "r");
    ft = fopen("08_temp.txt", "w");

    if (fp == NULL || ft == NULL) {
        printf("Cannot open one of the files!");
        exit(1);
    }

    printf("Choose an option:\n");
    printf("1. Encrypt By Offset Cipher\n");
    printf("2. Decrypt By Offset Cipher\n");
    printf("3. Encrypt By Substitution Cipher\n");
    printf("4. Decrypt By Substitution Cipher\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            encryptOffset(fp, ft);
            printf("Offset Encryption Completed!");
            break;
        case '2':
            printf("Enter the admin password to decrypt the file: ");
            getchar(); // To remove the newline buffer
            fgets(try, sizeof(try), stdin);
            try[strcspn(try, "\n")] = '\0';
            if ((strcmp(try, pass)) == 0) {
                fseek(fp, 0, SEEK_SET); // Reset file pointer to the beginning of the file
                decryptOffset(fp, ft);
                printf("Offset Decryption Completed!");
            }
            else
                printf("Incorrect password. Decryption failed.");
            break;

        case '3':
            encryptSubstitution(fp, ft);
            printf("Substitution Encryption Completed!");
            break;
        case '4':
            printf("Enter the admin password to decrypt the file: ");
            getchar(); // To remove the newline buffer
            fgets(try, sizeof(try), stdin);
            try[strcspn(try, "\n")] = '\0';
            if ((strcmp(try, pass)) == 0) {
                fseek(fp, 0, SEEK_SET); // Reset file pointer to the beginning of the file
                decryptSubstitution(fp, ft);
                printf("Substitution Decryption Completed!");
            } 
            else 
                printf("Incorrect password. Decryption failed.");
            break;

        default:
            printf("Invalid choice!");
            break;
    }

    fclose(fp);
    fclose(ft);

    remove("08_data.txt");
    rename("08_temp.txt", "08_data.txt");

    getch();
    return 0;
}
