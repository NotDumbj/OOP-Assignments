#pragma once

#include<string>

class Student {
private:
	std::string name;
	int rollNumber;

public:
	Student();
	Student(std::string name, int rollNumber);

	std::string getName() const;

	int getRollNumber() const;
};