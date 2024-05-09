#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>

#include <fstream>
#include <sstream>


class Course;
class Room;
class Section;
class Student;
class Teacher;
class TimeSlot;

class Person {
	std::string name;
public:
	Person() {};
	Person(std::string n) : name(n) {}

	std::string getname() const {
		return name;
	}

	void setname(std::string n) {
		name = n;
	}
};

class Course { // set section, timeslots, 
	std::string name;
	Teacher* teacher;
	std::vector<Section*> sections;
	std::vector<Room*> rooms;
public:
	Course() {}
	Course(std::string n) : name(n) {}


	void setName(std::string n) {
		name = n;
	}

	std::string getName() const {
		return name;
	}

	void setteacher(Teacher* teacher1) {
		teacher = teacher1;
	}

	void addSection(Section* section) {
		sections.push_back(section);
	}

	void addRoom(Room* room1) {
		rooms.push_back(room1);
	}

	std::vector<Room*> getRooms() const {
		return rooms;
	}

	Teacher* getTeacher() const {
		return teacher;
	}



};

class Section {
	std::string name;
	std::vector<Student*> students;
	std::vector<Course*> courses;
public:
	Section() {}
	Section(std::string n) : name(n) {}

	void addStudent(Student* student)
	{
		students.push_back(student);
	}

	void addCourse(Course* course) {
		courses.push_back(course);
		course->addSection(this);
	}

	std::string getName() const {
		return name;
	}

	void setName(std::string n) {
		name = n;
	}

	std::vector<Course*> getCourses() const {
		return courses;
	}

	std::vector<Student*> getStudents() const {
		return students;
	}

};



class Teacher : public Person { // set course
	int id;
	Course* course;
public:
	Teacher() {};
	Teacher(std::string n) : Person(n) {}
	Teacher(std::string n, int i) : Person(n), id(i) {}
	Teacher(std::string n, int i, Course* acourse) : Person(n), id(i) {
		this->course = acourse;
		acourse->setteacher(this);
	}

	Course* getcourse() const {
		return course;
	}

	void setcourse(Course* courseset) {
		course = courseset;
		(*courseset).setteacher(this);
	}

	void setId(int i) {
		id = i;
	}

	int getId() const {
		return id;
	}
};

class Student : public Person { // set section
	int regno;
	Section* section;
public:
	Student() {};
	Student(int r) : regno(r) {}
	Student(std::string n) : Person(n) {}
	Student(int r, std::string n) : regno(r), Person(n) {}
	Student(int r, std::string n, Section* sec) : regno(r), Person(n) {
		setSection(sec);
	}


	void setSection(Section* section1) {
		section = section1;
		section1->addStudent(this);
	}

	Section* getSection() const {
		return section;
	}

	void setRegno(int rgn) {
		regno = rgn;
	}

	int getRegno() const {
		return regno;
	}
};

class TimeSlot {
public:
	std::string day;
	std::string time;
	Room* room;
	Course* course;

	TimeSlot() {}
	TimeSlot(std::string d, std::string t) : day(d), time(t) {}
	TimeSlot(std::string d, std::string t, Room* r) : day(d), time(t), room(r) {}
	TimeSlot(std::string d, std::string t, Room* r, Course* c) : day(d), time(t), room(r), course(c) {}

	void addRoom(Room* aroom) {
		room = aroom;
	}

	Course* getCourse() const {
		return course;
	}
};

class Room {  // manage time // set course
	friend class TimeTable;
	std::string name;
	std::vector<TimeSlot*> timeslots;

public:

	Room() {}
	Room(std::string n) : name(n) {}

	void setName(std::string n) {
		name = n;
	}

	std::string getName() const {
		return name;
	}

	void addTimeSlot(TimeSlot* timeslot) {
		timeslots.push_back(timeslot);
		timeslot->addRoom(this);
	}

	std::vector<TimeSlot*> getTimeSlots() const {
		return timeslots;
	}

};


