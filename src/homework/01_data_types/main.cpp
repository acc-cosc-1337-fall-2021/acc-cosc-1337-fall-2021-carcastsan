//write include statements
#include "data_types.h"
#include<iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;

	cout<<"Enter a number:";
	cin>>num;

	int result = multiply_numbers(num);

	

	return 0;
}
