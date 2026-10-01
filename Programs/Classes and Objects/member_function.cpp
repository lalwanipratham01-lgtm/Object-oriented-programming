#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setDetails(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setDetails("Raghavendra", 620, 90.5);
    s.displayDetails();
    return 0;
}