const static std::vector<std::string> days = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
const static std::vector<std::string> times = { "8:30 - 9:30", "9:30 - 10:30", "10:30 - 11:30", "11:30 - 12:30",
										"12:30 - 01:30", "01:30 - 02:30", "02:30 - 03:30", "03:30 - 04:30" };


class TimeTable {
protected:
	friend class Admin;
	friend class MainM;

public:
	static std::vector<Student*> students;
	static std::vector<Teacher*> teachers;
	static std::vector<Course*> courses;
	static std::vector<Room*> rooms;
	static std::vector<Section*> sections;


	TimeTable() {
		loadfromfile();

	}
	//these function will cout things so, i can use their string stream in file handling and gui output
	int makeTimetable() {
		if (courses.empty() || teachers.empty() || students.empty() || rooms.empty() || sections.empty()) {
			return -1;
		}

		std::map<Room*, std::vector<std::pair<std::string, std::string>>> roomAllocations;

		for (Section* sec : sections) {
			for (const auto& course : sec->getCourses()) {
				for (const auto& room : course->getRooms()) {
					std::string day;
					std::string time;

					while (true) {
						day = days[rand() % days.size()];
						time = times[rand() % times.size()];

						auto& allocatedSlots = roomAllocations[room];
						bool slotAvailable = true;
						for (const auto& allocatedSlot : allocatedSlots) {
							if (allocatedSlot.first == day && allocatedSlot.second == time) {
								slotAvailable = false;
								break;
							}
						}

						if (slotAvailable) {
							TimeSlot* timeSlot = new TimeSlot(day, time, room, course);
							room->addTimeSlot(timeSlot);
							allocatedSlots.push_back({ day, time });
							break;
						}
					}
				}
			}
		}

		return 0;
	}

	void timetableByTeacher(Teacher* teacher) {
		for (Section* sec : sections) {
			for (const auto& course : sec->getCourses()) {
				if (course->getTeacher() == teacher) {
					std::cout << "TimeTable for Teacher " << teacher->getname() << ":" << std::endl;
					std::cout << "Course Assigned : " << course->getName() << std::endl;
					for (const auto& ro : course->getRooms()) {
						for (const auto& ts : ro->getTimeSlots()) {
							if (ts->getCourse() == course) {
								std::cout << "===================================" << std::endl;
								std::cout << "Day : " << ts->day << " ~~ TimeSlot : " << ts->time << std::endl;
								std::cout << "Room : " << ro->getName() << std::endl;
								std::cout << "Section : " << sec->getName() << std::endl;
								std::cout << "===================================" << std::endl;
							}
						}
					}
				}
			}
		}
	}

	void timetableByRoom(Room* r) {
		for (Section* sec : sections) {
			for (const auto& course : sec->getCourses()) {
				for (const auto& room : course->getRooms()) {
					if (room == r) {
						std::cout << "TimeTable for Room " << room->getName() << ":" << std::endl;
						for (const auto& ts : room->getTimeSlots()) {
							if (ts->getCourse() == course) {
								std::cout << "===================================" << std::endl;
								std::cout << "Day : " << ts->day << " ~~ TimeSlot : " << ts->time << std::endl;
								std::cout << "Course : " << course->getName() << std::endl;
								std::cout << "Section : " << sec->getName() << std::endl;
								std::cout << "===================================" << std::endl;
							}
						}
					}
				}
			}
		}
	}

	void timetableBySection(Section* s) {
		for (Section* sec : sections) {
			if (sec == s) {
				std::cout << "TimeTable for Section " << sec->getName() << ":" << std::endl;
				std::cout << "Number of Students in this Section : " << sec->getStudents().size() << std::endl;
				int courseIndex = 0;
				Course* c = courses.at(0);
				for (const auto& course : sec->getCourses()) {
					
					if (courseIndex < course->getRooms().size()) {
					//	const auto& room = course->getRooms()[courseIndex];
						for (const auto& room : course->getRooms()) {
							if (room == course->getRooms()[courseIndex]) {
								for (const auto& ts : room->getTimeSlots()) {
									if (ts->getCourse() == course) {
										std::cout << "===================================" << std::endl;
										std::cout << "Day : " << ts->day << " ~~ TimeSlot : " << ts->time << std::endl;
										std::cout << "Room : " << room->getName() << std::endl;
										std::cout << "Course : " << course->getName() << std::endl;
										std::cout << "===================================" << std::endl;
									}
								}

							}
						}
					}
					courseIndex++;
				}
			}
		}
	}


