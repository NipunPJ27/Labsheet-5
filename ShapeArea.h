struct Rectangle {
    float length;
    float width;
};

struct Square {
    float length;
};

struct Circle {
    float radius;
};

float areaOfCircle(Circle c);

float areaOfRectangle(Rectangle r);

float areaOfSquare(Square s);

void findPerimeter(Rectangle r, float& perimeter);

float findCost(float costt, float& perimeter);