#include <iostream>
#include <string>

struct Student {
std::string name;
int grade;
};

int main() {
	Student student;
	student.name = "";
	student.grade = 0;
	
	std::cout << "Input your name" << std::endl;
	std::cin >> student.name;
	
		std::cout << "Please Input your Grade " << std::endl;
	 
	std::cin >> student.grade;
	if ( student.grade < 0 ) {
		std::cout << "Input positive number" << std::endl;
}

else if ( student.grade <= 40 ) {
	std::cout << "Your grade is D " << std::endl;
}

else if ( student.grade <= 60 ) {
	std::cout << "Your grade is C " << std::endl;
}

else if ( student.grade <= 80 ) {
	std::cout << "Your grade is B " <<  std::endl;
}

else if ( student.grade <= 100 ) {
	std::cout << "Your grade is A " << std::endl;
} 

else { 
	std::cout << "Grade is too high (0-100)" << std::endl;
	}
return 0;	
};