	void timetableByCourse(Course* c) {
		for (Section* sec : sections) {
			for (Course* course : sec->getCourses()) {
				if (course == c) {
					std::cout << "TimeTable for Course " << course->getName() << ":" << std::endl;
					for (const auto& room : course->getRooms()) {
						for (const auto& ts : room->getTimeSlots()) {
							if (ts->getCourse() == course) {
								std::cout << "===================================" << std::endl;
								std::cout << "Day : " << ts->day << " ~~ TimeSlot : " << ts->time << std::endl;
								std::cout << "Room : " << room->getName() << std::endl;
								std::cout << "Section : " << sec->getName() << std::endl;
								std::cout << "===================================" << std::endl;
							}
						}
					}
				}
			}
		}
	}

	int loadroom() {
		std::fstream FileReader("rooms.txt");

		if (!FileReader) {
			std::cerr << "File Reader Error. Cannot Read Room File" << std::endl;
			return -1;
		}

		std::string line;

		while (std::getline(FileReader, line)) {
			Room* room = new Room(line);
			rooms.push_back(room);
		}
		FileReader.close();
		return 0;
	}

	int loadcourse() {
		std::fstream FileReader("courses.txt");

		if (!FileReader) {
			std::cerr << "File Reader Error. Cannot Read Course File" << std::endl;
			return -1;
		}

		std::string line;
		while (getline(FileReader, line)) {
			std::string coursename, roomname;
			std::stringstream ss(line);

			std::getline(ss, coursename, ',');

			Course* course = new Course(coursename);

			while (std::getline(ss, roomname, ',')) {
				for (Room* r : rooms) {
					if (r->getName() == roomname) {
						course->addRoom(r);
					}
				}
			}

			courses.push_back(course);
		}
		FileReader.close();
		return 0;
	}

	int loadsection() {
		std::fstream FileReader("sections.txt");

		if (!FileReader) {
			std::cerr << "File Reader Error. Cannot Read Section File" << std::endl;
			return -1;
		}

		std::string line;
		while (std::getline(FileReader, line)) {
			std::string sectionname, coursename;
			std::stringstream ss(line);

			std::getline(ss, sectionname, ',');

			Section* section = new Section(sectionname);

			while (std::getline(ss, coursename, ',')) {
				for (Course* c : courses) {
					if (c->getName() == coursename) {
						section->addCourse(c);
					}
				}
			}

			sections.push_back(section);
		}


		FileReader.close();
		return 0;
	}

	int loadstudent() {
		std::fstream FileReader("students.txt");
		if (!FileReader) {
			std::cerr << "File Reader Error. Cannot Read Student File" << std::endl;
			return -1;
		}

		std::string line;
		while (std::getline(FileReader, line)) {
			std::string studentname, regno, sectionname;
			std::stringstream ss(line);

			std::getline(ss, regno, ',');
			std::getline(ss, studentname, ',');
			std::getline(ss, sectionname, ',');

			int rgno = stoi(regno);

			for (Section* sec : sections) {
				if (sec->getName() == sectionname) {
					Student* st = new Student(rgno, studentname, sec);
					students.push_back(st);
				}
			}
		}
		FileReader.close();
		return 0;
	}

