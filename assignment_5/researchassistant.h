#pragma once

#include "staff.h"
#include "student.h"

class ResearchAssistant : public Staff, public Student {
public:
	//staff research assistant
	ResearchAssistant(std::string area_, std::string title_, std::string department_, int salary_, int id_, std::string name_);
	//student research assistant
	ResearchAssistant(std::string area_, std::string major_, double gpa_, int gradYear_, int id_, std::string name_);
	std::string getArea();
private:
	std::string area;
};