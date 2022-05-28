// This example demonstrates the privacy levels between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle
{
public:
    int wheels = 0;
    string color = "blue";

    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle
{
public:
    bool sunroof = false;
    void Wheels(int w)
    {
        wheels = w;
    }
};

class Bicycle : protected Vehicle
{
public:
    bool kickstand = true;
    void Wheels(int w)
    {
        wheels = w;
    }
};

class Scooter : private Vehicle
{
public:
    bool electric = false;
    void Wheels(int w)
    {
        wheels = w;
    }
};

int main()
{
    Car car;
    Bicycle bicycle;
    Scooter scooter;

    car.wheels = 4;
    // bicycle.wheels = 4; // Vehicle::color is inaccessible within this context.
    // scooter.wheels = 4; // Vehicle::color is inaccessible within this context.

    car.Wheels(4);
    bicycle.Wheels(2);
    scooter.Wheels(1);
};