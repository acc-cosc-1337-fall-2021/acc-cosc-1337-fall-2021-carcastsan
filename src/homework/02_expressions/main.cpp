//write include statements
#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using namespace std;


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

	cout<<"Enter the total dollar amount of your meal: "
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	
	cout<<"How much would you like to tip? ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal amount: "





	return 0;
}
