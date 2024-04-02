#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Forward declaration of Room class
class Room;

class Teacher {
private:
    std::string name;
    std::string subject;

public:
    Teacher() {}
    Teacher(std::string name, std::string subject) : name(name), subject(subject) {}

    std::string getName() const {
        return name;
    }

    std::string getSubject() const {
        return subject;
    }
};

class Section {
private:
    std::string sectionName;
    std::vector<Teacher> teachers;
    std::vector<std::string> courses;
    std::vector<Room> rooms;
    std::vector<int> studentRollNumbers;

public:
    Section() {}
    Section(std::string sectionName, const std::vector<Teacher>& teachers, const std::vector<std::string>& courses, const std::vector<Room>& rooms)
        : sectionName(sectionName), teachers(teachers), courses(courses), rooms(rooms) {}

    std::string getSectionName() const {
        return sectionName;
    }

    const std::vector<Teacher>& getTeachers() const {
        return teachers;
    }

    const std::vector<std::string>& getCourses() const {
        return courses;
    }

    const std::vector<Room>& getRooms() const {
        return rooms;
    }

    void addStudent(int rollNumber) {
        studentRollNumbers.push_back(rollNumber);
    }
};

class Student {
private:
    std::string name;
    int rollNumber;

public:
    Student() : rollNumber(0) {}
    Student(std::string name, int rollNumber) : name(name), rollNumber(rollNumber) {}

    std::string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

class Room {
private:
    std::string roomNumber;

public:
    Room() {}
    Room(std::string roomNumber) : roomNumber(roomNumber) {}

    std::string getRoomNumber() const {
        return roomNumber;
    }
};

class Course {
private:
    std::string courseName;

public:
    Course() {}
    Course(std::string courseName) : courseName(courseName) {}

    string getCourseName() const {
        return courseName;
    }
};

class Timetable {
private:
    static constexpr int NUM_DAYS = 5;
    static constexpr int NUM_PERIODS = 6;
    vector<vector<vector<tuple<string, string, string>>>> timetable; // 3D array for timetable
    map<string, Teacher> teachers;
    vector<Section> sections;
    map<string, Course> courses;
    map<string, Room> rooms;

public:

    Timetable() : timetable(NUM_DAYS, vector<vector<tuple<string, string, string>>>(NUM_PERIODS)) {}

    void setSlot(int day, int period, const vector<tuple<string, string, string>>& entries) {
        timetable[day][period] = entries;
    }

    vector<tuple<string, string, string>> getSlot(int day, int period) const {
        return timetable[day][period];
    }

    void addTeacher(const Teacher& teacher) {
        teachers.insert({ teacher.getName(), teacher });
    }

    Teacher& getTeachers(const string& teacherName) {
        auto it = teachers.find(teacherName);
        if (it != teachers.end()) {
            return it->second;
        }
        else {
            return teachers.begin()->second;
        }
    }

    void addCourse(const Course& course) {
        courses.insert({ course.getCourseName(), course });
    }

    Course& getCourses(const string& courseName) {
        auto it = courses.find(courseName);
        if (it != courses.end()) {
            return it->second;
        }
        else {
            return courses.begin()->second;
        }
    }

    void addRoom(const Room& room) {
        rooms.insert({ room.getRoomNumber(), room });
    }

    Room& getRooms(const string& roomName) {
        auto it = rooms.find(roomName);
        if (it != rooms.end()) {
            return it->second;
        }
        else {
            return rooms.begin()->second;
        }
    }

    void addSection(const Section& section) {
        sections.push_back(section);
    }

    const vector<Section>& getSections() const {
        return sections;
    }

    // Filter timetable by section
    void filterBySection(const Section& section) {
        cout << "Timetable for Section: " << section.getSectionName() << endl << endl;
        for (int i = 0; i < timetable.size(); ++i) {
            for (int j = 0; j < timetable[i].size(); ++j) {
                for (const auto& entry : timetable[i][j]) {
                    if (get<1>(entry) == section.getSectionName()) {
                        cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << get<0>(entry) << " - Room: " << get<2>(entry) << endl;
                    }
                }
            }
        }
    }

    // Filter timetable by teacher
    void filterByTeacher(const Teacher& teacher) {
        cout << "Timetable for Teacher: " << teacher.getName() << " (" << teacher.getSubject() << ")" << endl << endl;
        for (int i = 0; i < timetable.size(); ++i) {
            for (int j = 0; j < timetable[i].size(); ++j) {
                auto entries = getSlot(i, j);
                for (const auto& entry : entries) {
                    if (get<0>(entry) == teacher.getSubject()) {
                        cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << get<1>(entry) << " in " << get<2>(entry) << endl;
                    }
                }
            }
        }
    }

