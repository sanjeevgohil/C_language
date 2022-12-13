#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	int i,vowels,consonants;
	i = vowels = consonants = 0;
	clrscr();

	printf("\n Please Enter Any String:");
	gets(str);

	while(str[i] != '\0')
	{
		if(str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'||
		str[i] == 'A' ||str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
		{
			vowels++;
		}
		else
		{
			consonants++;
		}
		i++;
	}
	printf("\n Number of vowels in this string = %d",vowels);
	printf("\n Number of consonants in this string = %d",consonants);

	getch();

}