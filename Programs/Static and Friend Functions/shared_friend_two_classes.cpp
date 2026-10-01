#include <iostream>
using namespace std;

class Second;

class First {
private:
    int value1;

public:
    First(int v) {
        value1 = v;
    }

    friend int add(First, Second);
};

class Second {
private:
    int value2;

public:
    Second(int v) {
        value2 = v;
    }

    friend int add(First, Second);
};

int add(First a, Second b) {
    return a.value1 + b.value2;
}

int main() {
    First a(10);
    Second b(20);

    cout << add(a, b) << endl;
    return 0;
}