    // Filter timetable by room
    void filterByRoom(const Room& room) {
        cout << "Timetable for Room: " << room.getRoomNumber() << endl << endl;
        for (int i = 0; i < timetable.size(); ++i) {
            for (int j = 0; j < timetable[i].size(); ++j) {
                auto entries = getSlot(i, j);
                for (const auto& entry : entries) {
                    if (get<2>(entry) == room.getRoomNumber()) {
                        cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << get<0>(entry) << " in " << get<1>(entry) << endl;
                    }
                }
            }
        }
    }

    // Filter timetable by course
    void filterByCourse(const Course& course) {
        cout << "Timetable for Course: " << course.getCourseName() << endl << endl;
        for (int i = 0; i < timetable.size(); ++i) {
            for (int j = 0; j < timetable[i].size(); ++j) {
                auto entries = getSlot(i, j);
                for (const auto& entry : entries) {
                    if (get<0>(entry) == course.getCourseName()) {
                        cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << get<1>(entry) << " in " << get<2>(entry) << endl;
                    }
                }
            }
        }
    }

private:
    string getDayName(int dayIndex) const {
        switch (dayIndex) {
        case 0: return "Monday";
        case 1: return "Tuesday";
        case 2: return "Wednesday";
        case 3: return "Thursday";
        case 4: return "Friday";
        default: return "Invalid";
        }
    }

