#ifndef REBUILD_H
#define REBUILD_H

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Data::SqlClient;


ref class Course;
ref class Room;
ref class Section;
ref class Student;
ref class Teacher;
ref class TimeSlot;
ref class TimeTableManager;
ref class Timetable;

public ref class Person {
    String^ name;
public:
    Person() {};
    Person(String^ n) : name(n) {}

    String^ getname() {
        return name;
    }

    void setname(String^ n) {
        name = n;
    }
};

public ref class Course {
    String^ name;
    Teacher^ teacher;
    List<Section^>^ sections;
public:
    Course() {
        sections = gcnew List<Section^>();
    }
    Course(String^ n) : name(n) {
        sections = gcnew List<Section^>();
    }

    void setName(String^ n) {
        name = n;
    }

    String^ getName() {
        return name;
    }

    void setteacher(Teacher^ teacher1) {
        teacher = teacher1;
    }

    void addSection(Section^ section) {
        sections->Add(section);
    }

    List<Section^>^ getSections() {
        return sections;
    }
    

    Teacher^ getTeacher() {
        return teacher;
    }
};

public ref class Section {
    String^ name;
    List<Student^>^ students;
    List<Course^>^ courses;
public:
    Section() {
        students = gcnew List<Student^>();
        courses = gcnew List<Course^>();
    }
    Section(String^ n) : name(n) {
        students = gcnew List<Student^>();
        courses = gcnew List<Course^>();
    }

    void addStudent(Student^ student) {
        students->Add(student);
    }

    void addCourse(Course^ course) {
        courses->Add(course);
        course->addSection(this);
    }

    String^ getName() {
        return name;
    }

    void setName(String^ n) {
        name = n;
    }

    List<Course^>^ getCourses() {
        return courses;
    }

    List<Student^>^ getStudents() {
        return students;
    }
};

public ref class Teacher : public Person {
    int id;
    Course^ course;
public:
    Teacher() {};
    Teacher(String^ n) : Person(n) {}
    Teacher(String^ n, int i) : Person(n), id(i) {}
    Teacher(String^ n, int i, Course^ acourse) : Person(n), id(i) {
        this->course = acourse;
        acourse->setteacher(this);
    }

    Course^ getcourse() {
        return course;
    }

    void setcourse(Course^ courseset) {
        course = courseset;
        courseset->setteacher(this);
    }

    void setId(int i) {
        id = i;
    }

    int getId() {
        return id;
    }
};

public ref class Student : public Person {
    int regno;
    Section^ section;
public:
    Student() {};
    Student(int r) : regno(r) {}
    Student(String^ n) : Person(n) {}
    Student(int r, String^ n) : regno(r), Person(n) {}
    Student(int r, String^ n, Section^ sec) : regno(r), Person(n) {
        setSection(sec);
    }

    void setSection(Section^ section1) {
        section = section1;
        section1->addStudent(this);
    }

    Section^ getSection() {
        return section;
    }

    void setRegno(int rgn) {
        regno = rgn;
    }

    int getRegno() {
        return regno;
    }
};

public ref class TimeSlot {
public:
    String^ day;
    String^ time;

    TimeSlot() {}
    TimeSlot(String^ d, String^ t) : day(d), time(t) {}
};

public ref class Room {
    String^ name;
    List<TimeSlot^>^ timeSlots;

public:
    Room() {
        timeSlots = gcnew List<TimeSlot^>();
    }
    Room(String^ n) : name(n) {
        timeSlots = gcnew List<TimeSlot^>();
    }

    void setName(String^ n) {
        name = n;
    }

    String^ getName() {
        return name;
    }

    void addTimeSlot(TimeSlot^ timeSlot) {
        timeSlots->Add(timeSlot);
    }

    List<TimeSlot^>^ getTimeSlots() {
        return timeSlots;
    }
};

public ref class Timetable {
public:
    static int num = 0;
    int id;
    TimeSlot^ timeslot;
    Room^ room;
    Section^ section;
    Course^ course;

    Timetable(TimeSlot^ ts, Room^ r, Section^ s, Course^ c) {
        timeslot = ts;
        room = r;
        section = s;
        course = c;
        id = num;
        num++;
    }

    property String^ Day {
        String^ get() { return timeslot->day; }
    }

    property String^ Time {
        String^ get() { return timeslot->time; }
    }

    property String^ RoomName {
        String^ get() { return room->getName(); }
    }

    property String^ SectionName {
        String^ get() { return section->getName(); }
    }

    property String^ CourseName {
        String^ get() { return course->getName(); }
    }

    int getId() {
        return id;
    }

    void setId(int i) {
        id = i;
    }
};

