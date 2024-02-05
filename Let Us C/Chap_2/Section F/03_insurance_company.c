#include<stdio.h>

int main(){
    char health, sex, place;
    float premiumRate, maxAmount;
    int age;

    printf("Enter the gender of person(M os F): ");
    scanf(" %c", &sex);
    printf("Enter the age of person: ");
    scanf("%d", &age);
    printf("Enter the average health of person(Healthy H or Poor P): ");
    scanf(" %c", &health);
    printf("Enter the place you live(City C OR Village V): ");
    scanf(" %c", &place);

    if(health == 'H' && (age >=25 && age <=35) && sex == 'M' && place == 'C'){
        premiumRate = 4.0;
        maxAmount = 200000.0;
        printf("The person is eligible for insurance.\n");
        printf("Premium rate: Rs. %.2lf per thousand\n", premiumRate);
        printf("Maximum insured amount: Rs. %.2lf\n", maxAmount);
    }
    else if(health == 'H' && (age >=25 && age <=35) && sex == 'F' && place == 'C'){
        premiumRate = 3.0;
        maxAmount = 100000.0;
        printf("The person is eligible for insurance.\n");
        printf("Premium rate: Rs. %.2lf per thousand\n", premiumRate);
        printf("Maximum insured amount: Rs. %.2lf\n", maxAmount);
    }
    else if(health == 'P' && (age >=25 && age <=35) && sex == 'M' && place == 'V'){
        premiumRate = 6.0;
        maxAmount = 10000.0;
        printf("The person is eligible for insurance.\n");
        printf("Premium rate: Rs. %.2lf per thousand\n", premiumRate);
        printf("Maximum insured amount: Rs. %.2lf\n", maxAmount);
    } 
    else {
        printf("The person is not eligible for insurance.\n");
    }
    return 0;
}
