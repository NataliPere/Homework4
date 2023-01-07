#include "School.h"
#include <string>
#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	School s(155, "linguistic");
	std::cout << s.direction() << "\n"; 

	NumClass n(10, "phisics");
	std::cout << n.direction() << "\n";

	Student st(3, "religios", "Petrov");
	std::cout << st.direction() << "\n";

}