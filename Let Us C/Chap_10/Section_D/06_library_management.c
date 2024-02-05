#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define FILENAME "library_books.txt"

struct Book {
    int accession_number;  // Serial number for library access
    char title[100];
    char author[100];
    float price;
    int is_issued; // Flag: 0 - not issued, 1 - issued
};

struct Library {
    struct Book books[MAX_BOOKS];
    int count;
};

void addBook(struct Library *lib) {
    if (lib->count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    struct Book newBook;
    printf("Enter accession number: ");
    scanf("%d", &newBook.accession_number);
    getchar(); // Consume newline
    printf("Enter title: ");
    fgets(newBook.title, sizeof(newBook.title), stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0'; // Remove newline character
    printf("Enter author: ");
    fgets(newBook.author, sizeof(newBook.author), stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0'; // Remove newline character
    printf("Enter price: ");
    scanf("%f", &newBook.price);
    newBook.is_issued = 0; // Newly added book is not issued initially

    lib->books[lib->count++] = newBook;
    printf("Book added successfully.\n");

    // Save the book information to a file
    FILE *file = fopen(FILENAME, "a");
    if (file != NULL) {
        fprintf(file, "%d;%s;%s;%.2f;%d\n", newBook.accession_number, newBook.title,
                newBook.author, newBook.price, newBook.is_issued);
        fclose(file);
    } 
    else {
        printf("Error opening file for saving book information.\n");
    }
}

void displayBooks(struct Library lib) {
    printf("Displaying all books in the library:\n");
    if (lib.count == 0) {
        printf("Library is empty.\n");
        return;
    }

    printf("Accession Number | Title | Author | Price | Status\n");
    for (int i = 0; i < lib.count; i++) {
        printf("%d | %s | %s | %.2f | %s\n", lib.books[i].accession_number, lib.books[i].title,
               lib.books[i].author, lib.books[i].price,
               lib.books[i].is_issued == 0 ? "Available" : "Issued");
    }
}

void loadBooksFromFile(struct Library *lib) {
    FILE *file = fopen(FILENAME, "r");
    if (file != NULL) {
        struct Book newBook;
        while (fscanf(file, "%d;%[^;];%[^;];%f;%d\n", &newBook.accession_number, newBook.title,
                      newBook.author, &newBook.price, &newBook.is_issued) == 5) {
            lib->books[lib->count++] = newBook;
        }
//% [^;] Reads a sequence of characters (newBook.title and newBook.author) until it encounters a semicolon. After it reads and discards the semicolon character.
        fclose(file);
    } 
    else {
        printf("File doesn't exist or unable to open.\n");
    }
}

void listBooksByAuthor(struct Library lib, char *author) {
    printf("Books by author '%s':\n", author);
    int found = 0;

    for (int i = 0; i < lib.count; i++) {
        if (strcmp(lib.books[i].author, author) == 0) {
            printf("%s\n", lib.books[i].title);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found for this author.\n");
    }
}

void listTitleOfBook(struct Library lib, int accession_number) {
    int found = 0;

    for (int i = 0; i < lib.count; i++) {
        if (lib.books[i].accession_number == accession_number) {
            printf("Title of book with accession number %d: %s\n", accession_number, lib.books[i].title);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with accession number %d not found.\n", accession_number);
    }
}

void listBookCount(struct Library lib) {
    printf("Total books in the library: %d\n", lib.count);
}

void sortByAccessionNumber(struct Library *lib) {
    // Bubble sort
    for (int i = 0; i < lib->count - 1; i++) {
        for (int j = 0; j < lib->count - i - 1; j++) {
            if (lib->books[j].accession_number > lib->books[j + 1].accession_number) {
                struct Book temp = lib->books[j];
                lib->books[j] = lib->books[j + 1];
                lib->books[j + 1] = temp;
            }
        }
    }
    printf("Books sorted by accession number.\n");
}

int main() {
    struct Library library;
    library.count = 0;
    loadBooksFromFile(&library);

    int choice;
    char author[100];
    int accession_number;

    do {
        printf("\nLibrary Menu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(&library); // pass address as need to change directly
                break;
            case 2:
                displayBooks(library);
                break;
            case 3:
                printf("Enter author name: ");
                getchar(); // Consume newline
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = '\0'; // Remove newline character
                listBooksByAuthor(library, author);
                break;
            case 4:
                printf("Enter accession number: ");
                scanf("%d", &accession_number);
                listTitleOfBook(library, accession_number);
                break;
            case 5:
                listBookCount(library);
                break;
            case 6:
                sortByAccessionNumber(&library);
                break;
            case 7:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while (choice != 7);

    return 0;
}
