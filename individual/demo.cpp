#include <iostream>

void printinfo(std::string);
void printHello();
int square(int x);
int add(int, int);
int Maxnum(int, int);
int factorial(int);
bool isEven(int);
int fibonachi(int);
int sum(int a = 10, int b = 5);
int multiply(int a, int b = 5, int c = 6);

int main() {
	printinfo("Valod");
	printHello();
	std::cout << square(5) << std::endl;
	std::cout << add(5, 5) << std::endl;
	std::cout << Maxnum(4, 7) << std::endl;
	std::cout << factorial(5) << std::endl;
	std::cout << isEven(10) << std::endl;
	std::cout << fibonachi(3) << std::endl;
	std::cout << sum() << std::endl;
	std::cout << multiply(5) << std::endl;

	return 0;
}

void printinfo(std::string name) {
	std::cout << name << std::endl;
}

void printHello() {
std::cout << "Hello" << std::endl;
}

int square(int x) {
	return x * x;
}

int add(int a, int b) {
	return a + b;
}

int Maxnum(int a, int b) {
	if(a > b) {
		return a; 
	}else {
		return b; }
}
int factorial(int n) {
	return n * (n - 1);
}

bool isEven(int n) {
	if(n % 2 == 0) {
		return true;
	} else { return false; }
}	

int fibonachi(int n) {
	return (n - 1) + (n - 2);
}

int sum(int a, int b ) {
	return a + b;
}

int multiply(int a, int b, int c) {
	return a * b * c;
}	
