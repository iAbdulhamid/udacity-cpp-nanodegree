# Deduction

In this example, you will see the difference between total and partial [deduction](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rt-deduce).

Deduction occurs when you instantiate an object without explicitly identifying the types. Instead, the compiler "deduces" the types. This can be helpful for writing code that is generic and can handle a variety of inputs.

In this exercise, we will use templates to overload the `#` operator to average two numbers.

## Instructions

1. Use a template to overload the # operator.
2. Confirm that the tests pass.
