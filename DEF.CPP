#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	abc()
	{
		a=0;
		b=0;
	}
	abc(int i,int j=100)
	{
		a=i;
		b=j;
	}
	void disp(void)
	{
		cout<<"\n value of A is:"<<a;
		cout<<"\n value of B is:"<<b;
	}
};
void main()
{
	clrscr();
	abc a1;
	abc a2(10,20);
	abc a3(50);
	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}