#include <iostream>
#include <string>


class Engine {
public:
	Engine(int d, int c, bool f) {
		displacement = d;
		cylinders = c;
		fuelInjected = f;
	}
	void printEngine() {
		std::cout << "==Engine Specs==" << std::endl;
		std::cout << "Displacement: " << displacement << "cc" << std::endl;
		std::cout << "Cylinders: " << cylinders << std::endl;
		if (fuelInjected == 1) {
			std::cout << "Fuel Injected: True" << std::endl;
		}
		else {
			std::cout << "Fuel Injected: False" << std::endl;
		}
	}
private:
	int displacement;
	int cylinders;
	bool fuelInjected;
};

class Interior {
public:
	Interior(std::string c, std::string m, int ns) {
		color = c;
		material = m;
		numberOfSeats = ns;
	}
	void printInterior() {
		std::cout << "==Interior Specs==" << std::endl;
		std::cout << "Color: " << color << std::endl;
		std::cout << "Material: " << material << std::endl;
		std::cout << "Number of seats: " << numberOfSeats << std::endl;
	}
private:
	std::string(color);
	std::string(material);
	int numberOfSeats;
};

// More Specific
class Motorcycle {
public:
	Motorcycle(std::string mname, Engine mMotorcycleEngine)
	:motorcycleName(mname),
	motorcycleEngine(mMotorcycleEngine){

	}
	void printInfo() {
		std::cout << "Model: " << motorcycleName << std::endl;
		motorcycleEngine.printEngine();
	}
private:
	std::string(motorcycleName);
	Engine motorcycleEngine;
};


class Car {
public:
	Car(std::string cname, Engine ccarEngine, Interior ccarInterior) 
	:carName(cname),
	carEngine(ccarEngine),
	carInterior(ccarInterior){
		
	}
	void printInfo() {
		std::cout << "Model: " << carName << std::endl;
		carEngine.printEngine();
		carInterior.printInterior();
	}
private:
	std::string carName;
	Engine carEngine;
	Interior carInterior;
};

int main() {
	// Let's create two engines
	Engine engine1(4000, 6, true); // 991 varient engine
	Engine engine2(1811, 2, true); // Indian bagger varient engine

	// Then we will create one interior... since we don't need one for the motorcycle we are going to create
	Interior interior1("black", "leather", 2); // 991 varient interior

	// Now lets creat the cars and motorcylces
	Car car1("Porshe 911 R", engine1, interior1); // Porsehe 911 R (991 varient)
	Motorcycle mc1("Indian Chieftain Limited", engine2);


	std::cout << "Let's take a look at the our first car..." << std::endl;
	car1.printInfo();

	std::cout << "\n\n\n" << "Now let's take a look at the first motorcycle..." << std::endl;
	mc1.printInfo();


	return 0;

}

