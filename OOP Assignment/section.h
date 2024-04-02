#pragma once

#include<string>
#include<vector>

class Teacher;
class Room;  //forward declaration in .h and will include .h files in .cpp


class Section {
private:
	std::string sectionName;
	std::vector<Teacher> teachers;
	std::vector<std::string> courses;
	std::vector<Room> rooms;
	std::vector<int> studentRollNumbers;

public:
	Section();
	Section(std::string sectionName, const std::vector<Teacher>& teachers, const std::vector<std::string>& courses, const std::vector<Room>& rooms);

	std::string getSectionName() const;

	const std::vector<Teacher>& getTeachers() const;

	const std::vector<std::string>& getCourses() const;

	const std::vector<Room>& getRooms() const;

	void addStudent(int rollNumber);
};