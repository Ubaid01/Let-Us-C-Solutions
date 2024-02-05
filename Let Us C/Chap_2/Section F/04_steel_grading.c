#include<stdio.h>

int main(){
    int hardness, strength;
    double carbon_content;

    printf("Enter the hardness and tensile strength of steel: ");
    scanf("%d %d", &hardness, &strength);
    printf("Enter the carbon content in %%: ");
    scanf("%lf%%", &carbon_content);

    float content = carbon_content / 100.0; // To convert to normal ratio

    if(hardness > 50 && content < 0.7 && strength > 5600)
        printf("Steel grade = 10");
    else if(hardness > 50 && content < 0.7)
        printf("Steel grade = 9");
    else if (content < 0.7 && strength > 5600)
        printf("Steel grade = 8");
    else if(hardness > 50 && strength > 5600)
        printf("Steel grade = 7");
    else if(hardness > 50 || content < 0.7 || strength > 5600)
        printf("Steel grade = 6");
    else
        printf("Steel grade = 5");
    return 0;
}