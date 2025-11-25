#include <iostream>
using namespace std;

class Vehicle {
protected:
    string model;
    float speed;

public:
    void setModel(string m) {
        model = m;
    }

    void setSpeed(float s) {
        speed = s;
    }

    virtual void displayDetails() {
        cout << "General Vehicle Details\n";
    }
};

class Car : public Vehicle {
public:
    void displayDetails() override {
        cout << "Car Model: " << model << endl;
        cout << "Car Speed: " << speed << " km/h" << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayDetails() override {
        cout << "Bike Model: " << model << endl;
        cout << "Bike Speed: " << speed << " km/h" << endl;
    }
};

int main() {

    Car c;
    c.setModel("Defender");
    c.setSpeed(180);

    Bike b;
    b.setModel("Royal Enfield");
    b.setSpeed(120);

    Vehicle* vehicles[2];

    vehicles[0] = &c;
    vehicles[1] = &b;

    cout << "Displaying Vehicle Details Using Polymorphism:\n\n";

    for (int i = 0; i < 2; i++) {
        vehicles[i]->displayDetails();
        cout << endl;
    }

    return 0;
}
