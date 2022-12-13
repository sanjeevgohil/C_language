#include<stdio.h>
#include<conio.h>
void main()
{
	float s,hra,ma,da,ta,gs;
	clrscr();
	printf("\nEnter Salary :");
	scanf("%f",&s);

	hra=s*10/100;
	ma=s*7.5/100;
	da=s*35/100;
	ta=500;
	gs=s+hra+ma+da+ta;

	printf("\nHra Is:%.2f",hra);
	printf("\nMa Is :%.2f",ma);
	printf("\nDa Is :%.2f",da);
	printf("\nTA Is :%.2f",ta);
	printf("\nGs Is :%.2f",gs);
	getch();
}