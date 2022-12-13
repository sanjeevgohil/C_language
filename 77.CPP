#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		printf("%d",i);

		for(j=1;j<=i;j++)
		{
			if(i%2 ==0)
			{
				printf(" # ");
			}
			else
			{
				printf(" * ");
			}
		}
		printf("\n");
	}
	getch();
}