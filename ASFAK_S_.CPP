#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,bonus;
	clrscr();
	printf("\n Enter Salary :");
	scanf("%f",&salary);

	bonus=salary*10/100;

	if(salary<5000)
	{
		printf("\nYou Are Not Eligible For Bonus");
	}
	else
	{
		printf("\nYou Are Eligible For Bonus");
	}
	printf("\nBonas Is :%.2f",bonas);
	getch();
}
