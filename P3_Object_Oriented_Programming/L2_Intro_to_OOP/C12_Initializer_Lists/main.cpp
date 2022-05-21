#include <assert.h>
#include <string>

// TODO: Define class Person
// TODO: Define a public member variable: name
// TODO: Define a public constructor with an initialization list

class Person
{
public:
    std::string name;
    Person(std::string n) : name{n} {}
};

// Test
int main()
{
    Person alice("Alice");
    Person bob("Bob");
    assert(alice.name != bob.name);
}