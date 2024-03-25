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
    Teacher(int id, string name, Timetable *teacherTimetable) {
        this->id = id;  
        this->name = name;
        this->teacherTimetable = teacherTimetable;
        void addTeacher() //creating husk of addTeacher function 
        {

        }
        void removeTeacher() //creating husk of removeTeacher function
        {   

        }
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

        void addStudent() //creating husk of addStudent function
        {  

        }
        void removeStudent() // creating husk of removeStudent function
        {

        }
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

        void addRoom() // creating husk of addRoom function
        {  

        }
        void removeRoom() // creating husk of removeRoom function
        {

        }
    }
};

class Course {
    private:
    int id;
    string name;
    public:
    void addCourse()   //
     {

     }    
    void removeCourse()  //
    {

    }
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
