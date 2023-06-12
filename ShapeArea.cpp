
#include <iostream>
#include "ShapeArea.h"
using namespace std;

float areaOfCircle(Circle c)
{
    return (22.0 / 7) * c.radius * c.radius;
}

float areaOfRectangle(Rectangle r)
{
    return r.length * r.width;
}

float areaOfSquare(Square s)
{
    return s.length * s.length;
}

void findPerimeter(Rectangle r, float& perimeter)
{
    perimeter = 2 * (r.width + r.length);
}

float findCost(float costt, float& perimeter)
{
    float cost = costt * perimeter;
    return cost;
}