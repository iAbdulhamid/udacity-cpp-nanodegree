# Friend

In C++, `friend` classes provide an alternative inheritance mechanism to derived classes. The main difference between classical inheritance and friend inheritance is that **a friend class can access private members of the base class**, which isn't the case for classical inheritance. _In classical inheritance, a derived class can only access public and protected members of the base class_.

## Instructions

In this exercise you will experiment with `friend` classes. In the notebook below, implement the following steps:

1. Declare a class `Rectangle`.
2. Define a class `Square`.
3. Add class `Rectangle` as a friend of the class `Square`.
4. Add a private attribute `side` to class `Square`.
5. Create a public constructor in class `Square` that initializes the side attribute.
6. Add private members `width` and `height` to class `Rectangle`.
7. Add a `Rectangle()` constructor that takes a `Square` as an argument.
8. Add an `Area()` function to class `Rectangle`.
