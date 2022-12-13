#include<stdio.h>
#include<conio.h>
#define size 5

void input (int[]);
void output (int[]);
void main ()

int a[size];
void main()
{

	clrscr();
	printf("\n input A array:\n");
	input(a);

	bs(a);

	printf("\n output in an array:\n");
	output(a);

	printf("\n output B array:\n");
	output(b);

	getch();
}
void input (int a[])
{
	int i;
	for(i=0;i<=size-1;i++)
	{
		printf("\n enter number:");
		scanf("%d",a[i]);
	}
}
void output(int a[]);
{
	int i;
	for(i=0;i<=size;i++);
	{
		printf("\n number is:%d",a[i]);
	}
}
void bs(int a[])
{
	int i,j,temp;

	for(i=0;i