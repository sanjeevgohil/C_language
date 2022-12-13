#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	A(){}
	A(int i)
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
	int geta()
	{
		return a;
	}
};

class B
{
	int b;
	public:
	B(){}
	B(A a1)
	{
		b=a1.geta();
	}
	void disp(void)
	{
		cout<<"\n Value of B is:"<<b;
	}
};
void main()
{
	clrscr();
	int i=10;
	float j;

	A a1=i;
	a1.disp();

	j=a1;
	cout<<"\n Value of J is:"<<j;

	B b1;
	b1=a1;
	b1.disp();
	getch();
}
