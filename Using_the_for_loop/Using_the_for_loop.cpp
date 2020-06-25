#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	 
	int count{0};
	int sum{ 0 };

	cout << "How many integers do you want to sum? ";
	cin >> count;

	for (int i = 0; i <= count; i++)
	{
		cout << "i" << i<<"  "<<"sum: " << sum; 
		sum += i;
		cout << endl;
		//sum = sum + i;
		cout << "After calcaulation: " << endl;
		cout << "sum: " << sum;
		cout<<endl;
	}
	cout << endl
		<< "The sum of the integers from 1 to " << count << " is " << sum
		<<endl;
}