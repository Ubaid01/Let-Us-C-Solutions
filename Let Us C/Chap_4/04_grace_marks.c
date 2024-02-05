#include<stdio.h>

int main(){
    int class, subjects, fail_subjects, grace = 0;
    printf("Enter the class of Student: ");
    scanf("%d", &class);
    printf("Enter the No. of Total subjects and failed ones: "); 
    scanf("%d %d", &subjects, &fail_subjects);

    switch(class){
        case 1 :
            if(fail_subjects > 3)
                printf("No grace marks!\n");
            else if(fail_subjects <= 3)
                grace += 5 * (subjects - fail_subjects); // Since grace is of 5 marks per subject in which he not failed
            break;

        case 2 :
             if(fail_subjects > 2)
                printf("No grace marks!\n");
            else if(fail_subjects <= 2)
                grace += 4 * ( subjects - fail_subjects );
            break;

        case 3 :
            if(fail_subjects > 1)
                printf("No grace marks!\n");
            else if(fail_subjects <= 1)
                grace += 5 * (subjects - fail_subjects);
            break;
        default:
            printf("Invalid Class-value!\n Try Again any b/w (1 to 3).");
            break;
    }
    if(grace > 0) // OR can use retrun 0 after every if-condition so it only prints No grace marks!
        printf("Grace Marks = %d", grace);
    return 0;   
}

// Nested-switches

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int a,b;
//     printf("\nEnter your class : ");
//     scanf("%d", &a);
//     printf(" \nEnter your number of subjects in which you are failed : ");
//     scanf("%d", &b);
//     switch(a)
//     {
//     case(1):
//         switch(b)
//         {
//         case(3):
//         case(2):
//         case(1):
//         case(0):
//             printf("You've got the grace of 5 marks.");
//             break;			
//         default:
//             printf("You will not get any grace.");
//         }
//         break;
            
//     case(2):
//         switch(b)
//         {
//         case(2):
//         case(1):
//         case(0):
//             printf("You've got the grace of 4 marks.");
//             break;				
//         default:
//             printf("You will not get an grace.");
//             break;
//         }
//         break;
        
//     case(3):
//         switch(b)
//         {
//         case(1):
//         case(0):
//             printf("You've got the grace of 5 marks.");
//             break;
//         default:
//             printf("You will not get any grace.");
//             break;
//         }
//         break;
            
//     default:
//         printf("\n\nWrong choice of class.\nTry again!!");
//         break;	
//     }
//     getch();
//     return 0;
// }