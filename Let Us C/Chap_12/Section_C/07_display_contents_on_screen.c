#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<sys/stat.h>
#include<windows.h>
#include<fcntl.h>

void box();
void print();
void gotoxy(short col, short row)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { col,row };
	SetConsoleCursorPosition(h, position);
}

void main() {

int inhandle,bytes,pg=1;
FILE *fp;
char source[80] = "06_source_1.txt" ;
char buffer[1400];

system("cls") ;


inhandle=open(source, O_RDONLY);

if(inhandle==-1) {

printf("cannot open file!");
exit(1);

}

system("cls") ;


while(1) {



bytes=read(inhandle,buffer,1387);


if(bytes>0) {

gotoxy(32,1);          /* showing filename */
printf("%s",strupr(source));

gotoxy(70,1);
printf("Pg: %3d",pg);      /* showing page number */

box();   /* passing the heading and page number to the function */

print(buffer);    /* passing the buffer to the function */

}

else  {

gotoxy(70,1);
printf("Pg: %3d",pg);
break;
}

++pg;
}

close(inhandle);

getch();
}

/********************************/
/* function to print the buffer */
/********************************/


void print(char s[1400]) {


int x=4,y=3,i=0;

while(s[i]!=EOF) {


gotoxy(x,y);
printf("%c",s[i]);

if(x>74) {

x=4;
y+=1;

}

if(y>21) {

gotoxy(2,24);
printf("press any key to go to next page...");


x=4;
y=3;

getch();

system("cls") ;
box();
}

x++;
i++;

}

}


/****************************/
/* function to draw the box */
/****************************/


void box() {

int i,j;

for(i=2;i<=77;i++) {

gotoxy(i,2);
printf("%c",196);

gotoxy(i,23);
printf("%c",196);

}

for(j=3;j<=22;j++) {

gotoxy(2,j);
printf("%c",179);

gotoxy(77,j);
printf("%c",179);

}

gotoxy(77,23);
printf("%c",217);

gotoxy(77,2);
printf("%c",191);

gotoxy(2,23);
printf("%c",192);

gotoxy(2,2);
printf("%c",218);

}