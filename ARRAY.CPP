#include<stdio.h>
#include<conio.h>
void main()
{
	int a[]={15,85,7,37,24,53,69,83,91,40};
	int i,s,flag=0;
	clrscr();
	printf("\n Enter Your Searching Element");
	scanf("%d",&s);

	for(i=0;i<=9;i++)
	{
		if(s==a[i])
		{
			flag=1;
			printf("\n searching element for in the list");
			break;
		}
	}
	if(flag==0)
	{
		printf("\n element is not found");
	}
	getch();
}