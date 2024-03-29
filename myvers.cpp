#include <iostream>
#include <fstream> // for file handling
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <cstdlib> // for rand()

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

struct TimeStruct {
    const vector<string> hours = { "8:30 - 9:30", "9:30 - 10:30", "10:30 - 11:30", "11:30 - 12:30", "12:30 - 1:30", "1:30 - 2:30" };
};

struct Week {
    const vector<string> day = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
};

class Course {
private:
    int id;
    string name;
    vector<Teacher*> teachers;
    Room* room;
    vector<Section*> sections;
public:
    Course(int i, string nam) : id(i), name(nam), room(nullptr) {}

    void addTeacher(Teacher* teacher) {
        teachers.push_back(teacher);
    }

    vector<Teacher*> getTeachers() {
        return teachers;
    }
    string getName() const {
        return name;
    }

    void addSection(Section* section) {
        sections.push_back(section);
    }


    const vector<Section*>& getSections() const {
        return sections;
    }
};

class Teacher {
private:
    int id;
    string name;
    vector<Section*> sections;
    vector<Course*> courses;
public:
    Teacher(int i, string nam) : id(i), name(nam) {}

    void addSection(Section* section) {
        sections.push_back(section);
    }

    void addCourse(Course* course) {
        courses.push_back(course);
    }

    string getName() const {
        return name;
    }

    const vector<Section*>& getSections() const {
        return sections;
    }
};

class Section {
private:
    char name;
    vector<Course*> courses;
public:
    Section(char nam) : name(nam) {}

    void addCourse(Course* course) {
        courses.push_back(course);
    }

    char getName() const {
        return name;
    }

    const vector<Course*>& getCourses() const {
        return courses;
    }
};

class Room {
private:
    string name;
public:
    Room(string nam) : name(nam) {}

    string getName() const {
        return name;
    }
};

class Timetable {
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
    vector<Section> sections;
    vector<Room> rooms;
    vector<Course> courses;
    Timetable timetable;

public:
    UniversitySystem() {
        // Add teachers
        teachers.emplace_back(1, "Teacher 1");
        teachers.emplace_back(2, "Teacher 2");
        teachers.emplace_back(3, "Teacher 3");
        teachers.emplace_back(4, "Teacher 4");
        teachers.emplace_back(5, "Teacher 5");
        teachers.emplace_back(6, "Teacher 6");
        teachers.emplace_back(7, "Teacher 7");
        teachers.emplace_back(8, "Teacher 8");

        // Add sections
        sections.emplace_back('A');
        sections.emplace_back('B');
        sections.emplace_back('C');
        sections.emplace_back('D');
        sections.emplace_back('E');

        // Ensure there are sections available
        if (sections.empty()) {
            cerr << "Error: No sections available to assign to teachers." << endl;
            return;
        }

        // Assign each teacher to two sections
        for (size_t i = 0; i < teachers.size(); ++i) {
            // Check if there are sections available
            if (sections.empty()) {
                cerr << "Error: No sections available to assign to teachers." << endl;
                return;
            }
            for (int j = 0; j < 2; ++j) {
                // Check if there are sections available
                if (sections.empty()) {
                    cerr << "Error: No sections available to assign to teachers." << endl;
                    return;
                }
                teachers[i].addSection(&sections[(i * 2 + j) % sections.size()]);
                // Add courses to the assigned sections if courses are available
                if (!courses.empty()) {
                    sections[(i * 2 + j) % sections.size()].addCourse(&courses[(i * 2 + j) % courses.size()]);
                }
            }
        }



        // Add courses
        courses.emplace_back(1, "Course 1");
        courses.emplace_back(2, "Course 2");
        courses.emplace_back(3, "Course 3");
        courses.emplace_back(4, "Course 4");
        courses.emplace_back(5, "Course 5");
        courses.emplace_back(6, "Course 6");
        courses.emplace_back(7, "Course 7");
        courses.emplace_back(8, "Course 8");

        // Assign teachers to courses
        for (auto& teacher : teachers) {
            for (auto& course : courses) {
                teacher.addCourse(&course);
                course.addTeacher(&teacher);
            }
        }

        // Add rooms
        rooms.emplace_back("Room 1");
        rooms.emplace_back("Room 2");
        rooms.emplace_back("Room 3");
        rooms.emplace_back("Room 4");
        rooms.emplace_back("Room 5");

        for (size_t i = 0; i < sections.size(); ++i) {
            // Assign each section to a course
            sections[i].addCourse(&courses[i % courses.size()]);

            // Assign each section to a teacher
            teachers[i % teachers.size()].addSection(&sections[i]);
        }

        // Generate timetable
        generateTimetable();
    }

