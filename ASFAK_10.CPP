#include<stdio.h>
#include<conio.h>
void main()
{
	float s,b,ns;
	clrscr();
	printf("\nEnter Salary :");
	scanf("%f",&s);

	if(s<5000)
	{
		b=s*10/100;
	}
	else
	{
		b=s*5/100;
	}
	ns=s+b;

	printf("\nSalary Is :%9.2f",s);
	printf("\nBonas Is :%9.2f",b);
	printf("\nNet Salary Is :%9.2f",ns);
	getch();
}
