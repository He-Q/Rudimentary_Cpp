#include<iostream>
using namespace std;

int main()
{
	long number = 0;
	cout << "Enter an integer less than 2 billion: ";
	cin >> number;

	cout << endl;

	if (number % 2L == 0)
	{
		cout << "Your number is even: "
			<< endl;
	}
	else {
		cout << "your number is odd: "
			<< endl;
	}
	return 0;
}