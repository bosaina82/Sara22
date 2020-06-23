#include<iostream>
using namespace std;
int getoption()
{
	cout << "pleas select option from the following options" << endl;
	cout << "opion 1 to add department" << endl;
	cout << "opion 2 to add employee " << endl;
	cout << "opion 3 to change department of employee " << endl;
	cout << "opion 4 to print report of departments" << endl;
	cout << "opion  5 to close the program" << endl;
	int option;
	cin >> option;
	return option;
}