	int loadteacher() {
		std::fstream FileReader("teachers.txt");

		if (!FileReader) {
			std::cerr << "File Reader Error. Cannot Read Teacher File" << std::endl;
			return -1;
		}

		std::string line;
		while (getline(FileReader, line)) {
			std::string teacherid, teachername, coursename;
			std::stringstream ss(line);

			getline(ss, teacherid, ',');
			getline(ss, teachername, ',');
			getline(ss, coursename, ',');

			Teacher* teacher = new Teacher(teachername, stoi(teacherid));

			for (Course* c : courses) {
				if (c->getName() == coursename) {
					teacher->setcourse(c);
				}
			}

			teachers.push_back(teacher);

		}
		FileReader.close();
		return 0;
	}

	int loadfromfile() {
		int i1 = loadroom();
		int i2 = loadcourse();
		int i3 = loadsection();
		int i4 = loadstudent();
		int i5 = loadteacher();
		int i6 = makeTimetable();
		if (i1 != 0 || i2 != 0 || i3 != 0 || i4 != 0 || i5 != 0 || i6 != 0) {
			std::cerr << "Some Error Has Occurred";
			return -1;
		}
		return 0;
	}

	void saveStudent(Student* st) {
		std::fstream studentwriter("students.txt", std::ios::app);
		studentwriter << st->getRegno() << ',' << st->getname() << ',' << st->getSection()->getName() << std::endl;
	}

	void saveTeacher(Teacher* t) {
		std::fstream teacherwriter("teachers.txt", std::ios::app);
		teacherwriter << t->getId() << ',' << t->getname() << ',' << t->getcourse()->getName() << std::endl;
	}


	void saveCourse(Course* c) {
		std::fstream coursewriter("courses.txt", std::ios::app);
		coursewriter << c->getName() << ',';
		for (Room* r : c->getRooms()) {
			coursewriter << r->getName() << ',';
		}
		coursewriter << std::endl;
	}

	void saveRoom(Room* r) {
		std::fstream roomwriter("rooms.txt", std::ios::app);
		roomwriter << r->getName() << std::endl;
	}

	void saveSection(Section* s) {
		std::fstream sectionwriter("sections.txt", std::ios::app);
		sectionwriter << s->getName() << ',';
		for (Course* c : s->getCourses()) {
			sectionwriter << c->getName() << ',';
		}
		sectionwriter << std::endl;
	}
	int changeStudent_section(Student* st, Section* se) {
		std::fstream st_sechanger("students.txt", std::ios::in | std::ios::out);

		if (!st_sechanger) {
			std::cerr << "File Reader Error. Cannot Read Student File" << std::endl;
			return -1;
		}

		std::string line;
		std::streampos pos;
		bool student_found = false;

		while (getline(st_sechanger, line)) {
			std::stringstream ss(line);
			std::string rgn, st_name, se_name;

			getline(ss, rgn, ',');
			int regno = stoi(rgn);
			if (regno == st->getRegno()) {
				pos = st_sechanger.tellg();

				std::string updatedline = std::to_string(st->getRegno()) + ',' + st->getname() + ',' + se->getName();
				std::streamoff diff = updatedline.size() - line.size();

				if (diff > 0) {
					updatedline.append(diff, ' ');
				}

				st_sechanger.seekp(pos);
				st_sechanger.write(updatedline.c_str(), updatedline.size());

				st_sechanger.seekp(0, std::ios::end);
				student_found = true;
				break;
			}
		}

		if (!student_found) {
			std::cerr << "Student with id " << st->getRegno() << " not found.";
			return -1;
		}

		st_sechanger.close();
		return 0;
	}

	int changeSection_course(Section* se, Course* co) {
		std::fstream se_cochanger("sections.txt", std::ios::in | std::ios::out);

		if (!se_cochanger) {
			std::cerr << "File Reader Error. Cannot Read Section File" << std::endl;
			return -1;
		}

		std::string line;
		std::streampos pos;
		bool section_found = false;

		while (getline(se_cochanger, line)) {
			std::stringstream ss(line);
			std::string se_name, co_name;

			getline(ss, se_name, ',');

			if (se_name == se->getName()) {
				pos = se_cochanger.tellg();

				getline(ss, co_name, ',');

				std::string updatedline = se->getName() + ',' + co->getName();
				std::streamoff diff = updatedline.size() - line.size();

				if (diff > 0) {
					updatedline.append(diff, ' ');
				}

				se_cochanger.seekp(pos);
				se_cochanger.write(updatedline.c_str(), updatedline.size());

				se_cochanger.seekp(0, std::ios::end);
				section_found = true;
				break;
			}
		}

		if (!section_found) {
			std::cerr << "Section with Name " << se->getName() << " not found.";
			return -1;
		}

		se_cochanger.close();
		return 0;
	}

