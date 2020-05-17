#pragma once
#include <iostream>
#include <vector>

#include "staff.h"
#include "faculty.h"
#include "student.h"
#include "researchassistant.h"


class Administrator : Faculty, Staff {
public:
	Administrator(std::string department_, int salary_, int id_, std::string name_);

	void addStudent(const Student & student_);
	void addStaff(const Staff & staff_);
	void addResearcher(const ResearchAssistant & researcher_);
	void addFaculty(const Faculty & faculty_);
	std::string print();

private:
	std::vector<Student> studentList;
	std::vector<Staff> staffList;
	std::vector<Faculty> facultyList;
	std::vector<ResearchAssistant> researcherList;
};