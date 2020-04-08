#include<iostream>
using namespace std;

int main()
{
	char first = 0;
	char second = 0;

	// prompt for and read in the first character
	cout << "Enter a character: " << endl;
	cin >> first;

	// prompt for and read in the second character

	cout << " Enter a second character:" << endl;
	cin >> second;

	cout << "The value of the expreesion first < second is: "
		<< boolalpha        // manipulator boolalpha it shows numeric 0 and 1 in True And Fasle
		<< (first < second)
		<< endl
		<< "The value of the expreesion first == second is: "
		<< (first == second)
		<< endl;

	return 0;

}