#include "timetable.h"

#include "course.h"
#include "section.h"
#include "student.h"
#include "room.h"
#include "teacher.h"

Timetable::Timetable() : timetable(NUM_DAYS, std::vector<std::vector<std::tuple<std::string, std::string, std::string>>>(NUM_PERIODS)) {}

void Timetable::setSlot(int day, int period, const std::vector<std::tuple<std::string, std::string, std::string>>& entries) {
	timetable[day][period] = entries;
}

std::vector<std::tuple<std::string, std::string, std::string>> Timetable::getSlot(int day, int period) const {
	return timetable[day][period];
}

void Timetable::addTeacher(const Teacher& teacher) {
	teachers.insert({ teacher.getName(), teacher });
}

Teacher& Timetable::getTeachers(const std::string& teacherName) {
	auto it = teachers.find(teacherName);
	if (it != teachers.end()) {
		return it->second;
	}
	else {
		return teachers.begin()->second;
	}
}

void Timetable::addCourse(const Course& course) {
	courses.insert({ course.getCourseName(), course });
}

Course& Timetable::getCourses(const std::string& courseName) {
	auto it = courses.find(courseName);
	if (it != courses.end()) {
		return it->second;
	}
	else {
		return courses.begin()->second;
	}
}

void Timetable::addRoom(const Room& room) {
	rooms.insert({ room.getRoomNumber(), room });
}

Room& Timetable::getRooms(const std::string& roomName) {
	auto it = rooms.find(roomName);
	if (it != rooms.end()) {
		return it->second;
	}
	else {
		return rooms.begin()->second;
	}
}

void Timetable::addSection(const Section& section) {
	sections.push_back(section);
}

Section& Timetable::getSectionss(const std::string& sectionName) {
	for (auto& section : sections) {
		if (section.getSectionName() == sectionName) {
			return section;
		}
	}
	// If section with the given name is not found, you might want to handle this case accordingly.
	// For simplicity, returning the first section.
	return sections.front();
}

const std::vector<Section>& Timetable::getSections() const {
	return sections;
}

// Filter timetable by section
void Timetable::filterBySection(const Section& section) {
	std::cout << "Timetable for Section: " << section.getSectionName() << std::endl << std::endl;
	for (int i = 0; i < timetable.size(); ++i) {
		for (int j = 0; j < timetable[i].size(); ++j) {
			for (const auto& entry : timetable[i][j]) {
				if (std::get<1>(entry) == section.getSectionName()) {
					std::cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << std::get<0>(entry) << " - Room: " << std::get<2>(entry) << std::endl;
				}
			}
		}
	}
}

// Filter timetable by teacher
void Timetable::filterByTeacher(const Teacher& teacher) {
	std::cout << "Timetable for Teacher: " << teacher.getName() << " (" << teacher.getSubject() << ")" << std::endl << std::endl;
	for (int i = 0; i < timetable.size(); ++i) {
		for (int j = 0; j < timetable[i].size(); ++j) {
			auto entries = getSlot(i, j);
			for (const auto& entry : entries) {
				if (std::get<0>(entry) == teacher.getSubject()) {
					std::cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << std::get<1>(entry) << " in " << std::get<2>(entry) << std::endl;
				}
			}
		}
	}
}

// Filter timetable by room
void Timetable::filterByRoom(const Room& room) {
	std::cout << "Timetable for Room: " << room.getRoomNumber() << std::endl << std::endl;
	for (int i = 0; i < timetable.size(); ++i) {
		for (int j = 0; j < timetable[i].size(); ++j) {
			auto entries = getSlot(i, j);
			for (const auto& entry : entries) {
				if (std::get<2>(entry) == room.getRoomNumber()) {
					std::cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << std::get<0>(entry) << " in " << std::get<1>(entry) << std::endl;
				}
			}
		}
	}
}

// Filter timetable by course
void Timetable::filterByCourse(const Course& course) {
	std::cout << "Timetable for Course: " << course.getCourseName() << std::endl << std::endl;
	for (int i = 0; i < timetable.size(); ++i) {
		for (int j = 0; j < timetable[i].size(); ++j) {
			auto entries = getSlot(i, j);
			for (const auto& entry : entries) {
				if (std::get<0>(entry) == course.getCourseName()) {
					std::cout << "Day " << getDayName(i) << ", Time Slot " << getTimeSlot(j) << ": " << std::get<1>(entry) << " in " << std::get<2>(entry) << std::endl;
				}
			}
		}
	}
}

void Timetable::storeOutputToFile(const std::string& output, const std::string& fileName) {
    std::ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        outputFile << output;
        std::cout << "Output stored in file: " << fileName << std::endl;
    }
    else {
        std::cerr << "Unable to open file: " << fileName << std::endl;
    }


}

