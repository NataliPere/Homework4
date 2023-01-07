#include "School.h"
#include <string>
#include <iostream>


School::School(int schoolNum, const std::string& direction) : _SchoolNumber(schoolNum), _dir(direction) {}
		
		School::School(int schoolNum, const std::string& direction) {
			std::cout << "School() constructor\n";
			this->_SchoolNumber = schoolNum;
			this->_dir = direction;
		}

		std::string &School::direction(std::string &dir) {
			return _dir;
		}

		int School::NumSchool() {
			return _SchoolNumber;
		}

		int School::NumClasses() {
			return _numclasses;
		}

		NumClass::NumClass(int num, const std::string& direction) : _num(num), _dir(direction) {}

	
		NumClass::NumClass(int num, const std::string& direction) {
			std::cout << "NumClass() constructor\n";
			this->_num = num;
			this->_dir = direction;
		}

		std::string NumClass::direction(std::string& direction) {
			return _dir;
		}

		int NumClass::classNumber() {
			return _num;
		}

		Student::Student(int num, const std::string& direction, const std::string& sername) : _num(num), _dir(direction), _sername(sername) {}

		Student::Student(int num, const std::string& direction, const std::string& sername) {
			std::cout << "Student() constructor\n";
			this->_num = num;
			this->_dir = direction;
			this->_sername = sername;
		}

		std::string Student::direction(std::string &dir) {
			return _dir;
		}

		int Student::classNumber() {
			return _num;
		}

		std::string Student::sernameStudent() {
			return _sername;
		}

	