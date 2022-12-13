#include<iostream.h>
#include<conio.h>
class abc
{
	int *no;
	int size;
	public:
	abc(){}
	abc(int i)
	{
		size=i;
		no=new int[size];
	}
	void input(void)
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\n Enter Number:";
			cin>>no[i];
		}
	}
	void output(void)
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"Number is:"<<no[i];
		}
	}
};
void main()
{
	abc a1(5),a2(8),a3(3);
	clrscr();
	cout<<"\n input A1 object :\n";
	a1.input();
	cout<<"\n input A2 object :\n";
	a2.input();
	cout<<"\n input A3 object :\n";
	a3.input();
}