	int changeTeacher_course(Teacher* t, Course* co) {
		std::fstream t_cochanger("teachers.txt", std::ios::in | std::ios::out);

		if (!t_cochanger) {
			std::cerr << "File Reader Error. Cannot Read Teacher File" << std::endl;
			return -1;
		}

		std::string line;
		std::streampos pos;
		bool teacher_found = false;

		while (getline(t_cochanger, line)) {
			std::stringstream ss(line);
			std::string id, se_name, co_name;

			getline(ss, id, ',');
			int tid = stoi(id);
			if (tid == t->getId()) {
				pos = t_cochanger.tellg();

				getline(ss, se_name, ',');
				getline(ss, co_name, ',');

				std::string updatedline = id + ',' + t->getname() + ',' + co->getName();
				std::streamoff diff = updatedline.size() - line.size();

				if (diff > 0) {
					updatedline.append(diff, ' ');
				}

				t_cochanger.seekp(pos);
				t_cochanger.write(updatedline.c_str(), updatedline.size());

				t_cochanger.seekp(0, std::ios::end);
				teacher_found = true;
				break;
			}
		}

		if (!teacher_found) {
			std::cerr << "Teacher with Id " << t->getId() << " not found.";
			return -1;
		}

		t_cochanger.close();
		return 0;
	}

	int changeCourse_room(Course* co, Room* ro) {
		std::fstream co_rochanger("courses.txt", std::ios::in | std::ios::out);

		if (!co_rochanger) {
			std::cerr << "File Reader Error. Cannot Read Course File" << std::endl;
			return -1;
		}

		std::string line;
		std::streampos pos;
		bool coursefound = false;

		while (getline(co_rochanger, line)) {
			std::stringstream ss(line);
			std::string coursename, roomname;

			getline(ss, coursename, ',');

			if (coursename == co->getName()) {
				pos = co_rochanger.tellg();

				getline(ss, roomname, ',');

				std::string updatedline = co->getName() + ',' + ro->getName();
				std::streamoff diff = updatedline.size() - line.size();

				if (diff > 0) {
					updatedline.append(diff, ' ');
				}

				co_rochanger.seekp(pos);
				co_rochanger.write(updatedline.c_str(), updatedline.size());

				co_rochanger.seekp(0, std::ios::end);
				coursefound = true;
				break;
			}
		}

		co_rochanger.close();

		if (!coursefound) {
			std::cerr << "Course with name " << co->getName() << " not found.";
			return -1;
		}

		return 0;
	}

	void delStudentfromFile(Student* st) {
		std::fstream file("students.txt", std::ios::in | std::ios::out);
		if (!file) {
			std::cerr << "Error: Unable to open students file." << std::endl;
			return;
		}

		std::string line;
		std::vector<std::string> lines;
		while (std::getline(file, line)) {
			std::stringstream ss(line);
			std::string regNoStr, studentName, sectionName;
			std::getline(ss, regNoStr, ',');
			std::getline(ss, studentName, ',');
			std::getline(ss, sectionName, ',');

			int regNo = std::stoi(regNoStr);

			if (st->getRegno() != regNo) {
				lines.push_back(line);
			}
		}

		file.close();

		file.open("students.txt", std::ios::out | std::ios::trunc);
		for (const auto& line : lines) {
			file << line << std::endl;
		}
		file.close();
	}


