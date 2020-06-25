#include<iostream>
#include<iomanip>

using namespace  std;

int main()
{
	int count = 0;
	cout << endl << "What upper limit would you like?";
	cin >> count;

	cout << endl
		<< "integer"
		<< "     sum"
		<< "       factorial"
		<< endl;

	for (long n = 1,  sum = 0,  factorial = 1; n <= count; n++)
	{
		sum += n;
		factorial *= n;
		cout << setw(4) << n << "   "
			<< setw(7) << sum << "  "
			<< setw(15) << factorial
			<< endl;
	}
	return 0;
}