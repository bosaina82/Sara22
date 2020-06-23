#pragma once
#include"Employee.h"
#include"Department.h"
#include<string>
using namespace std;

class company
{
private:
	int numerOfEmployees, numerOfDeprtments;
	Employee  employees[100];
	Department  depratments[100];
public:
	void addDepartment();
	void addEmployee();
	void changeDeprtmentOfEmployee();
	void printReport();
	company();
};


