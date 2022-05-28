#include <iostream>
#include <string>
using std::string;

class Vehicle
{
public:
    int wheels = 0;
    string color = "blue";
    int doors = 0;

    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels and " << doors << " doors!\n";
    }
};

class Car : public Vehicle
{
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle
{
public:
    bool kickstand = true;
};

class Van : public Vehicle
{
public:
    string size = "";
};

int main()
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.doors = 4;
    car.Print();
    if (car.sunroof)
        std::cout << "And a sunroof!\n";

    Van v;
    v.wheels = 2;
    v.color = "green";
    v.doors = 2;
    v.size = "small";
    v.Print();
    if (v.size != "")
        std::cout << "It's a " << v.size << " size!\n";
};