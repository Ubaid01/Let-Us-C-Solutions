#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

void add_info(char*, char*);
void display(char*);
void disbys(int, char*);

int main()
{
	disbys(1, "12_Students.txt");
	_getch();
	return 0;
}

void add_info(char *name, char *file)
{
	FILE *fp;
	fp = fopen(file, "r+");
	if (fp == NULL)
		fp = fopen(file, "w");
	fseek(fp, 0, SEEK_END);
	fputs(name, fp);
	putc('\n', fp);
	fclose(fp);
}

void display(char *file)
{
	FILE *fp;
	char name[30];
	fp = fopen(file, "r");
	if (fp == NULL)
	{
		printf("File do not exist.");
		_getch();
		exit(1);
	}
	while (fscanf(fp, "%s", name) != -1)
		puts(name);
	fclose(fp);
}

void disbys(int num, char *file)
{
	FILE *fp;
	int i;
	char name[30];
	fp = fopen(file, "r");
	if (fp == NULL)
	{
		printf("File do not exist.");
		_getch();
		exit(2);
	}

	for (i = 1; fscanf(fp, "%s", name) != -1; i++)
	{
		if (i == num)
		{
			switch (num)
			{
			case 1:
				printf("%dst name is : ", num);
				break;
			case 2:
				printf("%dnd case is : ", num); 
				break;
			case 3:
				printf("%drd name is : ", num); 
				break;
			default:
				printf("%dth name is : ", num);
			}
			printf("%s\n\n", name);
			break;
		}
	}
	if (fscanf(fp, "%s", name) == -1)
		printf("There's only %d names.\n", i);

	rewind(fp);
	while (fscanf(fp, "%s", name) != -1)
		if (name[0] == 'S' || name[0] == 's')
			puts(name);
	fclose(fp);
}