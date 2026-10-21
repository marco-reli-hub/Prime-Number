// 9. Write a code that determine whether the inputted number is a prime number or not.

#include <iostream>
using namespace std;

int main() 
{
	int number, prime = 1;

	cout << "Enter a number: ";
	cin >> number;

	if (number < 2) {
		prime = 0;
	}
	else {
		for (int flag = 2; flag * flag <= number; flag++) {
			if (number % flag == 0) {
				prime = 0;
				break;
			}
		}
	}

	if (prime) {
		cout << number << " is a prime number!" << endl;
	}
	else {
		cout << number << " is not a prime number!" << endl;
	}

	return 0;
}
