#include<iostream.h>
#include<conio.h>

inline int sum(int a=100,int b=200)

{
	int c;
	c=a+b;
	return c;

}
void main()
{
	int a,b,c;
	clrscr();
	a=10;
	b=20;

	c=sum(a,b);
	cout<<"\n total is:"<<c;
	c=sum(a);
	cout<<"\n total is : " <<c;
	c=sum();
	cout<<"\n total is :"<<c;
	getch();
}