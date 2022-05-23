#include <string>
#include <cstring>
#include <iostream>

class Car
{
    // TODO: Declare private attributes
private:
    char *brand;
    int horse_power;
    int weight;

    // TODO: Declare getter and setter for brand
public:
    std::string Brand() const;
    void Brand(std::string b);
};

// Define setters
void Car::Brand(std::string b)
{
    // Initialization of char array
    Car::brand = new char[b.length() + 1];
    // Copying every character from string to char array
    strcpy(Car::brand, b.c_str());
}

// Define getters
std::string Car::Brand() const { return brand; }

// Test in main()
int main()
{
    Car car;
    car.Brand("Peugeot");
    std::cout << car.Brand() << "\n";
}