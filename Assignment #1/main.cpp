#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

using TimeSlot = pair<string, string>;

namespace time_table {
    using Timetable = map<TimeSlot, vector<Course> , string>;
}

class Teacher {
    private:
    int id;
    string name;
    Timetable *teacherTimetable;
    public:

};

class Student {
    private:
    int id;
    string name;
    Timetable *studentTimetable;
    public:
};

class Room {
    private:
    string name;
    Timetable *roomTimetable;
    public:
};

class Course {
    private:
    int id;
    string name;
    public:
};

class Timetable{
    private:
    time_table::Timetable timetable; //used a timetable namespace to name it different form the class Timetable
    public:
    Timetable();

};

class UniversitySystem {
    private:    
    vector<Teacher> teachers;
    vector<Student> students;
    vector<Room> rooms;
    vector<Course> courses;
    Timetable timetable;

    public:
    void addTeacher(const Teacher& teacher) {
        teachers.push_back(teacher);
    }


    void generateTimetable() {
        
    }

    void displayTeacherTimetable(const Teacher& teacher) {
    }

    void displaySectionTimetable(int section) {
    }

    void displayStudentTimetable(const Student& student) {
    }

    void displayRoomTimetable(const Room& room) {
    }

    void runQuery(const string& query) {
    }
};

int main() {


    UniversitySystem uniSystem;
    Course course;


    // Populate teachers, students, rooms, and courses
    // uniSystem.addTeacher(...);
    // uniSystem.addStudent(...);
    // uniSystem.addRoom(...);
    // uniSystem.addCourse(...);

    uniSystem.generateTimetable();

    // Perform queries and display timetables
    // uniSystem.displayTeacherTimetable(...);
    // uniSystem.displaySectionTimetable(...);
    // uniSystem.displayStudentTimetable(...);
    // uniSystem.displayRoomTimetable(...);
    // uniSystem.runQuery(...);

    return 0;
}