    void generateTimetable() {
        vector<TimeSlot> timeslots;
        for (const auto& hour : TimeStruct().hours) {
            for (const auto& day : Week().day) {
                // Exclude Saturdays and Sundays
                if (day != "Saturday" && day != "Sunday") {
                    timeslots.push_back(make_pair(hour, day));
                }
            }
        }

        // Ensure courses, teachers, sections, and rooms are available
        if (courses.empty() || teachers.empty() || sections.empty() || rooms.empty()) {
            cerr << "Error: Insufficient data available to generate timetable." << endl;
            return;
        }

        // Generate timetable
        for (const auto& slot : timeslots) {
            // Check if any of the vectors are empty
            if (courses.empty() || teachers.empty() || rooms.empty() || sections.empty()) {
                cerr << "Error: Insufficient data available to generate timetable." << endl;
                return;
            }

            // Generate random indices within the bounds of the vectors
            int courseIndex = rand() % courses.size();
            int teacherIndex = rand() % teachers.size();
            int roomIndex = rand() % rooms.size();
            int sectionIndex = rand() % sections.size();

            Course& course = courses[courseIndex];
            Teacher& teacher = teachers[teacherIndex];
            Room& room = rooms[roomIndex];
            Section& section = sections[sectionIndex];

            // Add course, teacher, room, and section to the timetable
            timetable.addCourse(course, slot);
            timetable.addTeacher(teacher, slot);
            timetable.addRoom(room, slot);
            timetable.addSection(section, slot); // Add section to timetable

            // Ensure each section is assigned to at least one course
            course.addSection(&section);
            section.addCourse(&course);
        }
    }

    void displayTeacherTimetable(const Teacher& teacher) {
        const TeacherTimetable& teacherTimetable = timetable.getTeacherTimetable();
        cout << "Timetable for Teacher: " << teacher.getName() << ":" << endl;

        for (const auto& day : Week().day) {
            if (day == "Saturday" || day == "Sunday") {
                continue; // Skip Saturdays and Sundays
            }
            cout << "-------------" << endl;
            cout << day << endl;
            cout << "-------------" << endl;
            for (const auto& hour : TimeStruct().hours) {
                TimeSlot slot = make_pair(hour, day);
                const auto& slot_teachers = teacherTimetable.find(slot);
                if (slot_teachers != teacherTimetable.end()) {
                    for (const auto& t : slot_teachers->second) {
                        if (t.getName() == teacher.getName()) {
                            cout << hour << endl;
                            // Display section if available
                            const auto& sectionTimetable = timetable.getSectionTimetable();
                            auto sectionIt = sectionTimetable.find(slot);
                            if (sectionIt != sectionTimetable.end()) {
                                cout << "Section: ";
                                bool sectionPrinted = false;
                                for (const auto& sec : sectionIt->second) {
                                    for (const auto& s : t.getSections()) {
                                        if (s->getName() == sec.getName()) {
                                            cout << sec.getName() << ", ";
                                            sectionPrinted = true;
                                            break;
                                        }
                                    }
                                }
                                if (!sectionPrinted) {
                                    cout << "No section assigned";
                                }
                                cout << endl;
                            }
                            // Display course and room if available
                            const auto& courseTimetable = timetable.getCourseTimetable();
                            auto courseIt = courseTimetable.find(slot);
                            if (courseIt != courseTimetable.end()) {
                                cout << "Course: " << courseIt->second.front().getName() << endl;
                                const auto& roomTimetable = timetable.getRoomTimetable();
                                auto roomIt = roomTimetable.find(slot);
                                if (roomIt != roomTimetable.end()) {
                                    cout << "Room: " << roomIt->second.front().getName() << endl;
                                }
                            }
                            else {
                                cout << "No course assigned" << endl;
                            }
                            cout << endl;
                        }
                    }
                }
                else {
                    // Display cross for empty slot
                    cout << hour << endl;
                    cout << "X" << endl << endl;
                }
            }
        }
    }


