#include <iostream>
using namespace std;

class Employee {
    int empID;
    string name, department, city;
    double salary;

public:
    Employee(int empID, string name, string department, string city, double salary) {
        this->empID = empID;
        this->name = name;
        this->department = department;
        this->city = city;
        this->salary = salary;
    }

    void output() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "City: " << city << endl;
        cout << "Salary: " << salary << endl << endl;
    }
};

int main() {
    Employee emp1(101, "Amit Sharma", "IT", "Mumbai", 75000);
    Employee emp2(102, "Priya Verma", "HR", "Bangalore", 65000);
    Employee emp3(103, "Rajesh Kumar", "Finance", "Delhi", 80000);
    
    emp1.output();
    emp2.output();
    emp3.output();
    
    return 0;
}
