#include<stdio.h>
#include<conio.h>
int sum(void);
void main()
{
	int c;
	c = sum();
	printf("\nTotal is:%d",c);
	getch();
}
int sum(void)
{
	int a,b,c;
	clrscr();
	printf("\nEnter First No:");
	scanf("%d",&a);
	printf("\nEnter Second No:");
	scanf("%d",&b);

	c = a+b;

	return c;
}














































