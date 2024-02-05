#include<stdio.h>
#include<conio.h>

int main(){
    int you, comp, sticks = 21;

    printf("Welcome to the Matchstick Game! Start by pressing any-key\n");
    getch();
    while(sticks > 0){
        printf("Total matchsticks left: %d\n", sticks);
        // User-Turn
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &you);

        if (you < 1 || you > 4 || (you > sticks) ) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        sticks -= you;

        // Check if the user has forced the computer to pick the last matchstick
        if (sticks == 1){ 
            printf("You win! The computer is forced to pick the last matchstick.\n");
            break;
        } 

        // Computer's turn
        comp = 5 - you;
        // Idea is to think for 20 matchsticks as the user who would pick the last one will lose the game.Divide 20 into four parts that is, each part is of size 5. So if the computer picks x matchsticks then the user should pick (5-x) matchsticks and should proceed in the same way.In this way, 20 matchsticks will be used and the last matchstick would be picked by the computer.
        printf("Computer picks %d matchsticks.\n", comp);
        sticks -= comp;

        if (sticks == 1) {
            printf("Computer wins! You are forced to pick the last matchstick.\n");
            break;
        }
    }
    
    return 0;
}