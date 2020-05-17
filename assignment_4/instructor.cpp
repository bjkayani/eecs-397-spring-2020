#include "instructor.h"

Instructor::Instructor(int instructorID_in,
						std::string name_in,
						std::string department_in) {

	instructorID = instructorID_in;
	name = name_in;
	department = department_in;
}

Instructor::Instructor(){}