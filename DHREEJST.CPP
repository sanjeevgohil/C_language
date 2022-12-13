#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[30];
	int i;
	clrscr();
	printf("\n Enter String :");
	gets(a);

	i=strlen(a);

	printf("\n string is :");
	puts(a);
	printf("\n Number of Character is %d",i);
	getch();
}