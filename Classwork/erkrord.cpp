#include <iostream>
#include <string>


int main() {
for (int i = 0; i < 3 ; i++ ) {
std::string username;
std::string password;
	username = "Student";
	password = "Student";

std::cout << "Input your username :" << std::endl;
std::cin >> username;
if ( username == "Student" ) {
	  }			
std::cout << "Input your password :" << std::endl;
std::cin >> password;
	if ( password == "Student" ) {
		std::cout << "Login Succesfull" << std::endl;
			break; }
		else {
			std::cout << "Wrong Username or Password" << std::endl;

}

}
return 0;	
}
