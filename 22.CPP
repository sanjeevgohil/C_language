#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;
	clrscr();
	cout<<endl<<"Enter First No:";
	cin>>a;
	cout<<endl<<"Enter Second No:";
	cin>>b;

	c =a+b;
	d =a-b;
	e =a*b;
	f =a/b;
	g =a%b;

	cout<<endl<<"Total is:"<<c;
	cout<<endl<<"Minus is:"<<d;
	cout<<endl<<"Multi is:"<<e;
	cout<<endl<<"divide is:"<<f;
	cout<<endl<<"Modularis:"<<g;
	getch();
}