	void delTeacherfromFile(Teacher* teacher) {
		std::fstream file("teachers.txt", std::ios::in | std::ios::out);
		if (!file) {
			std::cerr << "Error: Unable to open teachers file." << std::endl;
			return;
		}

		std::string line;
		std::vector<std::string> lines;
		while (std::getline(file, line)) {
			std::stringstream ss(line);
			std::string idStr, name, course;
			std::getline(ss, idStr, ',');
			std::getline(ss, name, ',');
			std::getline(ss, course, ',');

			int id = std::stoi(idStr);

			if (teacher->getId() != id) {
				lines.push_back(line);
			}
		}

		file.close();

		file.open("teachers.txt", std::ios::out | std::ios::trunc);
		for (const auto& line : lines) {
			file << line << std::endl;
		}
		file.close();
	}

	void delCoursefromFile(Course* course) {
		std::fstream file("courses.txt", std::ios::in | std::ios::out);
		if (!file) {
			std::cerr << "Error: Unable to open courses file." << std::endl;
			return;
		}

		std::string line;
		std::vector<std::string> lines;
		while (std::getline(file, line)) {
			std::stringstream ss(line);
			std::string name, room;
			std::getline(ss, name, ',');
			std::getline(ss, room, ',');

			if (course->getName() != name) {
				lines.push_back(line);
			}
		}

		file.close();

		file.open("courses.txt", std::ios::out | std::ios::trunc);
		for (const auto& line : lines) {
			file << line << std::endl;
		}
		file.close();
	}

	void delSectionfromFile(Section* section) {
		std::fstream file("sections.txt", std::ios::in | std::ios::out);
		if (!file) {
			std::cerr << "Error: Unable to open sections file." << std::endl;
			return;
		}

		std::string line;
		std::vector<std::string> lines;
		while (std::getline(file, line)) {
			if (line.find(section->getName()) == std::string::npos) {
				lines.push_back(line);
			}
		}

		file.close();

		file.open("sections.txt", std::ios::out | std::ios::trunc);
		for (const auto& line : lines) {
			file << line << std::endl;
		}
		file.close();
	}

	void delRoomfromFile(Room* room) {
		std::fstream file("rooms.txt", std::ios::in | std::ios::out);
		if (!file) {
			std::cerr << "Error: Unable to open rooms file." << std::endl;
			return;
		}

		std::string line;
		std::vector<std::string> lines;
		while (std::getline(file, line)) {
			if (line.find(room->getName()) == std::string::npos) {
				lines.push_back(line);
			}
		}

		file.close();

		file.open("rooms.txt", std::ios::out | std::ios::trunc);
		for (const auto& line : lines) {
			file << line << std::endl;
		}
		file.close();
	}


	//Reminder : usage of these singleton function in the admin class

	friend TimeTable* programrun();

};


class Admin
{
	const std::string username = "admin";
	const std::string password = "password";
public:
	TimeTable* timetable;

	Admin(TimeTable* tt) : timetable(tt) {}

	bool st_rgnCheck(int rgn) {
		if (!(timetable->students.empty())) {
			for (const auto& s : timetable->students) {
				if (rgn == s->getRegno()) {
					return false;
				}
			}
		}
		return true;
	}

	int makeStudent(std::string name, int rgn, Section* sec) {
		if (st_rgnCheck(rgn)) {
			Student* student = new Student(rgn, name);
			student->setSection(sec);
			timetable->students.push_back(student);
			timetable->saveStudent(student);
		}
		else {
			return -1;
		}
	}

	bool t_idCheck(int id) {
		if (!(timetable->teachers.empty())) {
			for (const auto& t : timetable->teachers) {
				if (id == t->getId()) {
					return false;
				}
			}
		}
		return true;
	}

	int makeTeacher(std::string name, int id, Course* course) {
		if (t_idCheck(id)) {
			Teacher* teacher = new Teacher(name, id, course);
			timetable->teachers.push_back(teacher);
			timetable->saveTeacher(teacher);
		}
		else
		{
			return -1;
		}
	}

