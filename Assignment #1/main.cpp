#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

// Forward declarations
class Teacher;
class Room;
class Section;

// Define the Timetable type
using TimeSlot = pair<string, string>;
class Course; // Forward declaration for Course class

using Timetable = map<TimeSlot, vector<Course>>;

class Course {
private:
    int id;
    string name;
    vector<Teacher*> teacher; // because there can be more than one teacher to teach a subject
    Room* room;
public:

    Course(int i, string nam) : id(i), name(nam) {}
    Course(int i, string nam, Teacher* other) : id(i), name(nam){
        teacher.push_back(other);
    }
    Course(int i, string nam, Teacher* other, Room* rooom) : id(i), name(nam), room(rooom) {
        teacher.push_back(other);
    }

    string getName() const {
        return name;
    }
};




class Teacher {
private:
    int id;
    string name;
    Course* course;
    vector<Section*> sections;
    vector<Room*> rooms;
    TimeTable* teacherTimetable;

public:
    Teacher(int i, string nam) : id(i), name(nam) {}
    Teacher(int i, string nam, Course& other) : id(i) , name(nam){
        course = &other;
    }

    string getName() const {
        return name;
    }
};

// Define the Student class
class Student {
private:
    int id;
    string name;
    Section* section;
    vector<Course*> courses;
    TimeTable* studentTimetable;

public:
    Student(int i, string nam) : id(i), name(nam) {}

    string getName() const {
        return name;
    }
};

// Define the Section class

class Section {
private:
    vector<Student> students;

};
// Define the Room class
class Room {
private:
    string name;
    TimeTable* roomTimetable;

public:
    Room(string nam) : name(nam) {}

    string getName() const {
        return name;
    }
};

class TimeTable {
private:
    Timetable timetable;

public:
    TimeTable() {}


    const string time8_9 = "8:30 - 9:30";
    const string time9_10 = "9:30 - 10:30";
    const string time10_11 = "10:30 - 11:30";
    const string time11_12 = "11:30 - 12:30";
    const string time12_1 = "12:30 - 1:30";
    const string time1_2 = "1:30 - 2:30";

    const string daym = "Monday";
    const string dayt = "Tuesday";
    const string dayw = "Wednesday";
    const string dayr = "Thursday";
    const string dayf = "Friday";
    const string days = "Saturday";
    const string dayu = "Sunday";
    void addCourse(const Course& course, const TimeSlot& timeSlot) {
        timetable[timeSlot].push_back(course);
    }

    const Timetable& getTimetable() const {
        return timetable;
    }


};
// Define the UniversitySystem class
class UniversitySystem {
private:
    vector<Teacher> teachers;
    vector<Student> students;
    vector<Room> rooms;
    vector<Course> courses;
    TimeTable timetable;

public:

    //predefined timetable
    UniversitySystem(){
        
        Course pcourse1(1, "OOP");
        Course pcourse2(2, "C++");
        Course pcourse3(3, "Java");
        Course pcourse4(4, "Python");
        Course pcourse5(5, "HTML");
        Course pcourse6(6, "CSS");
        Course pcourse7(7, "JavaScript");
        
        Teacher pteacher1(1, "Sir Raja", pcourse2);
        Teacher pteacher2(2, "Sir Waleed", pcourse3);
        Teacher pteacher3(3, "Sir Tamim", pcourse1);
        Teacher pteacher4(4, "Sir Adeel", pcourse4);
        Teacher pteacher5(5, "Sir Daniyal", pcourse5);
        Teacher pteacher6(6, "Maam Razia", pcourse6);
        Teacher pteacher7(7, "Sir Ahmad", pcourse7);
        Teacher pteacher8(8, "Maam Sadaf", pcourse7);

        Room room1("4-17");
        Room room2("4-18");
        Room room3("4-19");
        Room lab1("4-01");
        Room lab2("4-02");


}

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
        TimeSlot slot1 = make_pair("8:30 - 9:30", "Monday");
        TimeSlot slot2 = make_pair("9:30 - 10:30", "Wednesday");
        TimeSlot slot3 = make_pair("10:30 - 11:00", "Friday");

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
