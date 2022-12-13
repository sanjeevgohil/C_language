#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch,ans;
	clrscr();
	printf("\n enter first number:");
	scanf("%d",&a);
	printf("\n enter second number:");
	scanf("%d",&b);

	printf("\n ARITHMETIC OPERACTION");
	printf("\n1. addition");
	printf("\n2. sub");
	printf("\n3. multi");
	printf("\n4. dived");
	printf("\n\n\+ Enter choice:");
	scanf("%d", &ch);
	switch(ch)
      {
	case 1:
		ans=a+b;
		break;
	case 2:
		ans=a-b;
		break;
	case 3:
		ans=a*b;
		break;
	case 4:
		ans=a/b;
		break;
       defualt:
		ans=0;
     }
     printf("\nAns is:%d",ans);
     getch();
}