	bool c_nameCheck(std::string name) {
		if (!(timetable->courses.empty())) {
			for (const auto& c : timetable->courses) {
				if (name == c->getName()) {
					return false;
				}
			}
		}
		return true;
	}

	int makeCourse(std::string name, std::vector<Room*> room) {
		if (c_nameCheck(name)) {
			Course* course = new Course(name);
			for (Room* r : room) {
				course->addRoom(r);
			}
			timetable->courses.push_back(course);
			timetable->saveCourse(course);
		}
		else
		{
			return -1;
		}

	}

	bool se_nameCheck(std::string name) {
		if (!(timetable->sections.empty())) {
			for (const auto& se : timetable->sections) {
				if (name == se->getName()) {
					return false;
				}
				return true;
			}
		}
	}

	int makeSection(std::string name, std::vector<Course*> course) {
		if (se_nameCheck(name)) {
			Section* section = new Section(name);
			for (Course* c : course) {
				section->addCourse(c);
			}
			timetable->sections.push_back(section);
			timetable->saveSection(section);
		}
		else
		{
			return -1;
		}

	}

	bool ro_nameCheck(std::string name) {
		if (!(timetable->rooms.empty())) {
			for (const auto& ro : timetable->rooms) {
				if (name == ro->getName()) {
					return false;
				}
			}
		}
		return true;
	}

	int makeRoom(std::string name) {
		if (ro_nameCheck(name)) {
			Room* room = new Room(name);
			timetable->rooms.push_back(room);
			timetable->saveRoom(room);
		}
		else
		{
			return -1;
		}

	}

	void deleteStudent(std::string name) {
		for (auto loophole = timetable->students.begin(); loophole != timetable->students.end(); ++loophole) {
			if (name == (*loophole)->getname()) {
				timetable->delStudentfromFile(*loophole);
				delete* loophole;
				timetable->students.erase(loophole);
				break;
			}
		}
	}

	void deleteTeacher(std::string name) {
		for (auto loophole = timetable->teachers.begin(); loophole != timetable->teachers.end(); ++loophole) {
			if (name == (*loophole)->getname()) {
				timetable->delTeacherfromFile(*loophole);
				delete (*loophole);
				timetable->teachers.erase(loophole);
				break;
			}
		}

	}

	void deleteCourse(std::string name) {
		for (auto loophole = timetable->courses.begin(); loophole != timetable->courses.end(); ++loophole) {
			if (name == (*loophole)->getName()) {
				timetable->delCoursefromFile(*loophole);
				delete (*loophole);
				timetable->courses.erase(loophole);
				break;
			}
		}
	}

	void deleteSection(std::string name) {
		for (auto loophole = timetable->sections.begin(); loophole != timetable->sections.end(); ++loophole) {
			if (name == (*loophole)->getName()) {
				timetable->delSectionfromFile(*loophole);
				delete (*loophole);
				timetable->sections.erase(loophole);
				break;
			}
		}
	}

	void deleteRoom(std::string name) {
		for (auto loophole = timetable->rooms.begin(); loophole != timetable->rooms.end(); ++loophole) {
			if (name == (*loophole)->getName()) {
				timetable->delRoomfromFile(*loophole);
				delete (*loophole);
				timetable->rooms.erase(loophole);
				break;
			}
		}
	}

	void assignTeachertoCourse(Teacher* teacher, Course* course) {
		teacher->setcourse(course);
	}

	void assignStudenttoSection(Student* st, Section* se) {
		st->setSection(se);
	}

	void assignCoursetoSection(Course* co, Section* se) {
		co->addSection(se);
	}

	void assignCoursetoRoom(Room* ro, Course* course) {
		course->addRoom(ro);
	}

	void assignTimeslottoRoom(Room* ro, TimeSlot* ts) {
		ro->addTimeSlot(ts);
	}

	bool login(std::string eusername, std::string epassword) {
		if ((eusername == this->username) && (epassword == this->password)) {
			return true;
		}
		return false;
	}
};

TimeTable* programrun() {
	TimeTable* t = new TimeTable();
	return t;
}