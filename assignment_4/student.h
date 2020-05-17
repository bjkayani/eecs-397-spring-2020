#pragma once

#include <string>

class Student {
public:
	int studentID;
	std::string name;
	int gradYear;
	std::string major;
	int gpa;

	Student(int studentID_in,
			std::string name_in,
			int gradYear_in,
			std::string major_in,
			int gpa_in );
};
