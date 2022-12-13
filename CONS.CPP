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
};