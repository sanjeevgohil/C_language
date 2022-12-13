#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s,j,k,i2,s2,j2,k2;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{
			printf("   ")
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=1;k>=1;k--)
		{
			printf("%d",k);
		}
			printf("\n");
	}
	for(i2=4;i2>=1;i2--)
	{
		for(s2=i2;s2<=4;s++)
		{
			printf("   ")
		}
		for(j2=;j2<=j2;j2++)
		{
			printf("%d",j2);
		}
		for(k2=i2-1;k2>=1;k2--)
		{
			printf("%d",k2);
		}
		printf("\n")
	}
	getch();
}