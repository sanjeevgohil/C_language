#include<stdio.h>
#include<conio.h>
#define size 10

int queue[size],r=-1,f=-1;

void push(int no);
void pop(void);
void peep(void);


void main()
{
	int ch,no;
	while(1)
	{
		clrscr();
		printf("\n\t\t C I R C U L A R Q U E U E - O P E R A T I O N \n");

		printf("\n1.	Insert");
		printf("\n2.	Remove");
		printf("\n3.	Display");
		printf("\n4.	Exit");
		printf("\n\n\tEnter Your Choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				printf("\nEnter Number:");
				scanf("%d",&no);
				push(no);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			case 4:
				printf("\nGood Bye..");
				getch();
				goto END;
			default:
				printf("\nWrong Choice...Try Again...");
		}
	}
	END:
}
void push(int no)
{
	if(r == size-1 && f == 0)
	{
		printf("\nQueue is Overfolw");
	}
	else
	{
		if(f == -1)
		{
			f++;
			r++;
		}
		else if(r == size-1)
		{
			r=0;
		}
		else
		{
			r++;
		}
		queue[r]=no;
		printf("\nElement Inserted");
	}
	getch();
}
void pop(void)
{
	if(r == -1)
	{
		printf("\nQueue is Empty");
	}
	else if(f == r)
	{
		f = -1;
		r = -1;
	}
	else if(f == size-1)
	{
		f = 0;
	}
	else
	{
		f++;
	}
}
void peep(void)
{
	int i;
	if(f == -1)
	{
		printf("\nQueue is Empty...");
	}
	else
	{
		if(f <= r)
		{
			for(i=f;i<=r;i++)
			{
				printf("%d",queue[i]);
			}
		}
		else
		{
			printf("\n");
			for(i=f;i<=size-1;i++)
			{
				printf("%d->",queue[i]);
			}
			for(i=0;i<=r;i++)
			{
				printf("%d->",queue[i]);
			}
		}
	}
	getch();
}