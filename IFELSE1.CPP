#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	cout<<"\n ENTER 1st no";
	cin>>a;
	cout<<"\n ENTER 2st no";
	cin>>b;
	cout<<"\n ENTER 3st no";
	cin>>c;

	if(a>b)
	{
		if(a>c)
		{
			cout<<"\n 1st no is max";
		}
		else
		{
		cout<<"\n 3rd no is max";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"\n 2nd no is max";
		}
		else
		{
			cout<<"\n 3nd no is max";
		}
	}
	getch();
}
