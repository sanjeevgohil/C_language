# include <stdio.h>
# include <conio.h>
void main()
{
	int i,s=0,n;
	clrscr();
	printf("\nenter value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		s=s+i;
	}
	printf("\nsum is : %d",s);
	getch();
}
