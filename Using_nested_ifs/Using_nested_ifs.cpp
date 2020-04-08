#include<iostream>
using namespace std;

int main()
{
	char letter = 0;
	cout << endl
		<< "Entering a letter: ";
	cin >> letter;

	cout << endl;
	
	if (letter >= 'A')			// Test for 'A' or larger
	{
		if (letter <= 'Z')		// Test for 'Z' or smaller
		{
			cout << "You entered an upper case letter: "
				<< endl;
			return 0;

		}
	}

	if (letter >= 'a')			// Test for 'A' or larger
	{
		if (letter <= 'z')		// Test for 'Z' or smaller
		{
			cout << "You entered an lower case letter: "
				<< endl;
			return 0;

		}
	}

	cout << "Tou did not enter a letter:" << endl;
	return 0;
}