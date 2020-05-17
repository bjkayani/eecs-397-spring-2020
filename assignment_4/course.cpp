#include "course.h"
#include <iostream>

Course::Course(std::string title_in,
			std::string department_in,
			int courseNumber_in,
			std::string building_in,
			int roomNumber_in) {

	title = title_in;
	department = department_in;
	courseNumber = courseNumber_in;
	building = building_in;
	roomNumber = roomNumber_in;


	instructor = Instructor();
	studentList = std::vector<Student>();

}

void Course::addStudents(const std::vector<Student>& students_to_add) {
	for (Student i : students_to_add) {
		bool exists = false;
		for (Student j : studentList) {
			if (j.studentID == i.studentID) {
				exists = true;
			}
		}
		if (exists == false) {
			studentList.push_back(i);
		}
	}
}

bool Course::dropStudent(const Student& student_to_remove) {
	bool removed = false;
	for (int i = 0; i < studentList.size(); i++) { //iterating through student list
		if (studentList[i].studentID == student_to_remove.studentID) { //checking to see if ID matches
			studentList.erase(studentList.begin() + i); //removing student record from vector
			removed = true;
		}
	}
	return removed;
}

void Course::addInstructor(const Instructor& instructor_to_add) {
	instructor = instructor_to_add;
}

void Course::printStudents() {
	for (Student s : studentList) {
		std::cout << "Student Name: " << s.name;
		std::cout << " Student ID: " << s.studentID << std::endl;
	}
}