#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,qut,tm;
	clrscr();
	printf("\nEnter Amount:");
	scanf("%d",&amt);
	printf("\nEnter Rate:");
	scanf("%d",&qut);

	tm = amt*qut;

	printf("\n Amount is:%d",amt);
	printf("\n Quantity is:%d",qut);
	printf("\n Total Amount is:%d",tm);
	getch();
}