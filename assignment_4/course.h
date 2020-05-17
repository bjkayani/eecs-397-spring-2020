#pragma once

#include <string>
#include <vector>
#include "instructor.h"
#include "student.h"

class Course {
public:
	std::string title;
	std::string department;
	int courseNumber;
	std::string building;
	int roomNumber;

	Instructor instructor;
	std::vector<Student> studentList;

	Course(std::string title_in,
		std::string department_in,
		int courseNumber_in,
		std::string building_in,
		int roomNumber_in);

	void addStudents(const std::vector<Student> & students_to_add);
	bool dropStudent(const Student & student_to_remove);
	void addInstructor(const Instructor& instructor_to_add);
	void printStudents();
};