public ref class TimeTableManager {
protected:
    ref class Admin;
    ref class MainM;

    String^ conString = "Data Source=.;Initial Catalog=timetableDB;Integrated Security=True";
    SqlConnection^ sqlConn;

public:
    List<Student^>^ students;
    List<Teacher^>^ teachers;
    List<Course^>^ courses;
    List<Room^>^ rooms;
    List<Section^>^ sections;

    List<Timetable^>^ timetables;

    TimeTableManager() {
        students = gcnew List<Student^>();
        teachers = gcnew List<Teacher^>();
        courses = gcnew List<Course^>();
        rooms = gcnew List<Room^>();
        sections = gcnew List<Section^>();
        timetables = gcnew List<Timetable^>();

        sqlConn = gcnew SqlConnection(conString);
        sqlConn->Open();

        readAllDB();
        makeTimetable();
        Console::WriteLine("Program Started\n");
    }

    int makeTimetable() {
        try {
            String^ sqlCheck = "SELECT COUNT(*) FROM timetables";
            SqlCommand^ checkCommand = gcnew SqlCommand(sqlCheck, sqlConn);
            int timetableCount = (int)checkCommand->ExecuteScalar();

            if (timetableCount > 0) {
                return -1;
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred while checking the timetables: " + ex->Message);
            return -1;
        }

        if (courses->Count == 0 || teachers->Count == 0 || students->Count == 0 || rooms->Count == 0 || sections->Count == 0) {
            return -1;
        }

        srand((unsigned)time(0));
        array<String^>^ days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
        array<String^>^ times = { "09:00-10:00", "10:00-11:00", "11:00-12:00", "12:00-01:00", "01:00-02:00", "02:00-03:00", "03:00-04:00" };

        Dictionary<Room^, List<KeyValuePair<String^, String^>>^>^ roomAllocations = gcnew Dictionary<Room^, List<KeyValuePair<String^, String^>>^>();
        Dictionary<String^, int>^ courseDailyCount = gcnew Dictionary<String^, int>();

        for each (Section ^ sec in sections) {
            for each (Course ^ course in sec->getCourses()) {
                Room^ randomRoom = rooms[rand() % rooms->Count];

                String^ day;
                String^ time;

                while (true) {
                    day = days[rand() % days->Length];
                    time = times[rand() % times->Length];

                    List<KeyValuePair<String^, String^>>^ allocatedSlots;
                    if (!roomAllocations->TryGetValue(randomRoom, allocatedSlots)) {
                        allocatedSlots = gcnew List<KeyValuePair<String^, String^>>();
                        roomAllocations->Add(randomRoom, allocatedSlots);
                    }

                    bool slotAvailable = true;
                    for each (KeyValuePair<String^, String^> allocatedSlot in allocatedSlots) {
                        if (allocatedSlot.Key == day && allocatedSlot.Value == time) {
                            slotAvailable = false;
                            break;
                        }
                    }

                    String^ courseDayKey = course->getName() + "-" + day;
                    int courseCount = 0;
                    if (courseDailyCount->TryGetValue(courseDayKey, courseCount)) {
                        if (courseCount >= 4) {
                            slotAvailable = false;
                        }
                    }

                    if (slotAvailable) {
                        if (!courseDailyCount->TryGetValue(courseDayKey, courseCount)) {
                            courseDailyCount[courseDayKey] = 0;
                        }
                        courseDailyCount[courseDayKey]++;

                        TimeSlot^ timeSlot = gcnew TimeSlot(day, time);
                        randomRoom->addTimeSlot(timeSlot);
                        allocatedSlots->Add(KeyValuePair<String^, String^>(day, time));

                        Timetable^ timetableEntry = gcnew Timetable(timeSlot, randomRoom, sec, course);
                        timetables->Add(timetableEntry);

                        try {
                            String^ sqlInsert = "INSERT INTO timetables (section, course, room, day, time) VALUES (@section, @course, @room, @day, @time)";
                            SqlCommand^ insertCommand = gcnew SqlCommand(sqlInsert, sqlConn);
                            insertCommand->Parameters->AddWithValue("@section", sec->getName());
                            insertCommand->Parameters->AddWithValue("@course", course->getName());
                            insertCommand->Parameters->AddWithValue("@room", randomRoom->getName());
                            insertCommand->Parameters->AddWithValue("@day", day);
                            insertCommand->Parameters->AddWithValue("@time", time);
                            insertCommand->ExecuteNonQuery();
                        }
                        catch (Exception^ ex) {
                            Console::WriteLine("An error occurred while inserting the timetable: " + ex->Message);
                        }

                        break;
                    }
                }
            }
        }

        return 0;
    }


    bool addTimetableEntry(TimeSlot^ timeslot, Course^ course, Section^ section, Room^ room) {
        for each (Timetable ^ timetable in timetables) {
            if (timetable->room == room && timetable->timeslot->day == timeslot->day && timetable->timeslot->time == timeslot->time) {
                Console::WriteLine("Room clash detected.");
                return false;
            }

            if (timetable->course->getTeacher() == course->getTeacher() && timetable->timeslot->day == timeslot->day && timetable->timeslot->time == timeslot->time) {
                Console::WriteLine("Teacher clash detected.");
                return false;
            }
        }
        section->addCourse(course);
        room->addTimeSlot(timeslot);
        Timetable^ newTimetableEntry = gcnew Timetable(timeslot, room, section, course);
        timetables->Add(newTimetableEntry);
        Console::WriteLine("Timetable entry added successfully.");
        return true;
    }


    List<Timetable^>^ timetableByCourse(Course^ course) {
        List<Timetable^>^ timetableList = gcnew List<Timetable^>();
        for each (Timetable ^ tt in timetables) {
            if (tt->course->getName() == course->getName()) {
                timetableList->Add(tt);
            }
        }
        return timetableList;
    }

    List<Timetable^>^ timetableByTeacher(Teacher^ teacher) {
        List<Timetable^>^ timetableList = gcnew List<Timetable^>();
        for each (Timetable ^ tt in timetables) {
            if (tt->course->getTeacher()->getname() == teacher->getname()) {
                timetableList->Add(tt);
            }
        }
        return timetableList;
    }

    List<Timetable^>^ timetableByRoom(Room^ room) {
        List<Timetable^>^ timetableList = gcnew List<Timetable^>();
        for each (Timetable ^ tt in timetables) {
            if (tt->room->getName() == room->getName()) {
                timetableList->Add(tt);
            }
        }
        return timetableList;
    }

    List<Timetable^>^ timetableBySection(Section^ section) {
        List<Timetable^>^ timetableList = gcnew List<Timetable^>();
        for each (Timetable ^ tt in timetables) {
            if (tt->section->getName() == section->getName()) {
                timetableList->Add(tt);
            }
        }
        return timetableList;
    }

    void addStudent(Student^ student) {
        try {
            String^ sqlquery = "INSERT INTO students (regno, name, section) VALUES (@rn, @na, @se)";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@rn", student->getRegno());
            sqlcommand->Parameters->AddWithValue("@na", student->getname());
            sqlcommand->Parameters->AddWithValue("@se", student->getSection()->getName());

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Student added successfully.");

                students->Add(student);
            }
            else {
                Console::WriteLine("No rows were affected. Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }


    void addTeacher(Teacher^ teacher) {
        try {
            String^ sqlquery = "INSERT INTO teachers (id, name, course) VALUES (@id, @na, @co)";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@id", teacher->getId());
            sqlcommand->Parameters->AddWithValue("@na", teacher->getname());
            sqlcommand->Parameters->AddWithValue("@co", teacher->getcourse()->getName());

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Teacher added successfully.");

                teachers->Add(teacher);
            }
            else {
                Console::WriteLine("No rows were affected. Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void addCourse(Course^ course) {
        try {
            String^ sqlquery = "INSERT INTO courses (name) VALUES (@na)";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", course->getName());

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Course added successfully.");
                courses->Add(course);
            }
            else {
                Console::WriteLine("No rows were affected. Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void addRoom(Room^ room) {
        try {
            String^ sqlquery = "INSERT INTO rooms (name) VALUES (@na)";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", room->getName());

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Room added successfully.");
                rooms->Add(room);
            }
            else {
                Console::WriteLine("No rows were affected. Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void addSection(Section^ section) {
        try {
            String^ sqlquery = "INSERT INTO sections (name, sec_courses) VALUES (@na, @seco)";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", section->getName());
            String^ courses = "";
            for each (Course ^ co in section->getCourses()) {
                courses += co->getName() + ',';
            }
            sqlcommand->Parameters->AddWithValue("@seco", courses);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Section added successfully.");
                sections->Add(section);
            }
            else {
                Console::WriteLine("No rows were affected. Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    int addTimetable(Timetable^ timetable) {
        try {
            if (!addTimetableEntry(timetable->timeslot, timetable->course, timetable->section, timetable->room)) {
                Console::WriteLine("A clash deteched.. ");
                return -1;
            }
            else {

                String^ sqlquery = "INSERT INTO timetables (section, course, room, day, time) VALUES (@se, @co, @ro, @da, @ti)";
                SqlCommand^ command = gcnew SqlCommand(sqlquery, sqlConn);

                command->Parameters->AddWithValue("@se", timetable->section->getName());
                command->Parameters->AddWithValue("@co", timetable->course->getName());
                command->Parameters->AddWithValue("@ro", timetable->room->getName());
                command->Parameters->AddWithValue("@da", timetable->timeslot->day);
                command->Parameters->AddWithValue("@ti", timetable->timeslot->time);

                Console::WriteLine("ID: " + timetable->getId());
                Console::WriteLine("Section: " + timetable->section->getName());
                Console::WriteLine("Course: " + timetable->course->getName());
                Console::WriteLine("Room: " + timetable->room->getName());
                Console::WriteLine("Day: " + timetable->timeslot->day);
                Console::WriteLine("Time: " + timetable->timeslot->time);


                int rowsaffected = command->ExecuteNonQuery();

                if (rowsaffected > 0) {
                    Console::WriteLine("Timetable added successfully.");
                    timetables->Add(timetable);
                    return 0;
                }
                else {
                    Console::WriteLine("No rows were affected. Insertion failed.");
                }
            }

        } catch (Exception^ ex) {
               Console::WriteLine("An error occurred: " + ex->Message);
               return -2;
        }

    }


    void deleteStudent(String^ name) {
        try {
            String^ sqlquery = "DELETE FROM students WHERE name = @rn";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@rn", name);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Student ^ st in students) {
                    if (st->getname() == name) {
                        students->Remove(st);
                        delete st;
                    }
                }
                Console::WriteLine("Student deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void deleteTeacher(String^ name) {
        try {
            String^ sqlquery = "DELETE FROM teachers WHERE name = @id";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@id", name);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Teacher ^ te in teachers) {
                    if (te->getname() == name) {
                        teachers->Remove(te);
                        delete te;
                    }
                }

                Console::WriteLine("Teacher deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void deleteCourse(String^ name) {
        try {
            String^ sqlquery = "DELETE FROM courses WHERE name = @na";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", name);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Course ^ co in courses) {
                    if (co->getName() == name) {
                        courses->Remove(co);
                        delete co;
                    }
                }

                Console::WriteLine("Course deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void deleteRoom(String^ name) {
        try {
            String^ sqlquery = "DELETE FROM rooms WHERE name = @na";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", name);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Room ^ ro in rooms) {
                    if (ro->getName() == name) {
                        rooms->Remove(ro);
                        delete ro;
                    }
                }

                Console::WriteLine("Room deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void deleteSection(String^ name) {
        try {
            String^ sqlquery = "DELETE FROM sections WHERE name = @na";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@na", name);

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Section ^ se in sections) {
                    if (se->getName() == name) {
                        sections->Remove(se);
                        delete se;
                    }
                }

                Console::WriteLine("Section deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void deleteTimetable(Timetable^ timetable) {
        try {
            String^ sqlquery = "DELETE FROM timetables WHERE section = @se AND course = @co AND room = @ro AND day = @da AND time = @ti";
            SqlCommand^ command = gcnew SqlCommand(sqlquery, sqlConn);

            command->Parameters->AddWithValue("@se", timetable->section->getName());
            command->Parameters->AddWithValue("@co", timetable->course->getName());
            command->Parameters->AddWithValue("@ro", timetable->room->getName());
            command->Parameters->AddWithValue("@da", timetable->timeslot->day);
            command->Parameters->AddWithValue("@ti", timetable->timeslot->time);

            int rowsAffected = command->ExecuteNonQuery();

            if (rowsAffected > 0) {
                for each (Timetable ^ tt in timetables) {
                    if (tt == timetable) {
                        timetables->Remove(tt);
                        delete tt;
                    }
                }

                Console::WriteLine("Timetable deleted successfully.");
            }
            else {
                Console::WriteLine("No rows were affected. Deletion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }
    bool changeTimetableEntry(Timetable^ existingTimetable, TimeSlot^ newTimeSlot, Room^ newRoom, Course^ newCourse, Section^ newSection) {
        for each (Timetable ^ timetable in timetables) {
            if (timetable != existingTimetable) {
                if (timetable->room == newRoom && timetable->timeslot->day == newTimeSlot->day && timetable->timeslot->time == newTimeSlot->time) {
                    Console::WriteLine("Room clash detected.");
                    return false;
                }

                if (timetable->course->getTeacher() == newCourse->getTeacher() && timetable->timeslot->day == newTimeSlot->day && timetable->timeslot->time == newTimeSlot->time) {
                    Console::WriteLine("Teacher clash detected.");
                    return false;
                }
            }
        }

        existingTimetable->timeslot = newTimeSlot;
        existingTimetable->room = newRoom;
        existingTimetable->course = newCourse;
        existingTimetable->section = newSection;

        try {
            String^ sqlquery = "UPDATE timetables SET day = @day, time = @time, room = @room, course = @course, section = @section WHERE id = @id";
            SqlCommand^ command = gcnew SqlCommand(sqlquery, sqlConn);

            command->Parameters->AddWithValue("@day", newTimeSlot->day);
            command->Parameters->AddWithValue("@time", newTimeSlot->time);
            command->Parameters->AddWithValue("@room", newRoom->getName());
            command->Parameters->AddWithValue("@course", newCourse->getName());
            command->Parameters->AddWithValue("@section", newSection->getName());
            command->Parameters->AddWithValue("@id", existingTimetable->getId()); 

            int rowsAffected = command->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Timetable entry updated successfully.");
                return true;
            }
            else {
                Console::WriteLine("No rows were affected. Update failed.");
                return false;
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
            return false;
        }
    }


    void readAllDB() {
        readCourses();
        readRooms();
        readSections();
        readStudents();
        readTeachers();
        readTimetables();
    }


    void readStudents() {
        try {
            String^ sqlquery = "SELECT regno, name, section FROM students";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {
                String^ regno = reader["regno"]->ToString();
                String^ name = reader["name"]->ToString();
                String^ sectionName = reader["section"]->ToString();

                Section^ section = nullptr;
                for each (Section ^ sec in sections) {
                    if (sec->getName() == sectionName) {
                        section = sec;
                    }
                }
                Student^ student = gcnew Student(Convert::ToInt32(regno), name, section);
                students->Add(student);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void readTeachers() {
        try {
            String^ sqlquery = "SELECT id, name, course FROM teachers";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {
                String^ id = reader["id"]->ToString();
                String^ name = reader["name"]->ToString();
                String^ courseName = reader["course"]->ToString();

                Course^ course = nullptr;
                for each (Course ^ co in courses) {
                    if (co->getName() == courseName) {
                        course = co;
                    }
                }

                Teacher^ teacher = gcnew Teacher(name, Convert::ToInt32(id), course);
                teachers->Add(teacher);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void readCourses() {
        try {
            String^ sqlquery = "SELECT name FROM courses";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {
                String^ name = reader["name"]->ToString();
                Course^ course = gcnew Course(name);
                courses->Add(course);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void readRooms() {
        try {
            String^ sqlquery = "SELECT name FROM rooms";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {
                String^ name = reader["name"]->ToString();
                Room^ room = gcnew Room(name);
                rooms->Add(room);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void readSections() {
        try {
            String^ sqlquery = "SELECT name, sec_courses FROM sections";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {
                String^ name = reader["name"]->ToString();
                String^ secourses = reader["sec_courses"]->ToString();
                array<String^>^ courseArray = secourses->Split(',');
                Section^ section = gcnew Section(name);

                for each (String ^ course in courseArray) {
                    for each (Course ^ cou in courses) {
                        if (course == cou->getName()) {
                            section->addCourse(cou);
                        }
                    }
                }
                sections->Add(section);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void readTimetables() {
        try {
            String^ sqlquery = "SELECT id, section, course, room, day, time FROM timetables";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);
            SqlDataReader^ reader = sqlcommand->ExecuteReader();

            while (reader->Read()) {

                int id = Convert::ToInt32(reader["id"]);
                String^ sectionName = reader["section"]->ToString();
                String^ courseName = reader["course"]->ToString();
                String^ roomName = reader["room"]->ToString();
                String^ day = reader["day"]->ToString();
                String^ time = reader["time"]->ToString();

                Section^ section = nullptr;
                for each (Section ^ sec in sections) {
                    if (sec->getName() == sectionName) {
                        section = sec;
                    }
                }
                Course^ course = nullptr;
                for each (Course ^ co in courses) {
                    if (co->getName() == courseName) {
                        course = co;
                    }
                }
                
                Room^ room = nullptr;
                for each (Room ^ ro in rooms) {
                    if (ro->getName() == roomName) {
                        room = ro;
                    }
                }
                TimeSlot^ timeslot = gcnew TimeSlot(day, time);

                room->addTimeSlot(timeslot);

                Timetable^ timetable = gcnew Timetable(timeslot, room, section, course);
                timetable->setId(id);
                timetables->Add(timetable);
            }

            reader->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }
    }

    void addTimeslot(Room^ room, TimeSlot^ timeslot) {
        room->addTimeSlot(timeslot);
        Console::WriteLine("Use it in an Timetable entry or else it will be removed...");

    }


    void swapTeacherwithCourse(Teacher^ teacher, Course^ course) {
        if (course->getTeacher()->getname() == teacher->getname()) {
            Console::Write("There's Nothing to Change Mate.");
        }
        else {
            try {
                Teacher^ secteacher = course->getTeacher();
                Course^ seccourse = teacher->getcourse();

                String^ sqlquery = "UPDATE teachers SET course = @cour WHERE name = @teachname";
                SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

                sqlcommand->Parameters->AddWithValue("@cour", course->getName());
                sqlcommand->Parameters->AddWithValue("@teachname", teacher->getname());

                String^ sqlquery2 = "UPDATE teachers SET course = @cou WHERE name = @teacname";
                SqlCommand^ sqlcommand2 = gcnew SqlCommand(sqlquery2, sqlConn);

                sqlcommand->Parameters->AddWithValue("@cou", seccourse->getName());
                sqlcommand->Parameters->AddWithValue("@teacname", secteacher->getname());

                int rowsAffected = sqlcommand->ExecuteNonQuery();

                if (rowsAffected > 0) {
                    Console::WriteLine("Relation Swapped Successfully");
                    secteacher->setcourse(seccourse);
                    teacher->setcourse(course);

                }
                else {
                    Console::WriteLine("No rows were affected. Data Insertion failed.");
                }
            }
            catch (Exception^ ex) {
                Console::WriteLine("An error occurred: " + ex->Message);
            }
        }
    }

    void assignStudenttoSection(Section^ section, Student^ student) {
        if (section->getName() == student->getSection()->getName()) {
            Console::Write("There's Nothing to Change Mate.");
        }
        else {
            try {
                String^ sqlquery = "UPDATE students SET section = @sec WHERE name = @stuname";
                SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

                sqlcommand->Parameters->AddWithValue("@sec", section->getName());
                sqlcommand->Parameters->AddWithValue("@stuname", student->getname());

                int rowsAffected = sqlcommand->ExecuteNonQuery();

                if (rowsAffected > 0) {
                    Console::WriteLine("Relation Developed Successfully");
                    student->setSection(section);
                }
                else {
                    Console::WriteLine("No rows were affected. Data Insertion failed.");
                }
            }
            catch (Exception^ ex) {
                Console::WriteLine("An error occurred: " + ex->Message);
            }
        }
    }

    void assignCoursestoSection(Section^ section, List<Course^>^ coursess) {

        section->getCourses()->Clear();

        try {
            String^ courseslist;
            for each (Course ^ cour in coursess) {
                courseslist += cour->getName() + ',';
                section->addCourse(cour);
            }

            String^ sqlquery = "UPDATE sections SET sec_courses = @seccou WHERE name = @secname";
            SqlCommand^ sqlcommand = gcnew SqlCommand(sqlquery, sqlConn);

            sqlcommand->Parameters->AddWithValue("@seccou", courseslist);
            sqlcommand->Parameters->AddWithValue("@secname", section->getName());

            int rowsAffected = sqlcommand->ExecuteNonQuery();

            if (rowsAffected > 0) {
                Console::WriteLine("Relation Developed Successfully");
            }
            else {
                Console::WriteLine("No rows were affected. Data Insertion failed.");
            }
        }
        catch (Exception^ ex) {
            Console::WriteLine("An error occurred: " + ex->Message);
        }

    }

    ~TimeTableManager() {
        for each (Student ^ student in students) {
            delete student;
        }
        for each (Teacher ^ teacher in teachers) {
            delete teacher;
        }
        for each (Course ^ course in courses) {
            delete course;
        }
        for each (Room ^ room in rooms) {
            delete room;
        }
        for each (Section ^ section in sections) {
            delete section;
        }
        for each (Timetable ^ timetable in timetables) {
            delete timetable;
        }
    }
};

#endif