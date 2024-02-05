#include <stdio.h>
#include <string.h>

struct donor {
    char name[21];   
    char address[46]; 
    int age;
    int blood_type;    // Type 1, 2, 3, or 4
};

int main() {
    FILE *file;
    struct donor donor_record;

    file = fopen("blood_donors.txt", "r");
    if (file == NULL) {
        printf("Error opening blood_donors.txt file.\n");
        return 1;
    }

    printf("List of blood donors below 25 years old with blood type 2:\n");
    printf("--------------------------------------------------------\n");

    // Read the file line by line
 while (fscanf(file, "%20[^;]; %40[^;]; %d %d\n",
                  donor_record.name, donor_record.address, &donor_record.age, &donor_record.blood_type) == 4){
        if (donor_record.age < 25 && donor_record.blood_type == 2) {
            printf("Name: %-10s Address: %-30s Age: %-5d Blood Type: %d\n",
                   donor_record.name, donor_record.address, donor_record.age, donor_record.blood_type);
        }
    }

    fclose(file);

    return 0;
}
