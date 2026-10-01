#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Employee : public Person {
protected:
    int employeeId;

public:
    void setEmployeeId(int id) {
        employeeId = id;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void setDepartment(string d) {
        department = d;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.setName("Raghavendra");
    m.setEmployeeId(620);
    m.setDepartment("Engineering");

    m.display();

    return 0;
}