#include<iostream>
using namespace std;

struct Engine {
    string engineType;
    int horsepower;
};

struct Car {
    string brand;
    string model;
    int year;
    Engine engine;  // struct inside another struct
};

void printCarInfo(Car car) {
    cout << "Car Brand: " << car.brand << endl;
    cout << "Car Model: " << car.model << endl;
    cout << "Car Year: " << car.year << endl;
    cout << "Engine Type: " << car.engine.engineType << endl;
    cout << "Engine Horsepower: " << car.engine.horsepower << endl;
}

int main() {
    Car myCar;  // Declare the car object

    myCar.brand = "Ford";
    myCar.model = "Mustang";
    myCar.year = 2023;
    myCar.engine.engineType = "V8";  // Accessing the inner struct's members
    myCar.engine.horsepower = 450;

    printCarInfo(myCar);  // Pass the object to the function

    return 0;
}
