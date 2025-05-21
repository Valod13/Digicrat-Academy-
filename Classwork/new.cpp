#include<iostream>
#include<string>

enum eWeekday { MON = 1, TUE, WEN, THU, FRI, SAT, SUN, UNKNOWN };


int main( ) {
int iDay = 0;
	while ( true ) {
		std::cout << "Enter 1-7 to get weekday\nEnter 0 to exit" << std::endl;
		std::cin >> iDay;
		eWeekday weekday = static_cast<eWeekday>(iDay);
			if ( iDay == 0) {
				std::cout << "Exiting" << std::endl;
				break;
			}
		switch( iDay ) {
			case MON: 
				std::cout << "Monday" << std::endl;
				break;
			case TUE: 
				std::cout << "Tuesday" << std::endl;
				break;
			case WEN: 
				std::cout << "Wensday" << std::endl;
				break;
			case THU: 
				std::cout << "Thursday" << std::endl;
				break;
			case FRI: 
				std::cout << "Friday" << std::endl;
				break;
			case SAT: 
				std::cout << "Saturday" << std::endl;
				break;
			case SUN: 
				std::cout << "Sunday" << std::endl;
				break;
			default:
				std::cout << "Invalid weekday" << std::endl;
				break;
}



	return 0;
}

}
