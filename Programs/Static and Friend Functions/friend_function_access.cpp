#include <iostream>
using namespace std;

class Sample {
private:
    int value;

public:
    Sample(int v) {
        value = v;
    }

    friend void displayValue(Sample s);
};

void displayValue(Sample s) {
    cout << s.value << endl;
}

int main() {
    Sample s(50);
    displayValue(s);
    return 0;
}