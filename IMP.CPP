#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,s,ans=0;
	char ch,ch1;
	clrscr
	();

	printf("\nEnter First No:");
	scanf("%d",&a);
	printf("\nEnter Second No:");
	scanf("%d",&b);

	START:
	clrscr();
	printf("\nFirst Number Is:%d",a);
	printf("\nSecond Number Is:%d",b);

	printf("\n\n\t\tArethmatic Opration");
	printf("\n+.Addition");
	printf("\n-.Subtrection");
	printf("\n*.Multiplication");
	printf("\n/.Divition");
	printf("\n\n\t\tEnter Choice:");
	ch=getche();
	switch(ch)
	{
		case '+':
			ans=a+b;
			break;
		case '-':
			ans=a-b;
			break;
		case '*':
			ans=a*b;
			break;
		case '/':
			ans=a/b;
			break;
		default:
			printf("\n\n\t\tInvalid Choice...Try again");
	}
	printf("\n\n\t\tAnswer Is:%d",ans);
	printf("\n\n\t\tDo Yo Want To Continue Press[Y/y]:");
	ch1=getch();
	if(ch=='Y'|| ch1=='y')
	{
		goto START;
	}
	getch();
}


