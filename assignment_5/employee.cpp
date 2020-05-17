#include "employee.h"

Employee::Employee(int id_, std::string name_, int salary_, std::string department_) : Person(id_, name_) {
	salary = salary_;
	department = department_;

}

Employee::Employee() : Person() {
	salary = -1;
	department = "";

}

int Employee::getSalary() {
	return salary;
};

std::string Employee::getDepartment() {
	return department;
};

bool Employee::works_with(Employee& other_) {
	if (other_.getDepartment() == getDepartment()) {
		return true;
	}
	else {
		return false;
	}
}