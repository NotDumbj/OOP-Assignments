#include "student.h"

Student::Student() : rollNumber(0) {}
Student::Student(std::string name, int rollNumber) : name(name), rollNumber(rollNumber) {}

std::string Student::getName() const {
	return name;
}

int Student::getRollNumber() const {
	return rollNumber;
}
