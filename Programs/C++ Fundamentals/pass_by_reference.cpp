#include <iostream>
using namespace std;

void changeValue(int& x) {
    x = 100;
}

int main() {
    int value = 10;
    changeValue(value);
    cout << value << endl;
    return 0;
}