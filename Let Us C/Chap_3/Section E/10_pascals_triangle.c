#include<stdio.h>

int main(){
    int n;
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    int row, spaces, column;
    for(row = 0; row < n; row++){
        for(spaces = n - row; spaces >= 1; spaces--){
            printf(" ");
        }

        int printChar = 1;
        int numerator = row;
        int denominator = 1;

        for(column = 0; column<= row ; column++){ // Since in row = 0 combination is 0C0
            printf("%d ", printChar);
            printChar = printChar * numerator;
            printChar = printChar / denominator;
            numerator --;
            denominator ++;
        }

        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// #include<conio.h>

// int fact(int i, int j);
// int main()
// {
//     int row, col, space,num;

//     //lets create a loop for rows here we have 5 rows

//     for(row=1;row<=5;row++)
//     {
//         //lets create space on left side
//         for(space=1;space<=5-row;space++)
//         {
//             printf(" ");
//         }

//         //create a for loop for pattern
//         for(col=1;col<=row;col++)
//         {
//             printf("%d ",fact(row, col));
//         }

//         printf("\n");
//     }
//     return 0;
// }

// //we are creating another function fact because we have to use recursion here

// int fact(int i, int j)
// {
//     if(j == 1 || j == i)
//         return 1;
//     else
//         return fact(i-1, j-1) + fact(i-1, j);
// }
