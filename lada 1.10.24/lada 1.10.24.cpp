#include <iostream>
#include <cmath>
using namespace std;

class Square {
    int side;  
public:
    Square(int s) : side(s) {}  

  int getSide()  {
        return side;
    }

    int getArea()  {
        return side * side;
    }
    void display()  {
        cout << "Side of the square: " << side << endl;
        cout << "Square area: " << getArea() << endl;
    }
};

class CircleInSquare : public Square {
public:
 
    CircleInSquare(int side) : Square(side) {}

   int getRadius() {
        return getSide() / 2.0;
    }

    int getCircleArea()  {
     int radius = getRadius();
        return 3.14 * radius * radius;
    }

    void display()  {
        cout << "A circle inscribed in a square:" << endl;
        Square::display();
        cout << "Circle radius:" << getRadius() << endl;
        cout << "Circle area: " << getCircleArea() << endl;
    }
};

int main() {
    int side;
    cout << "Enter the side of the square: ";
    cin >> side;

    CircleInSquare a(side);
    a.display();

    return 0;
}


//2
#include <iostream>
using namespace std;

class Wheels {
public:
    int numberOfWheels;

    Wheels(int number) : numberOfWheels(number) {}

    void displayWheelsInfo() const {
        cout << "number of wheels: " << numberOfWheels << endl;
    }
};

class Engine {
public:
    int horsepower;

    Engine(int hp) : horsepower(hp) {}

    void displayEngineInfo() const {
        cout << "Engine power: " << horsepower << " hp" << endl;
    }
};

class Doors {
public:
    int numberOfDoors;

    Doors(int number) : numberOfDoors(number) {}

    void displayDoorsInfo() const {
        cout << "Number of door: " << numberOfDoors << endl;
    }
};

class Trunk {
public:
    double trunkVolume;

    Trunk(double volume) : trunkVolume(volume) {}

    void displayTrunkInfo() const {
        cout << "Trunk volume: " << trunkVolume << " liters" << endl;
    }
};

class FuelTank {
public:
    double fuelVolume;

    FuelTank(double volume) : fuelVolume(volume) {}

    void displayFuelInfo() const {
        cout << "Fuel tank volume: " << fuelVolume << " liters" << endl;
    }
};

class Performance {
public:
    double acceleration;
    double maxSpeed;

    Performance(double accel, double maxSpd) : acceleration(accel), maxSpeed(maxSpd) {}

    void displayPerformanceInfo() const {
        cout << "Acceleration 0-100 km/h: " << acceleration << " second" << endl;
        cout << "Maximum speed: " << maxSpeed << " km/h" << endl;
    }
};
class Car : public Wheels, public Engine, public Doors, public Trunk, public FuelTank, public Performance {
public:
    string model;

    Car(string carModel, int numWheels, int horsepower, int numDoors, double trunkVol, double fuelVol, double accel, double maxSpd)
        : Wheels(numWheels), Engine(horsepower), Doors(numDoors), Trunk(trunkVol), FuelTank(fuelVol), Performance(accel, maxSpd), model(carModel) {}

    void displayCarInfo() const {
        cout << "Model of car: " << model << endl;
        displayWheelsInfo();
        displayEngineInfo();
        displayDoorsInfo();
        displayTrunkInfo();
        displayFuelInfo();
        displayPerformanceInfo();
    }
};

int main() {
    Car myCar("audi rs7 sportback", 4, 600, 4, 535, 75, 3.9, 305);
    myCar.displayCarInfo();

    return 0;
}
