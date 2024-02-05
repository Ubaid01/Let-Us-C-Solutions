#include <stdio.h>
#include <stdbool.h>

enum DataType {
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    STRING,
    UNKNOWN
};

enum DataType checkDataType(void *var) {
    if (var == NULL) {
        return UNKNOWN;
    }

    if (*(int *)var == 0 || *(int *)var == 1) {
        return INT;
    }

    if (*(float *)var == 0.0f || *(float *)var == 1.0f) {
        return FLOAT;
    }

    if (*(double *)var == 0.0 || *(double *)var == 1.0) {
        return DOUBLE;
    }

    if (*(char *)var >= 0 && *(char *)var <= 127) {
        return CHAR;
    }

    // Check for string termination '\0'
    if (*(char *)var == '\0') {
        return STRING;
    }

    return UNKNOWN;
}

int main(){
    int x = 10;
    float y = 3.14f;
    double z = 2.71828;
    char c = 'A';
    char str[] = "124" ;

    printf("Data type of x: %d\n", checkDataType(&x));
    printf("Data type of y: %d\n", checkDataType(&y));
    printf("Data type of z: %d\n", checkDataType(&z));
    printf("Data type of c: %d\n", checkDataType(&c));
    printf("Data type of str: %d\n", checkDataType(str));
    return 0;
}