    void displaySectionTimetable(const Section& section) {
        const SectionTimetable& sectionTimetable = timetable.getSectionTimetable();
        cout << "Timetable for Section " << section.getName() << ":" << endl;

        for (const auto& day : Week().day) {
            if (day == "Saturday" || day == "Sunday") {
                continue; // Skip Saturdays and Sundays
            }
            cout << "-------------" << endl;
            cout << day << endl;
            cout << "-------------" << endl;

            bool sectionPrinted = false; // Initialize to false

            for (const auto& hour : TimeStruct().hours) {
                TimeSlot slot = make_pair(hour, day);
                const auto& slot_sections = sectionTimetable.find(slot);

                if (slot_sections != sectionTimetable.end()) {
                    for (const auto& s : slot_sections->second) {
                        if (s.getName() == section.getName()) {
                            cout << hour << endl;

                            // Display teacher if available
                            const auto& teacherTimetable = timetable.getTeacherTimetable();
                            auto teacherIt = teacherTimetable.find(slot);
                            if (teacherIt != teacherTimetable.end()) {
                                cout << "Teacher: ";
                                bool teacherPrinted = false;
                                for (const auto& teacher : teacherIt->second) {
                                    for (const auto& sec : teacher.getSections()) {
                                        if (sec->getName() == section.getName()) {
                                            cout << teacher.getName() << ", ";
                                            teacherPrinted = true;
                                            break;
                                        }
                                    }
                                }
                                if (!teacherPrinted) {
                                    cout << "No teacher assigned";
                                }
                                cout << endl;
                            }

                            sectionPrinted = true; // Set sectionPrinted to true
                            break;
                        }
                    }
                }

                if (!sectionPrinted) { // Check if section was not printed
                    cout << hour << endl;
                    cout << "No section assigned" << endl;
                }
                cout << endl;
            }
        }
    }



    void displayRoomTimetable(const Room& room) {
        const RoomTimetable& roomTimetable = timetable.getRoomTimetable();
        cout << "Timetable for Room " << room.getName() << ":" << endl;

        for (const auto& day : Week().day) {
            if (day == "Saturday" || day == "Sunday") {
                continue; // Skip Saturdays and Sundays
            }
            cout << "-------------" << endl;
            cout << day << endl;
            cout << "-------------" << endl;
            for (const auto& hour : TimeStruct().hours) {
                TimeSlot slot = make_pair(hour, day);
                const auto& slot_rooms = roomTimetable.find(slot);
                if (slot_rooms != roomTimetable.end()) {
                    for (const auto& r : slot_rooms->second) {
                        if (r.getName() == room.getName()) {
                            cout << hour << endl;
                            cout << "Course: " << slot_rooms->second.front().getName() << endl;
                            // Display teacher and section if available
                            const auto& teacherTimetable = timetable.getTeacherTimetable();
                            auto teacherIt = teacherTimetable.find(slot);
                            if (teacherIt != teacherTimetable.end()) {
                                cout << "Teacher: " << teacherIt->second.front().getName() << endl;
                            }
                            const auto& sectionTimetable = timetable.getSectionTimetable();
                            auto sectionIt = sectionTimetable.find(slot);
                            if (sectionIt != sectionTimetable.end()) {
                                cout << "Section: ";
                                for (const auto& sec : sectionIt->second) {
                                    cout << sec.getName() << " ";
                                }
                                cout << endl;
                            }
                            cout << endl;
                        }
                    }
                }
                else {
                    // Display cross for empty slot
                    cout << hour << endl;
                    cout << "X" << endl << endl;
                }
            }
        }
    }

