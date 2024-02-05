#include<stdio.h>
int main()
{
    int i, j, k, space, n;
    printf("Enter number of Rows: ");
    scanf("%d", &n);

    for(i=0; i < n; i++)
    {
        for(j=65; j <= 65 + (n - i - 1) ; j++) //loop for first half
        {
            printf("%c",j);

        }

        //add space between these string
        for(space=1; space <= 2*i - 1; space++)
            printf(" ");

        for(k=65 + (n - i - 1) ; k >= 65; k--) //loop for next half (Second half)
        {
            if(k == 65 + n - i - 1  && i == 0) // As have to print all in 1st line and remove the double printing last character
                continue;
            else
                printf("%c", k);
        }


    printf("\n");
    }
}

//        for(j=0; j < n ; j++) //loop for first half  
//         {   if(j<= n-i-1)
//                 printf("%c",65 + j);

//         }	

