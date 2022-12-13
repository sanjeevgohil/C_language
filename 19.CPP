#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;
	clrscr();
	printf("\nEnter First No:");
	scanf("%d",&a);
	printf("\nEnter Second No:");
	scanf("%d",&b);

	c = a+b;
	d = a-b;
	e = a*b;
	f = a/b;
	g = a%b;

	printf("\nTotal is:%d",c);
	printf("\nMinus is:%d",d);
	printf("\nMulti is:%d",e);
	printf("\nDevide is:%d",f);
	printf("\nModuler is:%d",g);
	getch();
}