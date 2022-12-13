#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,bonas;
	clrscr();
	printf("\nEnter Salary :");
	scanf("%f",&salary);

	bonas=salary*10/100;

	printf("\nBonas Is :%.2f",bonas);
	getch();
}