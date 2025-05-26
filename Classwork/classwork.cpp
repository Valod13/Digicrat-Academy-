#include<iostream>
#include<string>

enum eCategory { MATH, ENG, PROG, UNKNOWN };

int main( ) {
	int iScore = 0;
	for ( int i = 0; i < 3; i++ ) {
	eCategory category;
	category = static_cast<eCategory>(i);


	switch( category ) {
	case MATH: {	
		 int answer1 = 12;
		 std::cout << "Question from Math" << std::endl;
		 std::cout << " 5 + 7 = ?" << std::endl;
		 std::cin >> answer1;
			 if( answer1 == 12 ) {
		 		 std::cout << "Correct answer" << std::endl;
				 iScore++;
				 } else {
					 std::cout << "Think Again" << std::endl;
					 }
					break; 
				}
	case ENG: {
		 std::string answer2;
		 std::cout << "Question from English" << std::endl;
		 std::cout << "Transle word 'Hello' to Armenian " << std::endl;
		 std::cin >> answer2; 
			if( answer2 == "Barev"|| answer2 == "barev" ) {
				std::cout << "Correct answer" << std::endl;
				iScore++;
			    } else {
					std::cout << "Think Again" << std::endl;
				       }
					break; 
			  }
		case PROG: {
		std::cout << "Question from Programing" << std::endl;
		std::cout << " question "  << std::endl;
		std::string answer3;
		std::cin >> answer3;
			if ( answer3 == "answer" ) {
			std::cout << "Correct" << std::endl;
			iScore++;
			} else { 
				std::cout << "Think Again" << std::endl;
				   }
			}		
}
}

return 0;
}


