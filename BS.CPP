#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,j,k,temp;
	clrscr();
	for(i=0;i<=9;i++)
	{
		printf("Enter number :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j] > a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				printf("\n\n");
				for(k=0;k<=9;k++)
				{
					printf("\n number is :%d",a[k]);
				}
				getch();
			}
		}
	}
	printf("\n sorted output :\n");












	for(i=0;i<=9;i++)
	{
		printf("\n number is :%d",a[i]);
	}
	getch();
}