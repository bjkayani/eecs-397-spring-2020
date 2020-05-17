#pragma once
#include "person.h"

class Employee : public Person {
public:
	Employee(int id_, std::string name_, int salary_, std::string department_);
	Employee();
	int getSalary();
	std::string getDepartment();
	bool works_with(Employee& other_);

private:
	int salary;
	std::string department;
};

