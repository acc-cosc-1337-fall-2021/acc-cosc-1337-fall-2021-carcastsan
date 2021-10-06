
//includes
#include "hwexpressions.h"

//constants
const double TAX_RATE = 6.75;

//write function code here

double get_sales_tax_amount(double meal_amount)
{
	return TAX_RATE * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * (tip_rate/100);
}

