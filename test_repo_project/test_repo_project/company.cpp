#include "company.h"
#include<iostream>
using namespace std;
void company::addDepartment()
{
	int depertmentId;
	string name, manager_name;

	cout << "please enter the department id " << endl;
	cin  >> departmentId;
	cout << "please enter the department name " << endl;
	cin  >> name;
	cout << "please enter the manager name" << endl;
	cin  >> manager_name;

	Depertment depertment;
	depertment.setDepertmentID(depertmentId);
	depertment.setName(name);
	depertment > setManager_name(manager_name);

	depertments[numberOfDepertments] = depertment;
	nimberOfDepertments++;
}
void Company::addEmployee()

{
	int depertment, age;
	string name;
	float salary;
	cout << "please enter the employee name" << endl;
	cin >> name;
	cout << "please enter the salary " << endl;
	cin >> salary;
	cout << "please enter the age" << endl;
	cin >> age;
	cout << "please enter the depertment id" << endl;
	cin >> depertment id;

	Employee employee;
	employee.set_Name(name);
	employee.set_Age(age);
	employee.set_departmentID(departmentID);
	employee.set_salary(salary);

	employees[numberOfEmployees] = employee;
	numberOfEmployees++;
}
void Company::changeDepartmentOfEmployee()
}
  int departmentID;
    cout << "please enter the employee name" << endl;
   cin >> employeeName;
   cout << "please enter the departmentID" << endl;
   cin >> departmentID;
   for (int i = 0; i < numberOfEmployees; i++)
   {
	   if (employees[i].getName() == employeeName)
	   {
		   employees[i].setDepartmentID(departmentID)
			   break;
	   }
   }
}
void Company::printReport()
{
	for(int i=0;i<numberOfDepartments;i++)
	{