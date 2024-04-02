#include "course.h"

#include <string>

Course::Course() {}
Course::Course(std::string course_Name) : courseName(course_Name) {}

std::string Course::getCourseName() const {
	return courseName;
}