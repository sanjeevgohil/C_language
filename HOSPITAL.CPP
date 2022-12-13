#include<iostream.h>
#include<conio.h>
class A
{
	int cno;
	char nm[20],city[20];
	public:
	void input(void)
	{
		cout<<"\n Hospital";
		cout<<"\nEnter Name:";
		cin>>nm;
		cout<<"\nEnter City:";
		cin>>city;
		cout<<"\nEnter Contact no:";
		cin>>cno;
	}
	void output(void)
	{
		cout<<"\n Name is:"<<nm;
		cout<<"\n City is:"<<city;
		cout<<"\n Contact No is:"<<cno;
	}
};
class B	: public A
{
	int deptno,deptnm,pno,pnm,rno;
	public:
	void input(void)
	{
		cout<<"\n Sergery";
		cout<<"\nEnter Department No:";
		cin>>deptno;
		cout<<"\nEnter Department Name:";
		cin>>deptnm;
		cout<<"\nEnter Patient No:";
		cin>>pno;
		cout<<"\nEnter Patient Name:";
		cin>>pnm;
		cout<<"\nEnter Room No:";
		cin>>rno;
	}
	void output(void)
	{
		cout<<"\n Dept no:"<<deptno;
		cout<<"\n Dept nm:"<<deptnm;
		cout<<"\n Pat no:"<<pno;
		cout<<"\n Pat nm:"<<pnm;
		cout<<"\n Room no:"<<rno;
	}
};
class C
{
	int mno,mnm,com,pri,qua;
	public:
	void disp(void)
	{
		cout<<"\nMedicine";
		cout<<"\n Enter Medicine no:";
		cin>>mno;
		cout<<"\n Enter Medicine name:";
		cin>>mnm;
		cout<<"\n Enter Company:";
		cin>>com;
		cout<<"\n Enter Price:";
		cin>>pri;
		cout<<"\n Enter Quantity:";
		cin>>qua;
	}
	void output(void)
	{
		cout<<"\nMedicine no:"<<mno;
		cout<<"\nMedicine name:"<<mnm;
		cout<<"\nCompany :"<<com;
		cout<<"\nPrice :"<<pri;
		cout<<"\nQuantity :"<<qua;
	}
};
void main()
{
	clrscr();
	A a1;
	B b1;
	a1.input();
	b1.input();
	a1.output();
	b1.output();
	getch();
}