Timetable Timetable::runitfinally() {

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

    std::vector<Teacher> allTeachers = {
        timetable.getTeachers("Sir Tamim"),
        timetable.getTeachers("Sir Zubair Abbasi"),
        timetable.getTeachers("Maam Sadaf Khalid"),
        timetable.getTeachers("Sir Gulaam Qamar"),
        timetable.getTeachers("Dr Awais Majeed"),
        timetable.getTeachers("Sir Rahim Ullah"),
        timetable.getTeachers("Sir Waleed"),
        timetable.getTeachers("Sir Abdul Waheed")
    };

    std::vector<std::string> allCourses = {
        timetable.getCourses("Object Oriented Programming").getCourseName(),
        timetable.getCourses("Linear Algebra").getCourseName(),
        timetable.getCourses("Discrete Structure").getCourseName(),
        timetable.getCourses("Effective Communication Skills").getCourseName(),
        timetable.getCourses("Introduction to Software Engineering").getCourseName(),
        timetable.getCourses("Islamic Studies").getCourseName(),
        timetable.getCourses("OOP Lab").getCourseName(),
        timetable.getCourses("Understanding Quran").getCourseName()
    };

    std::vector<Room> allRooms = {
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
    std::vector<std::tuple<std::string, std::string, std::string>> slot1 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot2 = {
        std::make_tuple("Islamic Studies", "Section A", "Room 4-18"),
        std::make_tuple("OOP Lab", "Section B", "Lab 4-02"),
        std::make_tuple("Understanding Quran", "Section C", "Room 4-19"),
        std::make_tuple("Object Oriented Programming", "Section D", "Room 4-17"),
        std::make_tuple("Linear Algebra", "Section E", "Lab 4-01"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot3 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot4 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-01"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Lab 4-02"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-17"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot5 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        std::make_tuple("OOP Lab", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot6 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        std::make_tuple("OOP Lab", "Section B", "Lab 4-01"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot7 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("OOP Lab", "Section E", "Lab 4-01"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot8 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Lab 4-02"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot9 = {
        std::make_tuple("Understanding Quran", "Section A", "Lab 4-01"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot10 = {
        std::make_tuple("Understanding Quran", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot11 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-19"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot12 = {
        std::make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Islamic Studies", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot13 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot14 = {
        std::make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot15 = {
        std::make_tuple("Understanding Quran", "Section A", "Lab 4-01"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot16 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Understanding Quran", "Section E", "Room 4-18"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot17 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-18"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-01"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),

    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot18 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("OOP Lab", "Section D", "Room 4-19"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot19 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-02"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Islamic Studies", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("OOP Lab", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot20 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-18"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot21 = {
        std::make_tuple("Islamic Studies", "Section A", "Lab 4-02"),
        std::make_tuple("OOP Lab", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-01"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot22 = {
        std::make_tuple("Object Oriented Programming", "Section A", "Lab 4-01"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-19"),
        std::make_tuple("Discrete Structure", "Section C", "Room 4-17"),
        std::make_tuple("OOP Lab", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot23 = {
        std::make_tuple("OOP Lab", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        std::make_tuple("Effective Communication Skills", "Section D", "Lab 4-02"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Room 4-18"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot24 = {
        std::make_tuple("OOP Lab", "Section A", "Room 4-19"),
        std::make_tuple("Linear Algebra", "Section B", "Room 4-17"),
        std::make_tuple("Discrete Structure", "Section C", "Lab 4-01"),
        std::make_tuple("Effective Communication Skills", "Section D", "Room 4-18"),
        std::make_tuple("Introduction to Software Engineering", "Section E", "Lab 4-02"),
    };
    std::vector<std::tuple<std::string, std::string, std::string>> slot25 = {
        std::make_tuple("Islamic Studies", "Section A", "Room 4-18"),
        std::make_tuple("OOP Lab", "Section B", "Lab 4-02"),
        std::make_tuple("Understanding Quran", "Section C", "Room 4-19"),
        std::make_tuple("Introduction to Software Engineering", "Section D", "Room 4-17"),
        std::make_tuple("Linear Algebra", "Section E", "Lab 4-01"),
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


    return timetable;

}

	std::string Timetable::getDayName(int dayIndex) const {
		switch (dayIndex) {
		case 0: return "Monday";
		case 1: return "Tuesday";
		case 2: return "Wednesday";
		case 3: return "Thursday";
		case 4: return "Friday";
		default: return "Invalid";
		}
	}

    std::string Timetable::getTimeSlot(int period) const {
        switch (period) {
        case 0: return "08:00 - 09:30";
        case 1: return "09:45 - 11:15";
        case 2: return "11:30 - 01:00";
        case 3: return "01:15 - 02:45";
        case 4: return "03:00 - 04:30";
        default: return "Invalid";
        }

    }