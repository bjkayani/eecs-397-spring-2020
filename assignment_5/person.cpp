#include "person.h"

Person::Person(int id_, std::string name_) {
	id = id_;
	name = name_;
}

Person::Person() {
	id = -1;
	name = "";
}

int Person::getId() {
	return id;
}

std::string Person::getName() {
	return name;
}
