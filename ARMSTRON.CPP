#include<stdio.h>
#include<conio.h>
void main()
{
	int no,no1,rem,ans=0;
	clrscr();
	printf("\nEnter No :");
	scanf("%d",&no);

	no1=no;
	while(no>0)
	{
		rem=no%10;
		ans=ans+(rem*rem*rem);
		no=no/10;
	}
	if(ans==no1)
	{
		printf("\nNumber Is Armstrong");
	}
	else
	{
		printf("\nNumber Is Not Armstrong");
	}
	getch();
}