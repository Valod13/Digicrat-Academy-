#include <iostream>
#include <string>

class Engine{
public:

	Engine() : hpower(0), liter(0) {};
		
		

	void sethpower(int horse){
		if(horse > 0){
			hpower = horse;
		}else {
			std::cout << "Write  positive number" << std::endl;
		} }
		
	int gethpower(){
		return hpower;}

	void setlitr(int mlitr){ 
		if(mlitr > 0){
			liter = mlitr;
			}else {
				std::cout << "Write positive number" << std::endl;
		} }

	int getlitr(){
		return liter; }
private:
	int hpower;
	int liter;


};

class Car{
public:
	
	void setcarhpower(int carhpower){
		if(carhpower > 0){
			careng.sethpower(carhpower);
			} else {
				std::cout << "Write positive number" << std::endl;
				}
		}

	int getcarpower(){
			return careng.gethpower();
	}	

	void setcarliter(int carliter){
		if(carliter > 0) {
			careng.setlitr(carliter);
	}	else {
			std::cout << "Wrtie positive number" << std::endl;
		}

		}

	int getcarliter(){
		  return careng.getlitr();
			}
private:
Engine careng;
};

class Helicopter {
public:
	Helicopter() {
		heliengine.sethpower(0);
		}
	void sethelipower(int hpower){
		if(hpower > 0 ){
			heliengine.sethpower(hpower); 
		} else {
		std::cout << "Write positive number" <<std::endl;
			} }
			
	int getHeliPower(){
		return heliengine.gethpower();
			} 
	
	void sethelilitr(int litr){ 
		if( litr > 0){
			heliengine.setlitr(litr);
			} else {
				std::cout << "Write positive number" << std::endl; 
			}
		}
	
	int getHeliLitr(){
		return heliengine.getlitr();
		}
private:
Engine heliengine;
};
int main() {
Car mybmw;
mybmw.setcarhpower(500);
mybmw.setcarliter(20);
std::cout << "Car Engine Horse Power: " << mybmw.getcarpower() << std::endl;
std::cout << "Car Motor Liter: " << mybmw.getcarliter() << std::endl;	
Helicopter myhelicopter;
myhelicopter.sethelipower(8000);
myhelicopter.sethelilitr(300);
std::cout << "Helicopter Engine Horse Power: " << myhelicopter.getHeliPower() << std::endl;
std::cout << "Helicopter Engine Liter: " << myhelicopter.getHeliLitr() << std::endl;
return 0;
}
