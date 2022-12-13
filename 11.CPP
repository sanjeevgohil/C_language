//No Argument No Return Value
#include<stdio.h>
#include<conio.h>
void sum(void);
void main()
{
	sum();
}
void sum(void)
{
	int a,b,c;
	clrscr();
	printf("\nEnter First no:");
	scanf("%d",&a);
	printf("\nEnter Second no:");
	scanf("%d",&b);

	c = a+b;

	printf("\nTotal is:%d",c);
	getch();
}