#include "networkStudent.h"
//#include <string>
//#include "student.h"
//#include <iostream>
//#include "degree.h"

using namespace std;

Degree NetworkStudent::GetDegreeProgram() {
	return degree;
};

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) :
	Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree) {
};