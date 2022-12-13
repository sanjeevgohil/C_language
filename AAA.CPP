#include<stdio.h>
#include<conio.h>
void main()
{
	float u,uc,gt,fc,mr=25,tot;
	clrscr();
	printf("\n Enter unit :");
	scanf("%f",&u);

	if(u<=50)
	{
		uc=u*0.50;
	}
	else if(u>=51 && u<=100)
	{
		uc=(50*0.50)+((u-50)*0.75);
	}
	else if(u>=101 && u<=200)
	{
		uc=(50*0.50)+(50*0.75)+((u-100)*1);
	}
	else
	{
		uc=(50*0.50)+(50*0.75)+(100*1)+((u-200)*1.20);
	}
	gt=uc*40/100;
	fc=(uc+gt)*10/100;
	tot=uc+gt+fc+mr;

	printf("\n unit charge is   :%9.2f",uc);
	printf("\n goverment tax is :%9.2f",gt);
	printf("\n fuel charge is   :%9.2f",fc);
	printf("\n meter rant is    :%9.2f",mr);
	printf("\n                   =========");
	printf("\n total due amount is :%9.2f",tot);
	getch();
}