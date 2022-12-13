# include <stdio.h>
# include <conio.h>
void main()
{
	float km,mtr,cm,ft,inc;
	clrscr();
	printf("\nkm : ");
	scanf("%f",&km);

	mtr=km*1000;
	cm=mtr*100;
	ft=mtr/3;
	inc=ft*12;

	printf("\nmtr : %.2f",mtr);
	printf("\ncm : %.2f",cm);
	printf("\nft : %.2f",ft);
	printf("\ninc : %.2f",inc);
	getch();
}

