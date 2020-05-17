#include "administrator.h"
#include <string>

Administrator::Administrator(std::string department_, int salary_, int id_, std::string name_) : 
					 Faculty(id_, name_, salary_, department_, "Department Administrator", department_), 
					 Staff(id_, name_, salary_, department_, "Department Assistant"){
	
	studentList = std::vector<Student>();
	staffList = std::vector<Staff>();
	researcherList = std::vector<ResearchAssistant>();
	facultyList = std::vector<Faculty>();

}

void Administrator::addFaculty(const Faculty & faculty_) {
	facultyList.push_back(faculty_);
}

void Administrator::addResearcher(const ResearchAssistant & researcher_) {
	researcherList.push_back(researcher_);
}

void Administrator::addStudent(const Student & student_) {
	studentList.push_back(student_);
}

void Administrator::addStaff(const Staff & staff_) {
	staffList.push_back(staff_);
}

std::string Administrator::print() {
	std::string studentString = "  Students:";
	studentString = studentString + "\n";

	for (Student i : studentList) {
		studentString = studentString + i.printStudent();
	}

	std::string staffString = "  Staff:";
	staffString = staffString + "\n";

	for (Staff i : staffList) {
		staffString = staffString + i.printStaff();
	}
	std::string facultyString = "  Faculty:";
	facultyString = facultyString + "\n";

	for (Faculty i : facultyList) {
		facultyString = facultyString + i.printFaculty();
	}
	
	std::string researchString = "  Research Assistants:";
	researchString = researchString + "\n";

	for (ResearchAssistant i : researcherList) {
		//if RA is a student
		if (i.getGpa() != -1) {
			researchString = researchString + i.printStudent();
		}
		//if RA is a Staff member
		else {
			researchString = researchString + i.printStaff();
		}
	}
	return studentString + staffString + facultyString + researchString;
}
