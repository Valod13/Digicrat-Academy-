#include <iostream>
#include <string>

enum structure {
	Hashvapahutyun,
	Vacharq,
	Tnoren,
	HR,
	Srah,
	Araqum,
	Operator,
everything,
};

int main() {
enum structure office = everything;
	switch(office) {
	case Hashvapahutyun: 
		std::cout << "Hashvapahutyun" << std::endl;
		break;
	case Vacharq:
		std::cout << "Vacharq" << std::endl;
	break;
	case Tnoren:
		std::cout << "Tnoren" << std::endl;
		break;
	case HR:
		std::cout << "HR" << std::endl;
		break;	
	case Srah:
		std::cout << "Srah" << std::endl;
		break;
	case Araqum:
		std::cout << "Araqum" << std::endl;
		break;
	case Operator:
		std::cout << "Operator" << std::endl;
	default: 
		std::cout << "Sexmeq 1-7 " << std::endl;
		break;
	
	
}

};






















