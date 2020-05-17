#pragma once
#include <string>

class Person {
public:
	Person(int id_, std::string name_);
	Person();
	int getId();
	std::string getName();

private:
	int id;
	std::string name;
};