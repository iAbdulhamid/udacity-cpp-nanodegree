# Member Initialization

Generally, we want to avoid instantiating an object with undefined members. Ideally, we would like all members of an object to be in a valid state once the object is instantiated. We can change the values of the members later, but we want to avoid any situation in which the members are ever in an invalid state or undefined.

In order to ensure that objects of our `Date` structure always start in a valid state, we can initialize the members from within the structure definition.

```
struct Date {
int day{1};
int month{1};
int year{0};
};
```

There are also several other approaches to either initialize or assign member variables when the object is instantiated. For now, however, this approach ensures that every object of Date begins its life in a defined and valid state.
