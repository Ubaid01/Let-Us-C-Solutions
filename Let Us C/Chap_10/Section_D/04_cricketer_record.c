#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CRICKETERS 20
#define NAME_LENGTH 50

struct Cricketer {
    char name[NAME_LENGTH];
    int age;
    int testMatchesPlayed;
    float averageRuns;
};

// Comparison function for qsort based on average runs
int compareAverageRuns(const void *a, const void *b) {
    const struct Cricketer *cricketerA = (const struct Cricketer *)a;
    const struct Cricketer *cricketerB = (const struct Cricketer *)b;

    if (cricketerA->averageRuns < cricketerB->averageRuns) return -1;
    else if (cricketerA->averageRuns > cricketerB->averageRuns) return 1;
    else return 0;
}

int main() {
    struct Cricketer cricketers[MAX_CRICKETERS];

    // For demonstration, some sample data is initialized
    cricketers[0] = (struct Cricketer){"Player1", 25, 30, 45.5};
    cricketers[1] = (struct Cricketer){"Player2", 30, 40, 52.1};
    cricketers[2] = (struct Cricketer){"Player0", 18, 5, 48.1};
    cricketers[3] = (struct Cricketer){"Player7", 40, 78, 34.1};
    cricketers[4] = (struct Cricketer){"Player21", 37, 71, 56.1};

    int numCricketers = 5; // Number of cricketers in the array

    // Sort cricketers array based on average runs using qsort function
    qsort(cricketers, numCricketers, sizeof(struct Cricketer), compareAverageRuns);

    // Display cricketers after sorting
    printf("Cricketers sorted by average runs (ascending order):\n");
    for (int i = 0; i < numCricketers; ++i) {
        printf("Name: %s, Age: %d, Test Matches Played: %d, Average Runs: %.2f\n",
               cricketers[i].name, cricketers[i].age, cricketers[i].testMatchesPlayed, cricketers[i].averageRuns);
    }

    return 0;
}
