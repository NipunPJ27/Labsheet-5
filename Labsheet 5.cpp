#include<iostream>
#include<iomanip>
#include "ShapeArea.h"

using namespace std;



int main()
{
    struct Rectangle r1, r2;
    struct Square s;
    struct Circle c;

    float area_circle, area_yard, area_rec, area_square, green_yard, cost_val;

    //circle
    cout << "Enter the value of the radius of the pond : " << endl;
    cin >> c.radius;

    //small rectangle
    cout << "Enter the length and width of the rectangular building : " << endl;
    cin >> r1.length >> r1.width;

    //land rectangle
    cout << "Enter the length and width of the land : " << endl;
    cin >> r2.length >> r2.width;

    //square
    cout << "Enter the length and width of the square building : " << endl;
    cin >> s.length;

    area_circle = areaOfCircle(c);
    area_rec = areaOfRectangle(r1);
    area_yard = areaOfRectangle(r2);
    area_square = areaOfSquare(s);

    green_yard = area_yard - (area_circle + area_rec + area_square);

    cout << "Area of the green yard is : " << setiosflags(ios::fixed) << setprecision(3) << green_yard << endl;

    //Perimeter
    float perimeter;
    findPerimeter(r2, perimeter);

    cout << "Perimeter of the yard is : " << perimeter << endl;

    cout << "Enter the cost : ";
    cin >> cost_val;

    float cost_yard = findCost(cost_val, perimeter);

    cout << "Cost to build the fence is : " << setiosflags(ios::fixed) << setprecision(2) << cost_yard << endl;

    return 0;
}


