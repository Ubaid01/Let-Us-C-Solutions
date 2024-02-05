#include<stdio.h>

int main(){
    int t1, t2, marksA, marksB;
    printf("Enter the total marks of Subject-A and Subject-B: ");
    scanf("%d %d", &t1, &t2);
    printf("Enter obtained marks of Subject-A (Main Subject) and Subject-B (Subsidiary Subject): ");
    scanf("%d %d", &marksA, &marksB);

    float perA = ((float) marksA / t1) * 100.0 ; // As the main issue was with division as few decimal places were being dropped so type-cast from it.
    float perB = ((float) marksB / t2) * 100.0 ; 

    if (perA >= 55.0 && perB >= 45.0) 
        printf("Student has passed!\n");
    else if ( (perA < 55.0 && perA >= 45.0) && perB >= 55.0) 
        printf("Student has passed!\n");
    else if (perB < 45.0 && perA >= 65.0)
        printf("Student is allowed to reappear in subject B.\n");
    else 
        printf("Student has failed.\n");

    return 0;
}