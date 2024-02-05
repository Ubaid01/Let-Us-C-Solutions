#include<stdio.h>

int main(){
    float salary,d_allowance,rent;
    printf("Enter Ramish's Basic Salary: ");
    scanf("%f", &salary);
    d_allowance = 0.4 * salary;
    rent = 0.2 * salary;
    float grossSalary = salary + d_allowance + rent;
    printf("Ramesh's gross salary is %.2f", grossSalary);
    return 0;
}