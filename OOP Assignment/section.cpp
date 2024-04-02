#include "section.h"

#include "student.h"
#include "teacher.h"
#include "room.h"

Section::Section() {}
Section::Section(std::string sectionName, const std::vector<Teacher>& teachers, const std::vector<std::string>& courses, const std::vector<Room>& rooms)
	: sectionName(sectionName), teachers(teachers), courses(courses), rooms(rooms) {}

std::string Section::getSectionName() const {
	return sectionName;
}

const std::vector<Teacher>& Section::getTeachers() const {
	return teachers;
}

const std::vector<std::string>& Section::getCourses() const {
	return courses;
}

const std::vector<Room>& Section::getRooms() const {
	return rooms;
}

void Section::addStudent(int rollNumber) {
	studentRollNumbers.push_back(rollNumber);
}
