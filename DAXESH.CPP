#include<iostream.h>
#include<conio.h>
int a,b,c;
input();
process();
output();
void main()
{

		clrscr();
	void input(void)
	{
		cout<<"\nenter first no:";
		cin>>a;
		cout<<"\nenter second no:";
		cin>>b;
	}
	void process(void)
	{
		  c=a+b;
	}
	void output(void)
	{
		cout<<"\n total is:"<<c;
	}
	getch();
}