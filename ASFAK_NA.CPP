#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	clrscr();
	printf("\n Value Of A :");
	scanf("%f",&a);
	printf("\n Value Of B :");
	scanf("%f",&b);
	printf("\n Value Of C :");
	scanf("%f",&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("\nA Is Max");
		}

		else
		{
			printf("\nC Is Max");

		}
	}
	else
	{
		{
			printf("\nB Is Max");
		}
	}
	getch();
}









