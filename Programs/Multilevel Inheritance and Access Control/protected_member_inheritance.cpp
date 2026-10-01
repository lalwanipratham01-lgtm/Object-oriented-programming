#include <iostream>
using namespace std;

class Parent {
protected:
    int value;

public:
    void setValue(int v) {
        value = v;
    }
};

class Child : public Parent {
public:
    void displayValue() {
        cout << value << endl;
    }
};

class GrandChild : public Child {
public:
    void display() {
        cout << value * 2 << endl;
    }
};

int main() {
    GrandChild g;

    g.setValue(25);
    g.displayValue();
    g.display();

    return 0;
}