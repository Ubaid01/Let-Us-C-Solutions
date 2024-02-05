#include <direct.h> // For dos.h
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define VDU_ADDRESS 0xB8000000 // Change to 0xB0000000 for monochrome adapter

int main() {
  // Loop until a key is pressed
  while (!kbhit()) {
    // Iterate through each row and column
    for (int row = 0; row < 25; row++) {
      for (int col = 0; col < 80; col++) {
        // Calculate the VDU memory addresses
        int charAddr = VDU_ADDRESS + 2 * (row * 80 + col);
        int colorAddr = charAddr + 1;

        // Read the character and its ASCII value
        char ch = *((char*) charAddr);
        int ascii = (int) ch;

        // Check if it's a capital letter
        if (isupper(ch)) {
          // Convert to lowercase and write back to VDU memory
          ch = tolower(ch);
          *((char*) charAddr) = ch;
        } else if (islower(ch)) {
          // Convert to uppercase and write back to VDU memory
          ch = toupper(ch);
          *((char*) charAddr) = ch;
        }
      }
    }
  }

  // Wait for the keypress to be released
  getch();

  return 0;
}