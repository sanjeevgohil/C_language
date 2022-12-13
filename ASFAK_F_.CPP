#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	clrscr();
	printf("\nEnter value Of F :");
	scanf("%f",&f);

	c=(f-32)*5/9;

	printf("\nValue Of C Is :%.2f",c);
	getch();
}
