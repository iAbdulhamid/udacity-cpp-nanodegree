#include <iostream>
#include <string>
using std::string;

class BankAccount
{
private:
    // TODO: declare member variables
    int id;
    string owner;
    double funds;

public:
    // constructor
    BankAccount(int id, string n, double f);

    // TODO: declare setters
    void ID(int id);
    void Owner(string n);
    void Funds(int f);

    // TODO: declare getters
    int ID() const;
    string Owner() const;
    double Funds() const;
};
// constructor
BankAccount::BankAccount(int id, string n, double f) : id{id}, owner{n}, funds{f} {}

// TODO: implement setters
void BankAccount::ID(int id) { id = id; }
void BankAccount::Owner(string n) { owner = n; }
void BankAccount::Funds(int f) { funds = f; }

// TODO: implement getters
int BankAccount::ID() const { return id; }
string BankAccount::Owner() const { return owner; }
double BankAccount::Funds() const { return funds; }

int main()
{
    // TODO: instantiate and output a bank account
    BankAccount account(123456789, "ibrahim", 12.68);
    std::cout << "Account Information\n";
    std::cout << "-------------------\n";
    std::cout << "ID: " << account.ID() << "\n";
    std::cout << "Owner: " << account.Owner() << "\n";
    std::cout << "Funds: $" << account.Funds() << "\n";
}