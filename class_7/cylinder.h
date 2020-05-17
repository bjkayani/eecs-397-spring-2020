#pragma once

#include "circle.h"

class Cylinder : public Circle {

public:
	Cylinder(int = 0, int = 0, double = 0.0, double 0.0);

	void setHeight(double);
	double getHeight() const;

	double getArea() const;
	double getVolume() const;
	void print() const;

private:
	double height;
};