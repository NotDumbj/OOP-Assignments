#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <iomanip>

using namespace std;

// Forward declarations
class Teacher;
class Room;
class Section;
class Course;
class Timetable;

// Define the Timetable types
using TimeSlot = pair<string, string>;
using CourseTimetable = map<TimeSlot, vector<Course>>;
using SectionTimetable = map<TimeSlot, vector<Section>>;
using TeacherTimetable = map<TimeSlot, vector<Teacher>>;
using RoomTimetable = map<TimeSlot, vector<Room>>;

struct TimeStruct { // Defining the time slots
    const vector<string> hours = {"8:30 - 9:30", "9:30 - 10:30", "10:30 - 11:30", "11:30 - 12:30", "12:30 - 1:30", "1:30 - 2:30"};
};

struct Week { // Defining the days of the week
    const vector<string> day = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
};

class Course {
private:
    int id;
    string name;
    vector<Teacher*> teachers;
    Room* room;
public:
    Course(int i, string nam) : id(i), name(nam), room(nullptr) {}

    void addTeacher(Teacher* teacher) {
        teachers.push_back(teacher);
    }

    string getName() const {
        return name;
    }
    void getid() const {
        return id;
    }
};

class Teacher {
private:
    int id;
    string name;
    vector<Course*> courses;
public:
    Teacher(int i, string nam) : id(i), name(nam) {}

    void addCourse(Course* course) {
        courses.push_back(course);
    }

    string getName() const {
        return name;
    }
    void getid() const { // making a function to return teacher id
        return id;
    }
};

class Student {
private:
    int id;
    string name;
    Section* section;
public:
    Student(int i, string nam) : id(i), name(nam), section(nullptr) {}

    string getName() const {
        return name;
    }
    void getid() const { // making a function to return student id
        return id;
    }
};

class Section {
private:
    char name;
    vector<Student*> students;
public:
    Section(char nam) : name(nam) {}

    void addStudent(Student* student) {
        students.push_back(student);
    }

    char getName() const {
        return name;
    }

};

class Room {   // Defining the room
private:
    string name;
public:
    Room(string nam) : name(nam) {}

    string getName() const {
        return name;
    }
};

class Timetable {   // Defining the timetable
private:
    CourseTimetable courseTimetable;
    SectionTimetable sectionTimetable;
    TeacherTimetable teacherTimetable;
    RoomTimetable roomTimetable;

public:
    Timetable() {}

    void addCourse(const Course& course, const TimeSlot& timeSlot) {
        courseTimetable[timeSlot].push_back(course);
    }

    void addSection(const Section& section, const TimeSlot& timeSlot) {
        sectionTimetable[timeSlot].push_back(section);
    }

    void addRoom(const Room& room, const TimeSlot& timeSlot) {
        roomTimetable[timeSlot].push_back(room);
    }

    void addTeacher(const Teacher& teacher, const TimeSlot& timeSlot) {
        teacherTimetable[timeSlot].push_back(teacher);
    }

    const CourseTimetable& getCourseTimetable() const {
        return courseTimetable;
    }

    const SectionTimetable& getSectionTimetable() const {
        return sectionTimetable;
    }

    const TeacherTimetable& getTeacherTimetable() const {
        return teacherTimetable;
    }

    const RoomTimetable& getRoomTimetable() const {
        return roomTimetable;
    }
};

class UniversitySystem {    
private:
    vector<Teacher> teachers;
    vector<Student> students;
    vector<Room> rooms;
    vector<Course> courses;
    Timetable timetable;

public:
    UniversitySystem() {
        // Add teachers
        Teacher teacher1(1, "Sir Raja");
        Teacher teacher2(2, "Sir Waleed");
        Teacher teacher3(3, "Sir Tamim");
        Teacher teacher4(4, "Sir Adeel");
        teachers = {teacher1, teacher2, teacher3, teacher4};

        // Add courses
        Course oop(1, "OOP");
        Course cpp(2, "C++");
        Course java(3, "Java");
        Course python(4, "Python");
        courses = {oop, cpp, java, python};

        // Assign teachers to courses
        cpp.addTeacher(&teacher1);
        java.addTeacher(&teacher2);
        oop.addTeacher(&teacher3);
        python.addTeacher(&teacher4);

        // Add rooms
        Room room1("4-17");
        Room room2("4-18");
        Room room3("4-19");
        rooms = {room1, room2, room3};

        // Generate timetable
        generateTimetable();
    }

    void generateTimetable() {
        vector<TimeSlot> timeslots;
        for (const auto& hour : TimeStruct().hours) {
            for (const auto& day : Week().day) {
                timeslots.push_back(make_pair(hour, day));
            }
        }

        for (const auto& slot : timeslots) {
            // For simplicity, assign courses, teachers, rooms randomly to timeslots
            int courseIndex = rand() % courses.size();
            int teacherIndex = rand() % teachers.size();
            int roomIndex = rand() % rooms.size();

            timetable.addCourse(courses[courseIndex], slot);
            timetable.addTeacher(teachers[teacherIndex], slot);
            timetable.addRoom(rooms[roomIndex], slot);
        }
    }

    void displayTimetable() {
        const CourseTimetable& courseTimetable = timetable.getCourseTimetable();
        const TeacherTimetable& teacherTimetable = timetable.getTeacherTimetable();
        const RoomTimetable& roomTimetable = timetable.getRoomTimetable();

        for (const auto& day : Week().day) {
            cout << "========" << endl;
            cout << "  " << day << endl;
            cout << "--------" << endl;

            for (const auto& hour : TimeStruct().hours) {
                cout << hour << endl;

                // Print course, teacher, room
                const TimeSlot currentSlot = make_pair(hour, day);

                // Print course, teacher, room for current slot
                if (courseTimetable.find(currentSlot) != courseTimetable.end()) {
                    const vector<Course>& courses = courseTimetable.at(currentSlot);
                    const vector<Teacher>& teachers = teacherTimetable.at(currentSlot);
                    const vector<Room>& rooms = roomTimetable.at(currentSlot);

                    for (size_t i =0; i < max({courses.size(), teachers.size(), rooms.size()}); ++i) {
                        // Print course
                        if (i < courses.size())
                            cout << setw(10) << left << courses[i].getName();
                        else
                            cout << setw(10) << left << " ";

                        // Print teacher
                        if (i < teachers.size())
                            cout << setw(10) << left << teachers[i].getName();
                        else
                            cout << setw(10) << left << " ";

                        // Print room
                        if (i < rooms.size())
                            cout << setw(10) << left << rooms[i].getName();
                        else
                            cout << setw(10) << left << " ";

                        cout << endl;
                    }
                } else {
                    cout << "No class" << endl;
                }

                // Add break points
                if (hour != TimeStruct().hours.back()) {
                    cout << "       \\ /" << endl;
                    cout << "        |" << endl;
                    cout << "       / \\" << endl;
                }
            }
        }
    }
};

int main() {
    UniversitySystem uniSystem;
    uniSystem.displayTimetable(); // Display the timetable
    return 0;
}
