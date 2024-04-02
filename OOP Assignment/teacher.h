#pragma once

#include<string>

class Teacher {
private:
	std::string name;
	std::string subject;

public:
	Teacher();
	Teacher(std::string name, std::string subject);

	std::string getName() const;

	std::string getSubject() const;
};