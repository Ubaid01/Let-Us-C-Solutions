#include<stdio.h>
#include<stdlib.h>

int stringToInt(const char *str) {
    int num = 0;
    int sign = 1; // To handle negative numbers
    int i = 0;

    // Check for sign (+/-)
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    // Iterate through the string and build the integer
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            num = num * 10 + (str[i] - '0');
        } else {
            // If non-digit encountered, stop conversion
            break;
        }
        i++;
    }

    return num * sign;
}

int main(){
    char str[] = "124";
    int num = atoi(str);

    printf("String: %s\nInteger: %d\n", str, num);

    // OR 
    // if (sscanf(str, "%d", &num) == 1) // It means something is inputted on console 1 time
    //     printf("String: %s\nInteger: %d\n", str, num);
    // else
    //     printf("Conversion failed.\n");

    // OR
    // int num = stringToInt(str);
    // printf("String: %s\nInteger: %d\n", str, num);

    return 0;
}