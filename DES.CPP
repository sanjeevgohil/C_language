#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	abc()
	{
		cout<<"\n This is constructor";
	}
	~abc()
	{
		cout<<"\n This is destructor";
	}
};

void main()
{
	clrscr();
	abc a1;
	getch();
}