#include<stdio.h>
#include<conio.h>
void main()
{
    float s,b,ns;
    clrscr();

    printf("\nEnter Salary:");
    scanf("%f",&s);

    b = s*10/100;
    ns =s+b;

    printf("\nSalary is:%9.2f,",s);
    printf("\nBonus is:%9.2f",b);
    printf("\n	===============");
    printf("\nNet Salary is:%9.2f",ns);
    getch();
}