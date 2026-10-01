#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    void setDimensions(double l, double b) {
        length = l;
        breadth = b;
    }

    void displayArea() {
        cout << length * breadth << endl;
    }
};

int main() {
    Rectangle r;
    double l, b;
    cin >> l >> b;
    r.setDimensions(l, b);
    r.displayArea();
    return 0;
}