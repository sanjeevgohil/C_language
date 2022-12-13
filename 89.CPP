#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *nm="Abc",*nm1="abc";
	int ans;
	clrscr();

	fflush(stdin);

	ans=strcmp(nm,nm1);
	if(ans>0)
	{
		printf("\nFirst string is max");
	}
	else if(ans<0)
	{
		printf("\nSecond string is max");
	}
	else
	{
		printf("\nBoth are equal");
	}
	getch();

}