#pragma once

#include "employee.h"

class Staff : public Employee {
public:
	Staff(int id_, std::string name_, int salary_, std::string department_, std::string title_);
	Staff();

	bool works_with(Employee & other_);
	std::string getTitle();
	std::string printStaff();

private:
	std::string title;
};