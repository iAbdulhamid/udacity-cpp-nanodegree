# Multiple Inheritance

In this exercise, you'll get some practical experience with multiple inheritance. If you have class `Animal` and another class `Pet`, then you can construct a class `Dog`, which inherits from both of these base classes. In doing this, you are able to incorporate attributes of multiple base classes.

The Core Guidelines have some worthwhile recommendations about how and when to use multiple inheritance:

- ["Use multiple inheritance to represent multiple distinct interfaces"](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c135-use-multiple-inheritance-to-represent-multiple-distinct-interfaces)
- ["Use multiple inheritance to represent the union of implementation attributes"](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c136-use-multiple-inheritance-to-represent-the-union-of-implementation-attributes)

## Instructions

1. Review class `Dog`, which inherits from both `Animal` and `Pet`.
2. Declare a class `Cat`, with a member attribute `color`, that also inherits from both `Animal` and `Pet`.
3. Instantiate an object of class `Cat`.
4. Configure that object to pass the tests in `main()`.
