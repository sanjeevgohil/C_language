#include<stdio.h>
#include<conio.h>
void main()
{
	int no,no1,rem,tot=0;
	clrscr();
	printf("\n Enter number :");
	scanf("%d",&no);
	no1=no;

	while(no>0)
	{
		rem=no%10;
		tot=tot+(rem*rem*rem);
		no=no/10;
	}
	if(tot == no1)
	{
		printf("\n no is armstrong no :");
	}
	else
	{
		printf("\n no is not armstrong no :");
	}
	getch();

}