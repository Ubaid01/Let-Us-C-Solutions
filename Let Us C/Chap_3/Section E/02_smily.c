#include<stdio.h>

int main(){
    int i;
    for(i = 0; i <= 2000; i++)
        printf("%c", 1);
    fflush(stdout); // To flush previous input buffer (Can work without it but it decreases run-time)
    return 0;
}

// Side-Ways
// #include <stdio.h> 

// int main() {
//     int i, j;

//     // Define the ASCII art for a smiling face
//     char smiling_face[] = {
//         1, 1, 0, 0, 1, 1,
//         1, 0, 0, 0, 0, 1,
//         0, 1, 0, 0, 1, 0,
//         1, 0, 1, 1, 0, 1,
//         1, 0, 0, 0, 0, 1,
//         0, 1, 1, 1, 1, 0
//     };

//     // Determine the dimensions of the smiling face
//     int width = 6;  // Width of the smiling face
//     int height = 6; // Height of the smiling face

//     // Print the smiling face to fill the screen
//     for (i = 0; i < 24; i++) {
//         for (j = 0; j < 80; j++) {
//             // Calculate the position within the smiling face
//             int x = j % width;
//             int y = i % height;

//             // Print the smiling face character based on the ASCII art
//             putchar(smiling_face[y * width + x]);
//         }
//         putchar('\n'); // Move to the next line
//     }

//     return 0;
// }
