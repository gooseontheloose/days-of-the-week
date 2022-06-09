/*
CSIT 121
Dr. Straight

Days & Dates Exercise 2: Input a year between 1900 and 2100, the day
of the week for January 1 of that year, and a month for that year.
Output the day of the week for the first of that month.

Program written by:
*/

//Preprocessor Directives:
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Variable Declarations:
	int year; //year between 1900 and 2100
	int day1_for_jan; //integer between 0 and 6 representing the day
					  //of the week for January 1
	int month; //integer between 1 and 12 representing the month of the year
	int l = 0; //l is 0 unless year is a leap year and month > 2,
			   //in which case l is 1
	int day1_for_month; //integer between 0 and 6 representing the day
						//of the week for the first of month
	int m; //number to add to (mod 7) day1_for_jan to get day1_for_month
		   //in the case l = 0
	string day; //day of the week for the first of month

				//Prompt the user to input a year between 1900 and 2100.
	cout << "Enter a year between 1900 and 2100: ";
	cin >> year;
	cout << endl;

	//Prompt the user to input the integer representing the day of the week
	//for January 1 of year.
	cout << "Using 0 for Sunday, 1 for Monday, ..., 6 for Saturday, " << endl;
	cout << "enter the integer representing the day of the week for " << endl;
	cout << "January 1 of " << year << ": ";
	cin >> day1_for_jan;
	cout << endl;

	//Prompt the user to input the integer representing the month.
	cout << "Using 1 for January, 2 for February, ..., 12 for December, " << endl;
	cout << "enter the integer representing the month: ";
	cin >> month;
	cout << endl;

	//Check whether year is a leap year and month is greater than 2.
	//If so, assign 1 to l.
	if ((year % 4 == 0) && (month > 2)) l = 1;

	//Compute the value of m.
	switch (month)
	{
	case 1: m=0; break;
	case 2: m=3; break;
	case 3: m=3; break;
	case 4: m=6; break;
	case 5: m=1; break;
	case 6: m=4; break;
	case 7: m=6; break;
	case 8: m=2; break;
	case 9: m=5; break;
	case 10: m=0; break;
	case 11: m=3; break;
	case 12: m=5; break;
	default:
		cout << "Invalid month number.  Assume month is January.";

		cout << endl;
		m = 0;
		break;
	}
	//Compute and output the day of the week for the 1st of month.
	day1_for_month = (day1_for_jan + (m + l)) % 7;
	//cout << ;
	switch (day1_for_month)
	{
	case 0: cout << "Sunday."; break;
	case 1: cout << "Monday."; break;
	case 2: cout << "Tuesday."; break;
	case 3: cout << "Wednesday."; break;
	case 4: cout << "Thursday."; break;
	case 5: cout << "Friday."; break;
	case 6: cout << "Saturday."; break;
	};

	cout << endl;
	system("pause");
	return 0;
}