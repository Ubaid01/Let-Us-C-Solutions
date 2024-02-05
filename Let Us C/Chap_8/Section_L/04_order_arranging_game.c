// FOR DOS
// #include "dos.h" 
// getkey( ) 
// { 
//     union REGS i, o ;
//     while ( !kbhit( ) ) 
//         ; 
//     i.h.ah = 0 ; 
//     int86 ( 22, &i, &o ) ; 
//     return ( o.h.ah ) ; 
// } 

// The while (!kbhit()) loop continuously checks if a key has been pressed by the user. The kbhit() function returns a non-zero value if a key has been pressed. It waits until a key is pressed before proceeding to the next step getch() Function:

// When a key is pressed, the getch() function is used to capture the scan code of the pressed key.
// The function captures the key press and returns the scan code for the pressed key.

// Arrow Key Scan Codes:
// Each arrow key has an associated scan code:
// Up arrow: 72
// Down arrow: 80
// Left arrow: 75
// Right arrow: 77

// Returning the Scan Code:

// The getkey() function returns the scan code obtained from getch() after an arrow key has been pressed.
// The scan code is then used in the switch statement to trigger the corresponding case for the arrow key.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SIZE 4 // Size of the puzzle grid

int getkey() {
    while (!kbhit()) ;  // So return getch only when key press or loop exit no when condition TRUE
        return getch();
}

// This can also be used to get arrow keys
// int getkey()
// {
//     int ch;
//     ch = _getch();
//     if (ch == 0)
//     ch = _getch();
//     return ch;
// }

void displayPuzzle(int puzzle[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        printf("|");
        for (int j = 0; j < SIZE; j++) {
            if (puzzle[i][j] == 0) {
                printf("  ");
            } else {
                printf(" %2d", puzzle[i][j]);
            }
            printf(" |");
        }
        printf("\n---------------------\n");  
    }
}

void movePiece(int puzzle[SIZE][SIZE], int x, int y, int newX, int newY) {
    // Function to move the puzzle piece
    int temp = puzzle[x][y];
    puzzle[x][y] = puzzle[newX][newY];
    puzzle[newX][newY] = temp;
}

int isSorted(int puzzle[SIZE][SIZE]) {
    // Function to check if the numbers are sorted
    int i, j, k = 1; 

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (puzzle[i][j] != k && k != SIZE * SIZE) // It checks from 0th row & column whether the sequence is in ascending order or not like expected 1 2 3 4 for which 'k' is incremented and k is not equal to 4 * 4 i.e. 16
                return 0; // Puzzle is not sorted
            k++;
        }
    }
    return 1; // Puzzle is sorted
}

int main() {
    int puzzle[SIZE][SIZE] = {
        {1, 4, 15, 7},
        {8, 10, 2, 11},
        {14, 3, 6, 13},
        {12, 9, 5, 0} // 0 represents the blank space

        // {1, 2, 3, 4},
        // {5, 6, 7, 8},
        // {9, 10, 12, 15},
        // {13, 14, 11, 0} // Used to check the code
    };

    int moves = 0;
    int key, blankX = SIZE - 1, blankY = SIZE - 1; // Initial position of the blank space
    printf("Number Arranging Game!\nUse Arrow Keys to navigate: ") ;
    printf("%c %c %c %c\n", 30, 31, 16, 17 ) ; // Just A Method to Display Arrow keys can't use it like this

    while (1) {
        displayPuzzle(puzzle); // Display the puzzle

        key = getkey(); // Get the arrow key input
        switch (key) {
            case 76: // Up arrow key
                if (blankX < SIZE - 1) { // It checks if the blankX (the row position of the blank space) is within the grid bounds (less than SIZE - 1).
                    movePiece(puzzle, blankX, blankY, blankX + 1, blankY);
                    blankX++;
                    moves++ ;  // Increment moves counter
                }
                break;
            case 80: // Down arrow key
                if (blankX > 0) { 
                    movePiece(puzzle, blankX, blankY, blankX - 1, blankY);
                    blankX--;
                    moves++;
                }
                break;
            case 77: // Right arrow key
                if (blankY > 0) { // It checks if the blankY (the column position of the blank space) is within the grid bounds (greater than 0).
                    movePiece(puzzle, blankX, blankY, blankX, blankY - 1);
                    blankY--;
                    moves++ ;
                }
                break;
            case 75: // Left arrow key
                if (blankY < SIZE - 1) {
                    movePiece(puzzle, blankX, blankY, blankX, blankY + 1);
                    blankY++;
                    moves++ ;
                }
                break;
            default:
                printf("Invalid Input.\n\tTry-Again!") ;
                moves++ ;
                break;
        }

        // Implement logic to check if the puzzle is solved
        if (isSorted(puzzle)) {
            printf("Congratulations! Puzzle solved in %d moves.\n", moves);
            return 0;
        }

        system("cls"); // Clear the screen
    }

    return 0;
}
