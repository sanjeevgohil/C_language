#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,p,r,n,i;
	clrscr();
	printf("/nEnter Value Of P :");
	scanf("%f",&p);
	printf("\nEnter Value Of R :");
	scanf("%f",&r);
	printf("\nEnter Value Of n :");
	scanf("%f",&n);

	a=p*pow(1+r/100);
	i=a-p;

	printf("\nAmount Is :%9.2f",p);
	printf("\nIntrest Is :%9.2f",i);
	printf("\n          =======");
	printf("\nFinal Amount Is :%9.2f",a);
	getch();
}