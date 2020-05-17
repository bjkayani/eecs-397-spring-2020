#include "staff.h"

Staff::Staff(int id_, std::string name_, int salary_, std::string department_, std::string title_) : Employee(id_, name_, salary_, department_) {
	title = title_;
}

Staff::Staff() : Employee() {
	title = "";
}

bool Staff::works_with(Employee& other_) {
	if (other_.getDepartment() == getDepartment()) {
		return true;
	}
	else {
		return false;
	}
}

std::string Staff::getTitle() {
	return title;
};

std::string Staff::printStaff() {
	std::string staffString;
	staffString = std::to_string(getId()) + ":  ";
	staffString = staffString + getName() + ".  ";
	staffString = staffString + getTitle() + ".  Works in ";
	staffString = staffString + getDepartment() + " for $";
	staffString = staffString + std::to_string(getSalary()) + ".\n";
	return staffString;
}