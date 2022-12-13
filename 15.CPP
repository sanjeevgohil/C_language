#include<stdio.h>
#include<conio.h>
void main()
{
	char nm[100];
	char c;
	int i=0;
	clrscr();
	printf("\nEnter About Your Self:");

	c = getchar();
	while(1)
	{
		if(c == '*')
		{
			nm[i]='0';
			break;
		}
		nm[i]=c;
		i++;
		c = getchar();
		printf("\n");
		puts(nm);
		getch();
	}
}