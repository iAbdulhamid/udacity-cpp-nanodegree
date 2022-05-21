# Exercise: Constructor Syntax

Initializer lists exist for a number of reasons.

- First, the compiler can optimize initialization faster from an initialization list than from within the constructor.

- Second reason is a bit of a technical paradox. If you have a `const` class attribute, you can only initialize it using an initialization list. Otherwise, you would violate the `const` keyword simply by initializing the member in the constructor!

- Third reason is that attributes defined as references must use initialization lists.
