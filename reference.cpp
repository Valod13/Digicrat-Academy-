#include <iostream> 

/* int main( ) {
int a = 7;
int& r = a;
r = 8;
std::cout << r << std::endl;

	return 0;
} */

struct Student {
std::string*  pName = nullptr;
std::string*  grade;
};


int main( ) {
	Student student;
	*student.name  = "valod";
	std::cout << *student.name << std::endl;
	return 0;
} 
