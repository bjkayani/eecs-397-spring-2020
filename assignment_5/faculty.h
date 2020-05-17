#pragma once

#include "employee.h"

class Faculty : public Employee {
public:
	Faculty(int id_, std::string name_, int salary_, std::string department_, std::string position_, std::string research_);
	Faculty();

	bool works_with(Employee& other_);
	std::string getPosition();
	std::string getResearch();
	std::string printFaculty();

private:
	std::string position;
	std::string research;
};