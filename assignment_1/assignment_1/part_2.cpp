/*#include <iostream>

using namespace std;

int main()
{
	double input_number;
	double epsilon;
	cout << "Enter number to find a square root of: \n";
	cin >> input_number;
	cout << "Enter the desired accuracy: \n";
	cin >> epsilon;
	if (epsilon <= 0)
		epsilon = 0.00001;
	double a = 0;
	double b = 0;
	float old_guess_sqrt;
	double guess_sqrt = abs(input_number)/2;
	double error = input_number - guess_sqrt;
	bool neg = input_number < 0;
	int count = 0;
	while (abs(error) > epsilon)
	{
		if (input_number == 0)
		{
			guess_sqrt = 0;
			break;
		}
		else
		{
			old_guess_sqrt = guess_sqrt;
			a = pow(guess_sqrt,2) - input_number;
			b = 2 * guess_sqrt;
			guess_sqrt = guess_sqrt - (a / b);
		}
		error = abs(guess_sqrt - old_guess_sqrt);
	}
	if (neg == false) 
	{
		cout.precision(10);
		cout << "Guess is: ";
		cout << guess_sqrt;
	}
	else
	{
		cout.precision(10);
		cout << "Guess is: ";
		cout << guess_sqrt;
		cout << "i";
	}

}*/