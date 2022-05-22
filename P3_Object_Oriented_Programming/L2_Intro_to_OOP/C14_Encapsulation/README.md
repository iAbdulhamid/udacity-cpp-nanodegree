# Encapsulation

[Encapsulation](https://en.wikipedia.org/wiki/Encapsulation_(computer_programming%29) is the grouping together of data and logic into a single unit. In object-oriented programming, classes encapsulate data and functions that operate on that data.

This can be a delicate balance, because on the one hand we want to group together relevant data and functions, but on the hand we want to [limit member functions to only those functions that need direct access to the representation of a class](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c4-make-a-function-a-member-only-if-it-needs-direct-access-to-the-representation-of-a-class).

In the context of a `Date` class, a function `Date Tomorrow(Date const & date)` probably does not need to be encapsulated as a class member. It can exist outside the `Date` class.

However, a function that calculates the number of days in a month probably should be encapsulated with the class, because the class needs this function in order to operate correctly.

## Exercise: Encapsulation

Add a private member function that calculates the number of days in a month, and use it to update the class invariants. Be sure to account for [leap years](https://en.wikipedia.org/wiki/Leap_year#Algorithm)!
