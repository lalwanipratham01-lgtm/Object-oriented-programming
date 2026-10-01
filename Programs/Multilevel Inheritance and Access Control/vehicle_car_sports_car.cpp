#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    void setBrand(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
protected:
    int doors;

public:
    void setDoors(int d) {
        doors = d;
    }
};

class SportsCar : public Car {
private:
    int topSpeed;

public:
    void setTopSpeed(int speed) {
        topSpeed = speed;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Doors: " << doors << endl;
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

int main() {
    SportsCar s;

    s.setBrand("Porsche");
    s.setDoors(2);
    s.setTopSpeed(300);

    s.display();

    return 0;
}