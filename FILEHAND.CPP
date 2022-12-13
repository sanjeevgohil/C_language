#include<stdio.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>


void main()
{
	clrscr();

	int rno;
	char nm[20];

	ofstream out ("sy21.txt");

	cout<<endl<<"ROLL NO:";
	cin>>rno;
	cout<<endl<<"NAME IS:";
	cin>>nm;

	out<<endl<<rno;
	out<<endl<<nm;

	getch();

}



