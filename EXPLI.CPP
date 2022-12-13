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
	void disp(void)
	{
		cout<<"\n value of A is:"<<a;
	}
};
void main()
{
	clrscr();
	abc a1;
	abc a2=20;
	abc a3(50);
	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}