#include<stdio.h>
#include<conio.h>
void main()
{
	char nm[20];
	char c;
	int i=0,j;
	clrscr();
	printf("\nEnter String:");
	c = getchar();
	while(1)
	{
		if(c == '*')
		{
			nm[i]='\0';
			break;
		}
		nm[i]=c;
		i++;
		c=getchar();
	}
	printf("\nNumber of character is:%d",i);
	printf("\nString in copy:\n");
	for(j=0;j<=i;j++)
	{
		printf("%c",nm[j]);
	}
	getch();
}
