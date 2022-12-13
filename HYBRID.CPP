//hybrid inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void dispA(void)
	{
		cout<<"\nClass A";
	}
};
class B : public A
{
	public:
	void dispB(void)
	{
		cout<<"\nClass B";
	}
};
class C
{
	public:
	void dispC(void)
	{
		cout<<"\nClass C";
	}
};
class D : public B,public C
{
	public:
	void disp(void)
	{
		cout<<"\nClass D";
	}
};
void main()
{
	clrscr();
	D D1;
	D1.dispA();
	D1.dispB();
	D1.dispC();
	D1.disp();
	getch();
}
