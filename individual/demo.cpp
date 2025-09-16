#include <iostream>
#include <string>
class Car {

// Special Functions
public:
	Car(){
		m_year = 2005;
		m_name = "Unknown";
		m_doors = 4;
		m_windows = 6;
		}
	~Car(){

		}
// Public API
public:

// Getter/Setters
public:
	void setYear(int year) {
		if(year > 0){
			year = m_year;
			}else {
					std::cout << "Write positive number" << std::endl;
		 } }
	int getYear() {
			return m_year;
		}

	void setDoors(int doors) { 
		if(doors < 4 | doors <= 2){
			doors = m_doors;
		}else {
			std::cout << "Car can be from 2 to 4 doors" << std::endl;
		} }
	int getDoors() {
		return m_doors;
		}
	
	void setWindows(int windows) {
		if(windows > 2 | windows <= 6){
			windows = m_windows;
			}else {
				std::cout << "Car can be from 2 to 6 windows" << std::endl;
		} }
	int getWindows() { 
		return m_windows;
		}
// Member Data
private:
	std::string m_name;
	int m_year;
	int m_doors;
	int m_windows;
};
int main() {	
	Car bmw;
	bmw.setYear(2005);
	bmw.setDoors(4);
	std::cout << bmw.getYear() << bmw.getDoors() << std::endl;
return 0;
}
