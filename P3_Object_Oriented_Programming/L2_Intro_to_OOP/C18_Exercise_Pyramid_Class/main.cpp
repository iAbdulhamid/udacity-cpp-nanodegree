#include <cassert>
#include <stdexcept>

class Pyramid
{
public:
    // constructor
    Pyramid(float l, float w, float h);

    // accessors
    float Length() const;
    float Width() const;
    float Height() const;

    // mutators
    void Length(float l);
    void Width(float w);
    void Height(float h);

    // public Volume() function
    float Volume() const;

private:
    float length, width, height;

    void ValidateDimensions()
    {
        if (length <= 0 || width <= 0 || height <= 0)
            throw std::invalid_argument("negative dimension");
    }
};

Pyramid::Pyramid(float l, float w, float h) : length(l), width(w), height(h)
{
    Pyramid::ValidateDimensions();
}

float Pyramid::Length() const { return length; }
float Pyramid::Width() const { return width; }
float Pyramid::Height() const { return height; }

void Pyramid::Length(float l)
{
    length = l;
    ValidateDimensions();
}
void Pyramid::Width(float w)
{
    width = w;
    ValidateDimensions();
}
void Pyramid::Height(float h)
{
    height = h;
    ValidateDimensions();
}

float Pyramid::Volume() const { return Length() * Width() * Height() / 3.0; }

// Test
int main()
{
    Pyramid pyramid(4, 5, 6);
    assert(pyramid.Length() == 4);
    assert(pyramid.Width() == 5);
    assert(pyramid.Height() == 6);
    assert(pyramid.Volume() == 40);

    bool caught{false};
    try
    {
        Pyramid invalid(-1, 2, 3);
    }
    catch (...)
    {
        caught = true;
    }
    assert(caught);
}