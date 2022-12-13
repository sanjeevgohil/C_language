#include<stdio.h>
#include<conio.h>
struct stud
{
	int rno;
	char nm[20];
	int m1,m2,m3;          //member of structure
	int tot;
	float per;
};
void main()
{
	struct stud s; // s called as object
	clrscr();
	printf("\nEnter Roll No :");
	scanf("%d",&s.rno);
	fflush(stdin);
	printf("\nEnter Name :");
	gets(s.nm);
	printf("\nEnter First Sub Mark :");
	scanf("%d",&s.m1);
	printf("\nEnter Second Sub Mark :");
	scanf("%d",&s.m2);
	printf("\nEnter Third Sub Mark :");
	scanf("%d",&s.m3);

	s.tot= s.m1+s.m2+s.m3;
	s.per=(float)s.tot/3;

	printf("\nTotal Is %d",s.tot);
	printf("\nPer Is %.2f",s.per);
	getch();
}




