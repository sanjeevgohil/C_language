#include<iostream.h>
#include<conio.h>
#define size 10
void main()
{
	int a[size],i,j,temp;
	clrscr();
	for(i=0;i<=size;i++)
	{
		cout<<"\nEnter Number:";
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		cout<<"\nNumber is:"<<a[i];
	}
	getch();
}