#include <iostream>
using namespace std;


class Shape {
public:
    virtual float calculateArea() = 0;   
    virtual void draw() = 0;            
};


class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}

    float calculateArea() {
        return 3.14f * radius * radius;
    }

    void draw() {
        cout << "Drawing Circle with radius " << radius << endl;
    }
};


class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float calculateArea() {
        return length * width;
    }

    void draw() {
        cout << "Drawing Rectangle of " << length << " x " << width << endl;
    }
};

int main() {
   
    Shape* shapes[2];

    shapes[0] = new Circle(8);
    shapes[1] = new Rectangle(8, 5);

    
    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        cout << "Area = " << shapes[i]->calculateArea() << endl << endl;
    }

    
    delete shapes[0];
    delete shapes[1];

    return 0;
}
