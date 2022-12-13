//hirarchical inheritance
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
class C : public A
{
	public:
	void disp(void)
	{
		cout<<"\nClass C";
	}
};
void main()
{
	clrscr();
	B B1;
	C C1;
	C1.dispA();
	B1.dispB();
	C1.disp();
	getch();
}
