//program to process a sequence of integer values in the range of 1 through 10 
//Madelyn Fawcett
//March 10 2026

#include <iostream>
#include <iomanip>
using namespace std;

//program to display count max min and average of integers 1-10
int main()
{

	//variables
	int maximum = 1, minimum = 10, num, total = 0;
	double count = 0, average;

	//get numbers
	cout << "This is a program that will take integers between 1 and 10 and give you the min max and average.\n";
	cout << "Enter an integer (0 to quit): ";
	cin >> num;

	//input validation
	while (num < 0 || num > 10)
	{
		cout << "Please enter a valid number (1 - 10): ";
		cin >> num;
	}

	//while loop
	while (num != 0)
	{
		total += num;
		count++;
		if (num > maximum)
			maximum = num;
		if (num < minimum)
			minimum = num;
		cout << "Enter another integer (0 to quit): ";
		cin >> num;

		while (num < 0 || num >10)
		{
			cout << "Please enter a vailid number (1 - 10): ";
			cin >> num;
		}
	}


	//calculations
	average = total / count;

	// display min max average and count
	cout << endl;
	cout << endl;
	cout << "CountMin  Max  Average\n";
	cout << setprecision(5) << count;
	cout << setw(5) << minimum;
	cout << setw(5) << maximum;
	cout << setw(5) << "  " << average;


	return 0;
}