    string getTimeSlot(int period) const {
        switch (period) {
        case 0: return "08:00 - 09:30";
        case 1: return "09:45 - 11:15";
        case 2: return "11:30 - 01:00";
        case 3: return "01:15 - 02:45"; // Updated to include another slot
        case 4: return "03:00 - 04:30"; // Updated to include another slot
        default: return "Invalid";
        }
    }
};


int main() {
    // Create timetable object
    Timetable timetable;

    // Add teachers
    timetable.addTeacher(Teacher("Sir Tamim", "Object Oriented Programming"));
    timetable.addTeacher(Teacher("Sir Zubair Abbasi", "Linear Algebra"));
    timetable.addTeacher(Teacher("Maam Sadaf Khalid", "Discrete Structure"));
    timetable.addTeacher(Teacher("Sir Gulaam Qamar", "Effective Communication Skills"));
    timetable.addTeacher(Teacher("Dr Awais Majeed", "Introduction to Software Engineering"));
    timetable.addTeacher(Teacher("Sir Rahim Ullah", "Islamic Studies"));
    timetable.addTeacher(Teacher("Sir Waleed", "OOP Lab"));
    timetable.addTeacher(Teacher("Sir Abdul Waheed", "Understanding Quran"));

    // Add courses
    timetable.addCourse(Course("Object Oriented Programming"));
    timetable.addCourse(Course("Linear Algebra"));
    timetable.addCourse(Course("Discrete Structure"));
    timetable.addCourse(Course("Effective Communication Skills"));
    timetable.addCourse(Course("Introduction to Software Engineering"));
    timetable.addCourse(Course("Islamic Studies"));
    timetable.addCourse(Course("OOP Lab"));
    timetable.addCourse(Course("Understanding Quran"));

    // Add rooms
    timetable.addRoom(Room("Lab 4-01"));
    timetable.addRoom(Room("Lab 4-02"));
    timetable.addRoom(Room("Room 4-17"));
    timetable.addRoom(Room("Room 4-18"));
    timetable.addRoom(Room("Room 4-19"));

    vector<Teacher> allTeachers = {
        timetable.getTeachers("Sir Tamim"),
        timetable.getTeachers("Sir Zubair Abbasi"),
        timetable.getTeachers("Maam Sadaf Khalid"),
        timetable.getTeachers("Sir Gulaam Qamar"),
        timetable.getTeachers("Dr Awais Majeed"),
        timetable.getTeachers("Sir Rahim Ullah"),
        timetable.getTeachers("Sir Waleed"),
        timetable.getTeachers("Sir Abdul Waheed")
    };

    vector<string> allCourses = {
        timetable.getCourses("Object Oriented Programming").getCourseName(),
        timetable.getCourses("Linear Algebra").getCourseName(),
        timetable.getCourses("Discrete Structure").getCourseName(),
        timetable.getCourses("Effective Communication Skills").getCourseName(),
        timetable.getCourses("Introduction to Software Engineering").getCourseName(),
        timetable.getCourses("Islamic Studies").getCourseName(),
        timetable.getCourses("OOP Lab").getCourseName(),
        timetable.getCourses("Understanding Quran").getCourseName()
    };

    vector<Room> allRooms = {
        timetable.getRooms("Lab 4-01"),
        timetable.getRooms("Lab 4-02"),
        timetable.getRooms("Room 4-17"),
        timetable.getRooms("Room 4-18"),
        timetable.getRooms("Room 4-19")
    };

    Section sectionA("Section A", allTeachers, allCourses, allRooms);
    Section sectionB("Section B", allTeachers, allCourses, allRooms);
    Section sectionC("Section C", allTeachers, allCourses, allRooms);
    Section sectionD("Section D", allTeachers, allCourses, allRooms);
    Section sectionE("Section E", allTeachers, allCourses, allRooms);
    timetable.addSection(sectionA);
    timetable.addSection(sectionB);
    timetable.addSection(sectionC);
    timetable.addSection(sectionD);
    timetable.addSection(sectionE);

    // Assign timetable slots
    vector<tuple<string, string, string>> slot1 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),
    };
    vector<tuple<string, string, string>> slot2 = {
        make_tuple("Islamic Studies", "Section A", "Room 4-18"),
        make_tuple("OOP Lab", "Section B", "Lab 4-02"),
        make_tuple("Understanding Quran", "Section C", "Room 4-19"),
        make_tuple("Object Oriented Programming", "Section D", "Room 4-17"),
        make_tuple("Linear Algebra", "Section E", "Lab 4-01"),

    };
    vector<tuple<string, string, string>> slot3 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    vector<tuple<string, string, string>> slot4 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-01"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Lab 4-02"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-17"),

    };
    vector<tuple<string, string, string>> slot5 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        make_tuple("OOP Lab", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),

    };
    vector<tuple<string, string, string>> slot6 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        make_tuple("OOP Lab", "Section B", "Lab 4-01"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    vector<tuple<string, string, string>> slot7 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("OOP Lab", "Section E", "Lab 4-01"),

    };
    vector<tuple<string, string, string>> slot8 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Lab 4-02"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    vector<tuple<string, string, string>> slot9 = {
        make_tuple("Understanding Quran", "Section A", "Lab 4-01"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    vector<tuple<string, string, string>> slot10 = {
        make_tuple("Understanding Quran", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),

    };
    vector<tuple<string, string, string>> slot11 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot12 = {
        make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Islamic Studies", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot13 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot14 = {
        make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot15 = {
        make_tuple("Understanding Quran", "Section A", "Lab 4-01"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    vector<tuple<string, string, string>> slot16 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Understanding Quran", "Section E", "Room 4-18"),
    };
    vector<tuple<string, string, string>> slot17 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),

    };
    vector<tuple<string, string, string>> slot18 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("OOP Lab", "Section D", "Room 4-19"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot19 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Islamic Studies", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("OOP Lab", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot20 = {
        make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot21 = {
        make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        make_tuple("OOP Lab", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    vector<tuple<string, string, string>> slot22 = {
        make_tuple("Object Oriented Programming", "Section A", "Lab 4-01"),
        make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        make_tuple("OOP Lab", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    vector<tuple<string, string, string>> slot23 = {
        make_tuple("OOP Lab", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    vector<tuple<string, string, string>> slot24 = {
        make_tuple("OOP Lab", "Section A", "Room 4-19"),
        make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),
    };
    vector<tuple<string, string, string>> slot25 = {
        make_tuple("Islamic Studies", "Section A", "Room 4-18"),
        make_tuple("OOP Lab", "Section B", "Lab 4-02"),
        make_tuple("Understanding Quran", "Section C", "Room 4-19"),
        make_tuple("Introduction to Software Engineering", "Section D", "Room 4-17"),
        make_tuple("Linear Algebra", "Section E", "Lab 4-01"),
    };

    timetable.setSlot(0, 0, slot1);
    timetable.setSlot(0, 1, slot2);
    timetable.setSlot(0, 2, slot3);
    timetable.setSlot(0, 3, slot4);
    timetable.setSlot(0, 4, slot5);
    timetable.setSlot(1, 0, slot6);
    timetable.setSlot(1, 1, slot7);
    timetable.setSlot(1, 2, slot8);
    timetable.setSlot(1, 3, slot9);
    timetable.setSlot(1, 4, slot10);
    timetable.setSlot(2, 0, slot11);
    timetable.setSlot(2, 1, slot12);
    timetable.setSlot(2, 2, slot13);
    timetable.setSlot(2, 3, slot14);
    timetable.setSlot(2, 4, slot15);
    timetable.setSlot(3, 0, slot16);
    timetable.setSlot(3, 1, slot17);
    timetable.setSlot(3, 2, slot18);
    timetable.setSlot(3, 3, slot19);
    timetable.setSlot(3, 4, slot20);
    timetable.setSlot(4, 0, slot21);
    timetable.setSlot(4, 1, slot22);
    timetable.setSlot(4, 2, slot23);
    timetable.setSlot(4, 3, slot24);
    timetable.setSlot(4, 4, slot25);


    // Filter by teacher
    timetable.filterByTeacher(timetable.getTeachers("Sir Tamim"));
    std::cout << "\n\n\n";

    // Filter by section
    timetable.filterBySection(sectionA);
    std::cout << "\n\n\n";

    // Filter by room
    timetable.filterByRoom(timetable.getRooms("Lab 4-01"));
    std::cout << "\n\n\n";
    // Filter by course
    timetable.filterByCourse(timetable.getCourses("Discrete Structures"));

    return 0;
}
