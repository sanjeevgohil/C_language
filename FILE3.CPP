#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c;
	clrscr();
	printf("\n read file:\n");
	f1=fopen("fy21.txt","r");
	while((c=getc(f1))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f1);
	getch();
}