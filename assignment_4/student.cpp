#include "student.h"

Student::Student(int studentID_in,
				std::string name_in,
				int gradYear_in,
				std::string major_in,
				int gpa_in) {

	studentID = studentID_in;
	name = name_in;
	gradYear = gradYear_in;
	major = major_in;
	gpa = gpa_in;
}