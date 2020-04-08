#include<iostream>

int main()
{
	int age = 0;             // age of the borrower
	int income = 0;			// Income of the borrower
	int balance{ 0 };		// Current bank balance 

	//Get the basic data

	std::cout << "please enter your age in years: ";
	std::cin >> age;

	std::cout << "Please enter your annual income in dolllars: ";
	std::cin >> income;

	std::cout << "What is your current account balance in dollars: ";
	std::cin >> balance;

	if (age >= 21 && (income > 25000 || balance > 100000))
	{

		int loan = 0;
		if (2 * income < balance / 2)
			loan = 2 * income;
		else
			loan = balance / 2;
		std::cout << "you can borrow up to $"
			<< loan
			<< std::endl;
	}
	else
	{
		std::cout << "Sorry , er are out of cash today."
			<< std::endl;
	}
	return 0;


}