#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
class emp
{
	int eno;
	char enm[20];
	public:
	void input(void)
	{
		cout<<endl<<"\nEnter Emp No:";
		cin>>eno;
		cout<<endl<<"\nEnter Emp Name:";
		cin>>enm;
	}
	void output(void)
	{
		cout<<endl<<setw(20)<<eno<<setw(20)<<enm;
	}
};
void main()
{
	clrscr();
	emp e1;
	int n,i,last,no,pos;
	fstream f1;
	f1.open("employee.txt",ios::ate | ios::in | ios::out);
	f1.seekg(0,ios::beg);
	cout<<"\nEmployee Information:\n";
	cout<<setw(20)<<"employee number:";
	cout<<setw(20)<<"employee name:";
	cout<<endl<<"-----------------------------------";
	while(f1.read((char *)&e1,sizeof(e1)))
	{
		e1.output();
	}
	f1.clear();
	cout<<"\nEnter New Employee Information:";
	e1.input();
	f1.write((char *)&e1,sizeof(e1));
	f1.seekg(0,ios::beg);
	cout<<"\nEmployee Information:\n";
	cout<<setw(20)<<"employee number";
	cout<<setw(20)<<"employee name:";
	cout<<endl<<"-----------------------------------";
	while(f1.read((char *)&e1,sizeof(e1)))
	{
		e1.output();
	}
	f1.clear();

	last=f1.tellg();
	n=last/sizeof(e1);
	cout<<"\nTotal Number Of Record:"<<n;
	cout<<"\nTotal Bytes In The File:"<<last;
	cout<<"\nEnter Record Number To Update:";
	cin>>no;

	pos=(no-1)*sizeof(e1);
	f1.seekg(pos);
	cout<<endl<<"Enter New Data Of Emoloyee:";
	e1.input();
	f1.write((char *)&e1,sizeof(e1));
	f1.seekg(0,ios::beg);
	cout<<"\nEmployee Information :\n";
	cout<<setw(20)<<"employee number:";
	cout<<setw(20)<<"employee name:";
	cout<<endl<<"\n-------------------------------";
	while(f1.read((char *)&e1,sizeof(e1)))
	{
		e1.output();
	}
	f1.clear();
	f1.close();
	getch();
}