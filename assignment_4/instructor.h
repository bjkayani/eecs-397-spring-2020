#pragma once

#include <string>

class Instructor {
public:
	int instructorID;
	std::string name;
	std::string department;

	Instructor();

	Instructor(int instructorID_in,
			std::string name_in,
			std::string department_in);
};