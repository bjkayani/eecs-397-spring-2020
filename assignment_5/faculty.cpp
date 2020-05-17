#include "faculty.h"

Faculty::Faculty(int id_, std::string name_, int salary_, std::string department_, std::string position_, std::string research_) : Employee(id_, name_, salary_, department_) {
	position = position_;
	research = research_;
}

Faculty::Faculty() : Employee() {
	position = "";
	research = "";
}

std::string Faculty::getPosition() {
	return position;
};

std::string Faculty::getResearch() {
	return research;
};

bool Faculty::works_with(Employee& other_) {
	//true if other_.department = ""
	//true if other_.department and others research interest is the same
	if (other_.getDepartment() == "" || other_.getDepartment() == getDepartment()) {
		return true;
	}
	else {
		return false;
	}
}

std::string Faculty::printFaculty() {
	std::string facultyString;
	facultyString = std::to_string(getId()) + ":  ";
	facultyString = facultyString + getName() + ".  ";
	facultyString = facultyString + getPosition() + ".  Works in";
	facultyString = facultyString + getDepartment() + " for $";
	facultyString = facultyString + std::to_string(getSalary()) + ".  Studies ";
	facultyString = facultyString + getResearch() + ".\n";
	return facultyString;
}
