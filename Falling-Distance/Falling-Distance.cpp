// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 10/22/19

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double fallingTime (double seconds) {
	double distanceCalculation;

	distanceCalculation = 0.5 * 9.8 * (seconds * seconds);

	return distanceCalculation;
}

int main()
{
	bool isRunning = true;
	double distance;

	cout << fixed << setprecision(2);

	do {

		int seconds = 1;

		cout << "Seconds:           Distance:" << endl << "=============================" << endl;

		do {
			distance = fallingTime(seconds);

			cout << setw(20) << left << seconds << right << distance << right << " meters" << endl;

			seconds += 1;
		} while (seconds <= 10);
		

		bool userConfirm = false;
		string userInput;
		while (userConfirm == false) {
			cout << "Would you like to run the program again? (Y/N): ";
			cin >> userInput;

			if (userInput == "Y" || userInput == "y") {
				userConfirm = true;
			}
			else if (userInput == "N" || userInput == "n") {
				isRunning = false;
				userConfirm = true;
			}
			else {
				cout << "Please enter a valid selection." << endl;
			}
		}
	} while (isRunning);
}
