# include <iostream.h>
# include <conio.h>

void main() {
	int nm;
	clrscr();
	cout << "\n Enter Number: ";
	cin >> nm;
	if((nm % 5 == 0) || (nm % 11 == 0)){
		cout << "\n Number is divisible by 5 & 11";
	} else {
		cout << "\n Number is not divisible by 5 & 11";
	}
	getch();
}