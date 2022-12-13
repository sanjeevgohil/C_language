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
	operator float()
	{
		return a;
	}
};
void main()
{
	clrscr();
	int i=10;
	float j;
	Abc a1=i;
	a1.disp();
	j=a1;
	cout<<"\n Value of J is:"<<j;
	getch();
}
