#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    static int nextId;

public:
    Employee() {
        id = ++nextId;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
    }
};

int Employee::nextId = 0;

int main() {
    Employee e1;
    Employee e2;
    Employee e3;

    e1.display();
    e2.display();
    e3.display();

    return 0;
}