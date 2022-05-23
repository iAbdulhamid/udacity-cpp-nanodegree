#include <string>
#include <cstring>
#include <iostream>

class Car
{
    // TODO: Declare private attributes
private:
    std::string brand;
    int horse_power;
    int weight;

    // TODO: Declare getter and setter for brand
public:
    std::string Brand() const;
    void Brand(char *);
};

// Define setters
void Car::Brand(char *brand) { Car::brand = brand; }

// Define getters
std::string Car::Brand() const { return brand; }

// Test in main()
int main()
{
    Car car;
    char brand[] = "Peugeot";
    car.Brand(brand);
    std::cout << car.Brand() << "\n";
}