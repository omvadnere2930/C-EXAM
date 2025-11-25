#include <iostream>
using namespace std;

class Vehicle {
private:
    string model;
    float speed;

public:
    void setModel(string m) {
        model = m;
    }

    void setSpeed(float s) {
        speed = s;
    }

    string getModel() {
        return model;
    }

    float getSpeed() {
        return speed;
    }

  
    float calculateTime(float distance) {
        return distance / speed; 
    }
};


class Car : public Vehicle {
public:
    void showTime(float distance) {
        float t = calculateTime(distance);
        cout << "Car (" << getModel() << ") takes " << t << " hours.\n";
    }
};


class Bike : public Vehicle {
public:
    void showTime(float distance) {
        float t = calculateTime(distance);
        cout << "Bike (" << getModel() << ") takes " << t << " hours.\n";
    }
};

int main() {
    Car c;
    c.setModel("Honda City");
    c.setSpeed(110); 

    Bike b;
    b.setModel("Splender");
    b.setSpeed(130); 

    float distance = 200;

    cout << "Distance = " << distance << " km\n\n";

    
    c.showTime(distance);
    b.showTime(distance);

    return 0;
}
