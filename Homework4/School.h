#pragma once

#ifndef _School_h_
#define _School_h_

#include <string>
#include <iostream>

class School
{
public:
	School(int schoolNum, const std::string& direction);
	std::string& direction(std::string& dir);
	int NumSchool();
	int NumClasses();
private:
	std::string _dir = "math";
	int _SchoolNumber = 100;
	int _numclasses = 5;
};

class NumClass : public School {
public:
	NumClass(int num, const std::string& direction);
	std::string direction(std::string& direction);
	int classNumber();
private:
	std::string _dir = "math";
	int _num = 7;
};

class Student : public NumClass {
public:
	Student(int num, const std::string& direction, const std::string& sername);
	std::string direction(std::string& dir);
	int classNumber();
	std::string sernameStudent();
private:
	std::string _dir = "math";
	int _num = 7;
	std::string _sername = "Ivanov";
};

#endif // !_School_h_
