#include<stdio.h>
#include<conio.h>
int sum (void);
void main()
{
	int c;
	c=sum();
	printf("\nTotal Is :%d",c);
	getch();

}
int sum (void)
{
	int a,b,c;
	clrscr();
	printf("\nEnter value Of A :");
	scanf("%d",&a);
	printf("\nEnter value Of B :");
	scanf("%d",&b);


	c=a+b;
	return c;
}


