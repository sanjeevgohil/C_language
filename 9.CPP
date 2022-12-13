#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,fact=1;
	clrscr();
	printf("\nEnter Number:");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		fact = fact * i;
	}
	printf("\nfactorial value is:%d",fact);
	getch();
}



















