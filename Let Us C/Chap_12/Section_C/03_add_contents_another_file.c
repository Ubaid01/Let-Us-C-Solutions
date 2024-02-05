#include<stdio.h>

int main(){
    FILE *sourceFile, *destinationFile;
    char sourceFilename[100], destinationFilename[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFilename);

    // Open source file for reading
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    // Open destination file for appending
    destinationFile = fopen(destinationFilename, "a");
    if (destinationFile == NULL) {
        printf("Unable to open or create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Append contents of source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Contents from '%s' appended to '%s' successfully.\n", sourceFilename, destinationFilename);

    // Close files
    fclose(sourceFile);
    fclose(destinationFile);   
    return 0;
}