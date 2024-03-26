#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Define the Timetable type
using TimeSlot = pair<string, string>;
using Timetable = map<TimeSlot, vector<Course>>;

// Define the Course class
class Course {
private:
    int id;
    string name;
    Teacher* teacher;
    Room* room;
public:
    Course(int i, string nam, Teacher* other, Room* rooom) : id(i), name(nam), teacher(other), room(rooom) {}

    string getName() const {
        return name;
    }
};

// Define the Time_table class
class Time_table {
private:
    Timetable timetable;

public:
    Time_table() {}

    void addCourse(const Course& course, const TimeSlot& timeSlot) {
        timetable[timeSlot].push_back(course);
    }

    const Timetable& getTimetable() const {
        return timetable;
    }
};

// Define the Teacher class
class Teacher {
private:
    int id;
    string name;
    Time_table* teacherTimetable;

public:
    Teacher(int i, string nam) : id(i), name(nam) {}

    string getName() const {
        return name;
    }
};

// Define the Student class
class Student {
private:
    int id;
    string name;
    Time_table* studentTimetable;

public:
    Student(int i, string nam) : id(i), name(nam) {}

    string getName() const {
        return name;
    }
};

// Define the Room class
class Room {
private:
    string name;
    Time_table* roomTimetable;

public:
    Room(string nam) : name(nam) {}

    string getName() const {
        return name;
    }
};

// Define the UniversitySystem class
class UniversitySystem {
private:
    vector<Teacher> teachers;
    vector<Student> students;
    vector<Room> rooms;
    vector<Course> courses;
    Time_table timetable;

public:
    void addTeacher(const Teacher& teacher) {
        teachers.push_back(teacher);
    }

    void addStudent(const Student& student) {
        students.push_back(student);
    }

    void addCourse(const Course& course) {
        courses.push_back(course);
    }

    void addRoom(const Room& room) {
        rooms.push_back(room);
    }

    void generateTimetable() {
        // For simplicity, let's generate a sample timetable
        TimeSlot slot1 = make_pair("8:30", "Monday");
        TimeSlot slot2 = make_pair("10:00", "Wednesday");
        TimeSlot slot3 = make_pair("13:00", "Friday");

        for (const auto& course : courses) {
            timetable.addCourse(course, slot1);
            timetable.addCourse(course, slot2);
            timetable.addCourse(course, slot3);
        }
    }

    void displayTeacherTimetable(const Teacher& teacher) {
        cout << "Timetable for Teacher: " << teacher.getName() << endl;
        const Timetable& teacherTimetable = timetable.getTimetable();

        for (const auto& slot_courses : teacherTimetable) {
            for (const auto& course : slot_courses.second) {
                if (course.getName() == teacher.getName()) {
                    cout << "Time: " << slot_courses.first.first << " Day: " << slot_courses.first.second << " Course: " << course.getName() << endl;
                }
            }
        }
    }

    void displayStudentTimetable(const Student& student) {
        cout << "Timetable for Student: " << student.getName() << endl;
        const Timetable& studentTimetable = timetable.getTimetable();

        for (const auto& slot_courses : studentTimetable) {
            for (const auto& course : slot_courses.second) {
                cout << "Time: " << slot_courses.first.first << " Day: " << slot_courses.first.second << " Course: " << course.getName() << endl;
            }
        }
    }

    void displayRoomTimetable(const Room& room) {
        cout << "Timetable for Room: " << room.getName() << endl;
        const Timetable& roomTimetable = timetable.getTimetable();

        for (const auto& slot_courses : roomTimetable) {
            for (const auto& course : slot_courses.second) {
                if (course.getName() == room.getName()) {
                    cout << "Time: " << slot_courses.first.first << " Day: " << slot_courses.first.second << " Course: " << course.getName() << endl;
                }
            }
        }
    }
};

int main() {
    UniversitySystem uniSystem;

    // Populate teachers, students, rooms, and courses
    Teacher teacher1(1, "John");
    Teacher teacher2(2, "Alice");
    uniSystem.addTeacher(teacher1);
    uniSystem.addTeacher(teacher2);

    Student student1(1, "Bob");
    Student student2(2, "Emma");
    uniSystem.addStudent(student1);
    uniSystem.addStudent(student2);

    Room room1("Room 101");
    Room room2("Room 102");
    uniSystem.addRoom(room1);
    uniSystem.addRoom(room2);

    Course course1(1, "Math", &teacher1, &room1);
    Course course2(2, "Science", &teacher2, &room2);
    uniSystem.addCourse(course1);
    uniSystem.addCourse(course2);

    // Generate and display timetables
    uniSystem.generateTimetable();
    uniSystem.displayTeacherTimetable(teacher1);
    uniSystem.displayStudentTimetable(student2);
    uniSystem.displayRoomTimetable(room2);

    return 0;
}
