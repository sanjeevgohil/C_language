#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1;
	char c;
	clrscr();
	printf("\n write file:\n");
	f1=fopen("fy21.txt","w");
	while((c=getchar())!=EOF)
	{
		putc(c,f1);
	}
	fclose(f1);
	getch();
}