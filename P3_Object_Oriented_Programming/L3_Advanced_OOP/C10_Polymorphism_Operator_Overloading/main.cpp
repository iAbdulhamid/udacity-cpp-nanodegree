#include <assert.h>

// TODO: Define Point class
class Point
{
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {} // TODO: Define public constructor

    // TODO: Define + operator overload
    Point operator+(const Point &addend)
    {
        return Point(x + addend.x, y + addend.y);
    }

    // TODO: Declare attributes x and y
    int x, y;
};

// Test in main()
int main()
{
    Point p1(10, 5), p2(2, 4);
    Point p3 = p1 + p2; // An example call to "operator +";
    assert(p3.x == p1.x + p2.x);
    assert(p3.y == p1.y + p2.y);
}