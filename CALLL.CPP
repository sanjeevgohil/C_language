#include<iostream.h>
#include<conio.h>

void swap(int*,int*);
void main()
{
    int a=10,b=20;
    clrscr();

    cout<<"\n before swap:"<<endl;
    cout<<"\n value of a is :"<<a;
    cout<<"\n value of b is :"<<b;
    getch();
}
void swap(int*a,int*b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;

