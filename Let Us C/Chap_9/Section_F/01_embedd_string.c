#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<malloc.h>
#include<string.h>
#define LINE 6/*If the number of lines are increased
 so no need to change anything in the program just change
 LINE macro here.*/
#pragma warning (disable : C4267)

void change_Embedded_String(char **str, char *old, char *news)
{
	int i, j, k, m, c;
	j = k = m = i = c = 0;
	char ans[10][100], *p;
        
        
	for (i = 0; i <= LINE - 1; i++)
	{
		m = 0;
		c = 0;
        /*This loop for traversing the current line character by character.*/
		for (j = 0; str[i][j] != '\0';)
		{

			if (str[i][c] == old[k])/*If the character matches*/
			{
				k++;   // Increment boths char to check consecutive one
				c++;
				if (old[k] == '\0')/*If the whole word is found.*/
				{
                /*This loop is replacing the word character by character.*/
					for (k = 0; news[k] != '\0'; k++, m++)
						ans[i][m] = news[k];
					j = c; // Updating the position in the string to continue from after the replaced word
					k = 0;
				}
			}
			else/*If the character/word is not matched, so as it is string is copied.*/
			{
				ans[i][m] = str[i][j];
				m++;
				j++;
				c = j;      // Update c to the current position in the string (where no match occurred)
				k = 0;         // Check whole old_string again
			}
		}
		ans[i][m] = '\0';/*Terminate every line by NULL character*/
		j = k = m = 0;/*Reinitialization for next line.*/
	}
	for (i = 0; i <= LINE - 1; i++)
	{
		// p = (char*)malloc(strlen(ans[i]) + 1);
        // /*Memory needed is 1 more for null character.
        //   str[i] = ans[i]; This doesn't works becuase left side is pointer and right side is simple
        //   char variable therefore a news pointer p is taken and copied the content of ans[i] and
        //   assign to the str[i].*/
		// strcpy(p, ans[i]);
		// str[i] = p;
        for(int j = 0; j < strlen( ans[i] ) ; j++ )   // OR can use this
            str[i] = ans[i] ;
	}
}
int main()
{
    char *str[ ] = {  
                    "We will teach you how to...",  
                    "Move a mountain",  
                    "Level a building",  
                    "Erase the past",  
                    "Make a million",  
                    "...all through C!"  } ; 

    // printf("%s", str[0] ) ;  // To check
    char str1[50] , str2[50] ;
    printf("Enter the word you want to replace: ") ;
    fgets(str1, sizeof(str1), stdin) ;  
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter the word you want to replace with: ") ;
    fgets(str2, sizeof(str2), stdin) ;   
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    printf("Target is to find %s and replace with %s....\n", str1, str2) ;
    Sleep(1000) ;

	change_Embedded_String(str, str1, str2);
	for (int i = 0; i <= LINE - 1; i++)
		puts(str[i]);
	_getch();
	return 0;
}