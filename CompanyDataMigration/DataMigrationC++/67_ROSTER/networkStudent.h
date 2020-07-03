#pragma once
#ifndef NetworkStudent_H
#define NetworkStudent_H
#include "student.h"
//#include <string>
//#include "degree.h"

using namespace std;

class NetworkStudent : public Student {

public:
	NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	Degree GetDegreeProgram() override;
	Degree degree = NETWORK;
};
#endif