#include <stdio.h>

int main() {
    FILE *file;
    int fileSize = 0;
    char ch;

    file = fopen("02_text.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Move file pointer to the end (More Correct)
    if (fseek(file, 0, SEEK_END) != 0) {
        printf("Error while seeking to the end of the file.\n");
        fclose(file);
        return 1;
    }

    // Get the current position of the file pointer (which is the file size)
    fileSize = ftell(file);
    if (fileSize == -1L) {
        printf("Error determining the file size.\n");
        fclose(file);
        return 1;
    }

    // // Count characters until end of file (Count size by characters)
    // while ((ch = fgetc(file)) != EOF) {
        // // MY ERROR
    //     //  if (ch != '\n') {
    //     //     fileSize++;
    //     // }
    //     fileSize++;
    // }

    printf("Size of the file '%s' is: %d bytes\n", "02_text.txt", fileSize);

    fclose(file);
    return 0;
}
