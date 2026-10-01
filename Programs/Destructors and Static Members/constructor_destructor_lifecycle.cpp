#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default constructor" << endl;
    }

    Demo(int x) {
        cout << "Parameterized constructor: " << x << endl;
    }

    Demo(const Demo& d) {
        cout << "Copy constructor" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(10);
    Demo d3(d2);

    return 0;
}