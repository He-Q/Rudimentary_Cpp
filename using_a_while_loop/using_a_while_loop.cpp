// While loop to sum integers
#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	int sum = 0;
	while (i <= 10)
	{
		cout << i << endl;
		sum += i++;//sum = sum + i++;
	}
	cout << "sum is " << sum << endl;
}