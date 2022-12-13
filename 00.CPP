#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	i=1;
	do
	{
		j=i;
		do
		{
			if(j%2==0)
			{
				printf(" # ");
			}
			else
			{
				printf(" * ");
			}
		j++;
		}while(j<=5);
		printf("\n");
	i++;
	}while(i<=5);
	getch();
}


