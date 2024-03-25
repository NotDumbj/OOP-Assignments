#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

using TimeSlot = pair<string, string>;

class Course{};

using Timetable = map<TimeSlot, vector<Course>>;

class Teacher {
    private:
    int id;
    string name;
    Timetable *teacherTimetable;
    public:
    Teacher(int id, string name, Timetable *teacherTimetable) {
        this->id = id;  
        this->name = name;
        this->teacherTimetable = teacherTimetable;
    }    
};

class Student {
    private:
    int id;
    string name;
    Timetable *studentTimetable;
    public:
    Student(int id, string name, Timetable *studentTimetable) {
        this->id = id;  
        this->name = name;
        this->studentTimetable = studentTimetable;

        
    }

};

class Room {
    private:
    string name;
    Timetable *roomTimetable;
    public:
    Room(string name, Timetable *roomTimetable) {
        this->name = name;
        this->roomTimetable = roomTimetable;

        
    }
};

class Course {
    private:
    int id;
    string name;
    public:
    
};

class Time_table{
    private:
    Timetable timetable; //used a timetable namespace to name it different form the class Timetable
    public:
    Time_table();

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

    void removeTeacher() //creating husk of removeTeacher function
        {   

        }

    void addStudent(const Student& student) //creating husk of addStudent function
        {  
            students.push_back(student);
        }

    void removeStudent() // creating husk of removeStudent function
        {

        }

    void addRoom(const Course& course) // creating husk of addRoom function
        {  
            courses.push_back(course);
        }
    void removeRoom() // creating husk of removeRoom function
        {

        }

    void addCourse(const Room& room)   // creating husk of addCourse function
        {
            rooms.push_back(room);
        }    
    void removeCourse()  // creating husk of removeCourse function
        {

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