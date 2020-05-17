#pragma once
#include "person.h"

class Student : public Person {
public:
	Student(int id_, std::string name_, int gradYear_, std::string major_, float gpa_);
	Student();

	int getGradYear();
	std::string getMajor();
	float getGpa();
	std::string printStudent();

private:
	int gradYear;
	std::string major;
	float gpa;
};