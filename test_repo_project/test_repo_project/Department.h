#pragma once
#include <string>
#include<iostream>
using namespace std;
class Department
{
private:
	string name;
	int departmentID;
	string manger_Name;
public:
	void set_name(string n);
	string get_name();
	void set_departmentID(int id);
	int get_departmentID();
	void set_managerName(string mn);
	string get_managerName();

};