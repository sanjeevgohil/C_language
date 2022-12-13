#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	abc()
	{
		a=0;
	}
	abc(int i)
	{
		a=i;
	}
	abc(abc &t1)
	{
		a=t1.a;
	}
	void disp(void)
	{
		cout<<"\n value of A is:"<<a;
	}
};
void main()
{
	clrscr();
	abc a1;
	abc a2(10);
	abc a3(a2);
	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}