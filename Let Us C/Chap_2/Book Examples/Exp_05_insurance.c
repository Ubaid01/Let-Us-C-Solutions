#include<stdio.h>

int main(){
    char sex, ms ; 
    int age ; 
    printf ( "Enter age, sex, marital status " ) ; 
    scanf ( "%d %c %c", &age, &sex, &ms ) ; 
    if ( ms == 'M' ) 
        printf ( "Driver is insured" ) ; 
    else  // If not married
    { 
        if ( sex == 'M' ) 
        {
            if ( age > 30 ) 
                printf ( "Driver is insured" ) ; 
            else 
                printf ( "Driver is not insured" ) ; 
        } 
        else  // If not male
        { 
            if ( age > 25 ) 
                printf ( "Driver is insured" ) ; 
            else 
                printf ( "Driver is not insured" ) ; 
        } 
    }
    //Another-Way (Using Logical Operators)
        if ( ( ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30 ) || 
        ( ms == 'U' && sex == 'F' && age > 25 ) ) 
            printf ( "Driver is insured" ) ; 
        else 
            printf ( "Driver is not insured" ) ; 
     
// Conditions to be insured as above
// 1. Driver is married. 
// 2. Driver is an unmarried male above 30 years of age. 
// 3. Driver is an unmarried female above 25 years of age. 
    return 0;
}