#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual function
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) { r = radius; }
    void area() { cout << "Area of Circle: " << 3.14 * r * r << endl; }
};

class Rectangle : public Shape {
    double l, b;
public:
    Rectangle(double length, double breadth) { l = length; b = breadth; }
    void area() { cout << "Area of Rectangle: " << l * b << endl; }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);
    c.area();
    r.area();
    return 0;
}
