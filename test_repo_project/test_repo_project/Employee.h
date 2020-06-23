#pragma once
#include<string>
#include<iostream>
using namespace std;
class Employee
{
private:
	string name;
	float salary;
	int departmentID;
	int age;
public:
	void set_name(string n);
	string get_name();
	void set_salary(float s);
	float get_salary();
	void set_departmentID(int id);
	int get_departmentID();
};


