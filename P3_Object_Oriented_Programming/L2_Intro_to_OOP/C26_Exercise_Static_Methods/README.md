# Exercise: Static Method

In addition to `static` member variables, C++ supports `static` member functions (or "methods"). Just like `static` member variables, `static` member functions are **instance-independent**: they belong to the class, not to any particular instance of the class.

One corollary to this is that we can method invoke a `static` member function _without ever creating an instance of the class_.

You will try just that in this exercise.

## Instructions

1. Refactor `class Sphere` to move the volume calculation into a `static` function.
2. Verify that the class still functions as intended.
3. Make that `static` function public.
4. Call that `static` function directly from `main()` to calculate the hypothetical volume of a sphere you have not yet instantiated.
