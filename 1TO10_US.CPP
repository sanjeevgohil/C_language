#include<stdio.h>
#include<conio.h>
void main()
{
	int i,tot=0;
	float per;
	clrscr();
	for(i=1;i>=-10;i--)
	{
		printf("\nNumber Is :%d",i);
		tot=tot+i;
	}
	per=(float)tot/10;
	//using decriment
	printf("\nTotal Is :%d",tot);
	printf("\nPer Is :%.2f",per);
	getch();
}