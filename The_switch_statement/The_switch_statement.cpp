#include<iostream>
using namespace std;

int main()
{
	int choice = 0; // Store seection value here

	cout << endl
		<< "1 Boiled eggs" << endl
		<< "2 Fried eggs" << endl
		<< "3 Scrambled eggs" << endl
		<< "4 Coddled eggs" << endl
		<< endl << "Enter your selection number: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << endl << "Boils Some eggs. " << endl;
		break;
	case 2:
		cout << endl << "Fry some eggs." << endl;
		break;
	case 3:
		cout << endl << "Scramble some eggs." << endl;
		break;
	case 4:
		cout << endl << "Coddle some eggs." << endl;
		break;
	default:
		cout << endl << "You entered a wrong number." << endl;


	}
	return 0;
}