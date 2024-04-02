#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <tuple>



// Forward declaration of Room class
class Room;
class Teacher;
class Section;
class Course;

class Timetable {
private:
	static constexpr int NUM_DAYS = 5;
	static constexpr int NUM_PERIODS = 6;
	std::vector<std::vector<std::vector<std::tuple<std::string, std::string, std::string>>>> timetable; // 3D array for timetable
	std::map<std::string, Teacher> teachers;
	std::vector<Section> sections;
	std::map<std::string, Course> courses;
	std::map<std::string, Room> rooms;

public:

    Timetable();

    void setSlot(int day, int period, const std::vector<std::tuple<std::string, std::string, std::string>>& entries);

    std::vector<std::tuple<std::string, std::string, std::string>> getSlot(int day, int period) const;

    void addTeacher(const Teacher& teacher);

    Teacher& getTeachers(const std::string& teacherName);

    void addCourse(const Course& course);

    Course& getCourses(const std::string& courseName);

    void addRoom(const Room& room);

    Room& getRooms(const std::string& roomName);

    void addSection(const Section& section);

    Section& Timetable::getSectionss(const std::string& sectionName);

    const std::vector<Section>& getSections() const;
	// Filter timetable by section
    void filterBySection(const Section& section);
	// Filter timetable by teacher
    void filterByTeacher(const Teacher& teacher);

	// Filter timetable by room
    void filterByRoom(const Room& room);

	// Filter timetable by course
    void filterByCourse(const Course& course);

    static Timetable runitfinally();

    void storeOutputToFile(const std::string& output, const std::string& fileName);


private:
    std::string getDayName(int dayIndex) const;

    std::string getTimeSlot(int period) const;
};

