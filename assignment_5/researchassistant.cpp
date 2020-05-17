#include "researchassistant.h"

ResearchAssistant::ResearchAssistant(std::string area_, std::string title_, std::string department_, int salary_, int id_, std::string name_) : Staff(id_, name_, salary_, department_, title_) {
	area = area_;

}

ResearchAssistant::ResearchAssistant(std::string area_, std::string major_, double gpa_, int gradYear_, int id_, std::string name_) : Student(id_, name_, gradYear_, major_, gpa_) {
	area = area_;
}

std::string ResearchAssistant::getArea() {
	return area;
}