#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	Abc(){}
	Abc(int i)
	{
		a=i;
	}
	void disp(void)
	{
		cout<<"\n Value of A is:"<<a;
	}
};
void main()
{
	clrscr();
	int i=10;
	Abc a1=i;
	a1.disp();
	getch();
}
