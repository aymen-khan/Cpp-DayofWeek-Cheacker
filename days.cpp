#include <iostream>
using namespace std;

int main() {
    int dayNum;
    cout << "Enter a number (1 = Monday, ..., 7 = Sunday): ";
    cin >> dayNum;

    // Print day of the week
    switch (dayNum) {
        case 1: cout << "Monday\n"; 
		break;
        case 2: cout << "Tuesday\n"; 
		break;
        case 3: cout << "Wednesday\n";
		 break;
        case 4: cout << "Thursday\n";
		 break;
        case 5: cout << "Friday\n";
		 break;
        case 6: cout << "Saturday\n";
		 break;
        case 7: cout << "Sunday\n"; 
		break;
        default:
            cout << "Invalid input. Please enter a number between 1 and 7.\n";
            return 1;
    }

    // Determine if it's a weekend or not
    if (dayNum == 6 || dayNum == 7) {
        cout << "It's the weekend!\n";
    }
	 else {
        cout << "It's not the weekend.\n";
    }

    return 0;
}

