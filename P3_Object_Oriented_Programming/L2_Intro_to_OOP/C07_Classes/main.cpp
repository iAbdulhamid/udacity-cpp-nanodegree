#include <iostream>
#include <cassert>

class Date
{
public:
    // accessors
    int Day() { return day; }
    int Month() { return month; }
    int Year() { return year; }

    // mutators
    void Day(int d)
    {
        if (d > 0 && d <= 31)
            day = d;
    }
    void Month(int m)
    {
        if (m > 0 && m <= 12)
            month = m;
    }
    void Year(int y) { year = y; }

private:
    int day{1};
    int month{1};
    int year{0};
};

// Test in main
int main()
{
    Date date;
    date.Day(-1);
    date.Month(14);
    date.Year(2000);

    assert(date.Day() != -1);
    assert(date.Month() != 14);
    assert(date.Year() == 2000);

    std::cout << date.Day() << '-' << date.Month() << '-' << date.Year() << '\n';
}
