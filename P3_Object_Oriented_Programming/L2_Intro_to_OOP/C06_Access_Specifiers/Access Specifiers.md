# Access Specifiers

Members of a structure can be specified as `public` or `private`.

By default, all members of a structure are `public`, unless they are specifically marked `private`.

Public members can be changed directly, by any user of the object, whereas private members can only be changed by the object itself.

## Private Members

This is an implementation of the `Date` structure, with all members marked as `private`.

```
struct Date {
private:
int day{1};
int month{1};
int year{0};
};
```

Private members of a class are accessible only from within other member functions of the same class (or from their "friends", which we’ll talk about later).

There is a third access modifier called `protected`, which implies that members are accessible from other member functions of the same class (or from their "friends"), and also from members of their derived classes. We'll also discuss about derived classes later, when we learn about inheritance.

## Accessors And Mutators

To access `private` members, we typically define public "accessor" and "mutator" member functions (sometimes called "getter" and "setter" functions).

```
struct Date {
public:
int Day() { return day; }
void Day(int day) { this.day = day; }
int Month() { return month; }
void Month(int month) { this.month = month; }
int Year() { return year; }
void Year(int year) { this.year = year; }

private:
int day{1};
int month{1};
int year{0};
};
```
