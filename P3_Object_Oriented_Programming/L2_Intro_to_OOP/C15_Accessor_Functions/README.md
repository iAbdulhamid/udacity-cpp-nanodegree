# Accessor Functions

Accessor functions are public member functions that allow users to access an object's data, albeit indirectly.

**`const`**
Accessors should only retrieve data. They should not change the data stored in the object.

The main role of the `const` specifier in accessor methods is to protect member data. When you specify a member function as `const`, the compiler will prohibit that function from changing any of the object's member data.

## Exercise: Bank Account Class

Your task is to design and implement class called `BankAccount`. This will be a generic account defined by its account number, the name of the owner and the funds available.

Complete the following steps:

1. Create class called `BankAccount`
2. Use typical info about bank accounts to design attributes, such as the account number, the owner name, and the available funds.
3. Specify access so that member data are protected from other parts of the program.
4. Create accessor and mutator functions for member data.
