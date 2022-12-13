#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	float per;
	clrscr();
	for(i=1;i<=10;i=i+1)
	{
		printf("\nNumber Is :%d",i);
		tot=tot+i;
	}
	per=(float)tot/10;
	//using expliait type cast
	printf("\nTotal Is :%d",tot);
	printf("\nPer Is :%.2f",per);
	getch();
}