    void displayCourseTimetable(const Course& course) {
        const CourseTimetable& courseTimetable = timetable.getCourseTimetable();
        cout << "Timetable for Course " << course.getName() << ":" << endl;

        for (const auto& day : Week().day) {
            if (day == "Saturday" || day == "Sunday") {
                continue; // Skip Saturdays and Sundays
            }
            cout << "-------------" << endl;
            cout << day << endl;
            cout << "-------------" << endl;
            for (const auto& hour : TimeStruct().hours) {
                TimeSlot slot = make_pair(hour, day);
                const auto& slot_courses = courseTimetable.find(slot);
                if (slot_courses != courseTimetable.end()) {
                    for (const auto& c : slot_courses->second) {
                        if (c.getName() == course.getName()) {
                            cout << hour << endl;
                            // Display room, teacher, and section if available
                            const auto& roomTimetable = timetable.getRoomTimetable();
                            auto roomIt = roomTimetable.find(slot);
                            if (roomIt != roomTimetable.end()) {
                                cout << "Room: " << roomIt->second.front().getName() << endl;
                            }
                            const auto& teacherTimetable = timetable.getTeacherTimetable();
                            auto teacherIt = teacherTimetable.find(slot);
                            if (teacherIt != teacherTimetable.end()) {
                                cout << "Teacher: " << teacherIt->second.front().getName() << endl;
                            }
                            const auto& sectionTimetable = timetable.getSectionTimetable();
                            auto sectionIt = sectionTimetable.find(slot);
                            if (sectionIt != sectionTimetable.end()) {
                                cout << "Section: ";
                                for (const auto& sec : sectionIt->second) {
                                    // Access Section object's name correctly
                                    cout << sec.getName() << " ";
                                }
                                cout << endl;
                            }
                            cout << endl;
                        }
                    }
                }
                else {
                    // Display cross for empty slot
                    cout << hour << endl;
                    cout << "X" << endl << endl;
                }
            }
        }
    }

    // Function to write timetable to file
    void writeTimetableToFile(const string& filename) {
        ofstream outputFile(filename);
        if (!outputFile.is_open()) {
            cerr << "Error: Unable to open output file." << endl;
            return;
        }

        const TeacherTimetable& teacherTimetable = timetable.getTeacherTimetable();
        const SectionTimetable& sectionTimetable = timetable.getSectionTimetable();
        const CourseTimetable& courseTimetable = timetable.getCourseTimetable();
        const RoomTimetable& roomTimetable = timetable.getRoomTimetable();

        for (const auto& day : Week().day) {
            if (day == "Saturday" || day == "Sunday") {
                continue; // Skip Saturdays and Sundays
            }

            outputFile << "-------------" << endl;
            outputFile << day << endl;
            outputFile << "-------------" << endl;

            for (const auto& hour : TimeStruct().hours) {
                TimeSlot slot = make_pair(hour, day);

                // Teacher
                const auto& slot_teachers = teacherTimetable.find(slot);
                if (slot_teachers != teacherTimetable.end()) {
                    for (const auto& t : slot_teachers->second) {
                        outputFile << hour << endl;
                        outputFile << "Teacher: " << t.getName() << endl;

                        // Display section if available
                        const auto& slot_sections = sectionTimetable.find(slot);
                        if (slot_sections != sectionTimetable.end()) {
                            for (const auto& sec : slot_sections->second) {
                                for (const auto& s : t.getSections()) {
                                    if (s->getName() == sec.getName()) {
                                        outputFile << "Section: " << sec.getName() << endl;
                                        break;
                                    }
                                }
                            }
                        }

                        // Display course and room if available
                        const auto& slot_courses = courseTimetable.find(slot);
                        if (slot_courses != courseTimetable.end()) {
                            outputFile << "Course: " << slot_courses->second.front().getName() << endl;
                            const auto& slot_rooms = roomTimetable.find(slot);
                            if (slot_rooms != roomTimetable.end()) {
                                outputFile << "Room: " << slot_rooms->second.front().getName() << endl;
                            }
                        }
                        else {
                            outputFile << "No course assigned" << endl;
                        }

                        outputFile << endl;
                    }
                }
                else {
                    outputFile << hour << endl;
                    outputFile << "X" << endl << endl;
                }
            }
        }

        outputFile.close();
        cout << "Timetable has been written to " << filename << endl;
    }
};

int main() {
    UniversitySystem uniSystem;

    // Display timetable for a teacher
    Teacher teacher1(1, "Teacher 1");
    uniSystem.displayTeacherTimetable(teacher1);

    // Display timetable for a section
    Section section1('A');
    uniSystem.displaySectionTimetable(section1);

    // Display timetable for a room
    Room room1("Room 1");
    uniSystem.displayRoomTimetable(room1);

    // Display timetable for a course
    Course course1(1, "Course 1");
    uniSystem.displayCourseTimetable(course1);

    // Write timetable to file
    uniSystem.writeTimetableToFile("timetable.txt");

    return 0;
}
