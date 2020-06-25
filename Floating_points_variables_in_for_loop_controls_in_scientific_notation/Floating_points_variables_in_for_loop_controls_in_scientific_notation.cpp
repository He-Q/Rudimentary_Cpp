#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;

int main()
{
	const double pi = 3.14159265;
	cout << endl;

	for (double radius = 0.2; radius <= 3.0; radius += 0.2)
	{
		cout << "radius = "
			<< setprecision(numeric_limits<double>::digits10 + 1)
			<< scientific << radius
			<< "   area = "
			<< setw(10) << setprecision(6)
			<< fixed << pi * radius * radius
			<< endl;
	}
	return 0;
}