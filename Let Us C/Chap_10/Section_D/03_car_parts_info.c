#include <stdio.h>
#include <string.h>

#define SERIAL_LENGTH 3

// Structure to store information about engine parts
struct EnginePart {
    char serialNumber[SERIAL_LENGTH + 1];
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

// Function to retrieve information on parts between "BB1" and "CC6"
void retrievePartsInfo(struct EnginePart parts[], int size) {
    printf("Information on parts between BB1 and CC6:\n");
    for (int i = 0; i < size; ++i) {
// Since if all parts greater than BB1 have ASCII value more than it so use greater and when becomes CC it will be less
// strncmp  compare two strings within a specified length.
        if (strncmp(parts[i].serialNumber, "BB1", SERIAL_LENGTH) >= 0 &&
            strncmp(parts[i].serialNumber, "CC6", SERIAL_LENGTH) <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }
}

int main() {
    // Assuming a maximum of 100 engine parts
    struct EnginePart parts[100] = {
        {"AA0", 2020, "Steel", 50},
        {"AA1", 2019, "Nickel", 15},
        {"AA2", 2022, "Iron", 20},
        {"AA3", 2021, "Aluminium", 30},
        {"BB1", 2021, "Titatnium", 22},
        // {"BB0", 2021, "Titatnium", 22},  // That's why this was not printed
        {"BB2", 2022, "Bronze", 60},
        {"BB3", 2022, "Brass", 60},
        {"BB4", 2023, "Silver", 5},
        {"CC6", 2019, "Titanium", 25},
        {"DD5", 2022, "Plastic", 40},
        {"FF9", 2020, "Carbon Fiber", 20}
    };

    int numParts = 11; // Number of parts in the array

    // Retrieve information on parts between "BB1" and "CC6"
    retrievePartsInfo(parts, numParts);

    return 0;
}
