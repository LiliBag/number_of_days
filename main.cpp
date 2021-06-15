/*Program that asks the user to enter the month and the year. 
The program should then display the number of days in that month. */

//By Lili Bagramyan

#include <iostream>

using namespace std;

int main() {
	int month, year;// declaring variables

	//get month and only allow range 1-12
	do {
		cout << "Please enter a month (1-12)" << endl;
		cin >> month;
	} while (month < 1 || month>12);

	cout << "Please enter the year: " << endl;
	cin >> year;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11)
		cout << "31 days" << endl;
	else if (month == 4 || month == 6 || month == 8 || month == 10)
		cout << "30 days" << endl;
	else if (month == 2)
	{
		if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		{
			cout << "29 days" << endl;
		}
		else
		{
			cout << "28 days" << endl;
		}
	}
	else
		cout << month << "is not a valid month" << endl;
	

	system("pause");
	return 0;
}
