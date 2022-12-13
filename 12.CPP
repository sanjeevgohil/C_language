#include<stdio.h>
#include<conio.h>
void sum(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter First no:");
	scanf("%d",&a);
	printf("\nEnter Second no:");
	scanf("%d",&b);

	sum(a,b);
}
void sum(int a,int b)
{
	int c;
	c = a+b;

	printf("\nTotal is:%d",c);
	getch();
}