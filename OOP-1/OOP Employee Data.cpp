#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    string department;
    string city;
    double salary;

public:
    Employee(int id, string n, string dept, string c, double s) 
	{
        empID = id;
        name = n;
        department = dept;
        city = c;
        salary = s;
    }

    void display() 
	{
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "City: " << city << endl;
        cout << "Salary: " << salary << endl;
        cout << "---------------------------" << endl;
    }
};

int main() 
{
    Employee emp1(101, "Amit Sharma", "IT", "Mumbai", 75000);
    Employee emp2(102, "Priya Verma", "HR", "Bangalore", 65000);
    Employee emp3(103, "Rajesh Kumar", "Finance", "Delhi", 80000);

    cout << "Employee Details:\n";
    cout << "---------------------------" << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}