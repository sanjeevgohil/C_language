#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter First Number :");
	scanf("%d",&a);
	printf("\nEnter Second Number :");
	scanf("%d",&b);

	if(a>b)
	{
		printf("\nA Is Max");
	}
	else
	{
		printf("\nB Is Max");
	}
	getch();
}
