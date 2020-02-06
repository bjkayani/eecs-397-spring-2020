// In class excercise for EECS 397

#include <iostream>

using namespace std;

int main()
{
	float x;
	cout << "Enter number to find a square root of: \n";
	cin >> x;

	float r = 0;
	float guess = abs(x) / 2;
	bool neg = x < 0;
	for (int n = 1; n <= 100; n++)
	{
		if (x == 0)
		{
			guess = 0;
			break;
		}
		r = abs(x) / guess;
		guess = (guess + r) / 2;

	}
	if (neg == false) {
		cout << "Guess is: ";
		cout << guess;
	}
	else
	{
		cout << "Guess is: ";
		cout << guess;
		cout << "i";
	}
	
}