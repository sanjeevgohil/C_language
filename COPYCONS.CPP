#include<iostream.h>
#include<conio.h>

class Abc
{
	int a;
	public:
	Abc ()
	{
		a=0;
	}
	Abc (int i)
	{
		a=i;
	}
	Abc (Abc &t1)
	{
		a=t1.a;
	}
	void output()
	{
		cout<<"\n value of A is :"<<a;
	}
};
void main()
{
	clrscr();
	Abc a1;
	Abc a2(50);
	Abc a3=a2;
	a1.output();
	a2.output();
	a3.output();

	getch();

}
