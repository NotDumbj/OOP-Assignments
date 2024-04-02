#pragma once

#include<string>

class Course {
private:
	std::string courseName;

public:
	Course();
	Course(std::string course_Name);

	std::string getCourseName() const;
};