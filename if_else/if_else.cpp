#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char letter = 'A';
	//cout << letter << endl;

	if (isalnum(letter))
	{
		cout << "It is a letter or a digit."
			<< endl;

	}
	else
		cout << "It is neither a letter nor a digit"
		<< endl;
}

