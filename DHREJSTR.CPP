#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[30],b[30];
	int ans;
	clrscr();
	printf("\nEnter First String :");
	gets(a);
	printf("\nEnter Second String :");
	gets(b);

	ans=strcmp(a,b);

	if(ans==0)
	{
		printf("\n Both String is Equal");
	}
	else if(ans>0)
	{
		printf("\nFirst String is MAX");
	}
	else
	{
		printf("\nSecond String is MAX");
	}
	getch();
}

