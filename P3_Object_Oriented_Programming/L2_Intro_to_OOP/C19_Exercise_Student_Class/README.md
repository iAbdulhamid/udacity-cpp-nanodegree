# Exercise: Student Class

Your goal in this lab is to write a class called Student that will hold data about a particular student. Your class simply needs to store the data and provide accessors and mutators.

## Directions

1. Add 3 private member variables to the class:
   - Name
   - Grade (e.g. 9th grade)
   - Grade Point Average
2. Write a public constructor function to set the private attributes.
3. Create public member functions to set each of the member variables. Before setting the values verify that:
   - Grade is from 0 (kindergarten) to 12
   - GPA is from 0.0 to 4.0
   - The function must either throw an exception if any of the invariants are violated
4. Within the `main()` (outside of the class), declare an object of type `Student` and test out each of the member function calls.
