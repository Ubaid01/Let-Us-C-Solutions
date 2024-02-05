#include<stdio.h>

void result(int marks[], int total, double *avg, double *per){

    *avg = ( marks[0] + marks[1] + marks[2] ) / 3.0 ; // Used brackets OR else operator precedence & associativity decides calculation.
    *per = ( ( marks[0] + marks[1] + marks[2] ) / (double) (3 * total ) ) * 100.0 ; // Type-cast 1 value to float so int/float will be float. 3 * total for 3 subjects
}

int main(){
    int marks[3] , total;
    printf("Enter Total marks in subjects: ");
    scanf("%d", &total );
    
    for(int i = 0; i < 3; i ++){
        printf("Enter marks for Subject-%d: ", i + 1 ) ;
        scanf("%d", &marks[i] ) ; 
        if(marks[i] > total ){
            printf("Invalid Marks Entered.\n\tTry Again!\n");
            i-- ;
            continue;
        }   
    }

    double avg , percent ;
    result( marks, total, &avg, &percent ) ;
    printf("\nAverage of Marks = %.3lf\nPercentage = %.2lf\n", avg, percent ) ;
    return 0;
}