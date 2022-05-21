#include <assert.h>
#include <string>

struct Person
{
public:
    // TODO: Add an initialization list
    // Person(std::string n) : name{n} {}        // by value
    Person(std::string const &n) : name{n} {} // by reference
    std::string const name;
};

// Test
int main()
{
    Person alice("Alice");
    Person bob("Bob");
    assert(alice.name != bob.name);
}