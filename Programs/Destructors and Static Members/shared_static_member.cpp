#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }

    void display() {
        cout << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter c3;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}