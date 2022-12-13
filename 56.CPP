#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char nm[100],nm1[100];
	int len;
	clrscr();
	printf("\nEnter Name :");
	gets(nm);

	printf("\n Name is :");
	puts(nm);

	len=strlen(nm);
	printf("\n string length is :%d",len);

	strcpy(nm1,nm);
	printf("\n copy string is :");
	puts(nm1);

	strrev(nm1);
	printf("\n reverse string is :");
	puts(nm1);

	getch();
}


