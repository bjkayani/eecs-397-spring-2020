#include "student.h"
#include <iostream>

Student::Student(int id_, std::string name_, int gradYear_, std::string major_, float gpa_) : Person(id_, name_) {
	gradYear = gradYear_;
	major = major_;
	gpa = gpa_;
}

Student::Student() : Person() {
	gradYear = -1;
	major = "";
	gpa = -1;
}

int Student::getGradYear() {
	return gradYear;
};

std::string Student::getMajor() {
	return major;
};

float Student::getGpa() {
	return gpa;
};

std::string Student::printStudent() {
	std::string studentString;
	studentString = std::to_string(getId()) + ":  ";
	studentString = studentString + getName() + ".  Class of ";
	studentString = studentString + std::to_string(getGradYear()) + ".  Majoring in ";
	studentString = studentString + getMajor() + ".  GPA = ";
	studentString = studentString + std::to_string(getGpa()) + ".\n";
	return studentString;
}