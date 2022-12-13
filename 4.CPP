#include<stdio.h>
#include<conio.h>
void main()
{
	float mtr,cm;
	clrscr();
	printf("\nEnter Miter:");
	scanf("%f",&mtr);

	cm = mtr * 100;

	printf("\n cm is:"%.2f",cm);
	getch();
}