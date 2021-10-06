//write include statements
#include<iostream>
#include<iomanip>	
#include"hwexpressions.h"



//write namespace using statement for cout
using std::cin; using std::cout; using std::setw; using std::setprecision; using std::fixed;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter the total cost of your meal: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	
	cout<<"How much percent would you like to tip? (enter in 2 digit format with no decimal or symbol) ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << fixed;
	cout << setprecision(2);
	cout << "\n";
	cout << "Your Receipt\n";
    cout << setw(14) << "Meal amount: $" << setw(5) << meal_amount << "\n";
    cout << setw(14) << "Sales Tax: $" << setw(5) << tax_amount << "\n";
	cout << setw(14) << "Tip amount: $" << setw(5) << tip_amount << "\n";
	cout << setw(14) << "Total: $" << setw(5) << total << "\n";




	return 0;
}
