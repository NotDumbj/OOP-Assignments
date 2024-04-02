#include "teacher.h"

Teacher::Teacher() {}
Teacher::Teacher(std::string name, std::string subject) : name(name), subject(subject) {}

std::string Teacher::getName() const {
	return name;
}

std::string Teacher::getSubject() const {
	return subject;
}

