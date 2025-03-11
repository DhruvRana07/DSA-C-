#include <iostream>
using namespace std;

class School {
    string name, address, mediums;
    int standards;

public:
    School(string name, string address, string mediums, int standards) {
        this->name = name;
        this->address = address;
        this->mediums = mediums;
        this->standards = standards;
    }

    void output() {
        cout << "School Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Mediums: " << mediums << endl;
        cout << "Number of Standards: " << standards << endl << endl;
    }
};

class Trustee {
    string name, power;
    string phone;

public:
    Trustee(string name, string power, string phone) {
        this->name = name;
        this->power = power;
        this->phone = phone;
    }

    void output() {
        cout << "Trustee Name: " << name << endl;
        cout << "Power: " << power << endl;
        cout << "Phone: " << phone << endl << endl;
    }
};

class Principal {
    string name, power, phone, medium;

public:
    Principal(string name, string power, string phone, string medium) {
        this->name = name;
        this->power = power;
        this->phone = phone;
        this->medium = medium;
    }

    void output() {
        cout << "Principal Name: " << name << endl;
        cout << "Power: " << power << endl;
        cout << "Phone: " << phone << endl;
        cout << "Medium: " << medium << endl << endl;
    }
};

class Teacher {
    string name, power, phone, subject;

public:
    Teacher(string name, string power, string phone, string subject) {
        this->name = name;
        this->power = power;
        this->phone = phone;
        this->subject = subject;
    }

    void output() {
        cout << "Teacher Name: " << name << endl;
        cout << "Power: " << power << endl;
        cout << "Phone: " << phone << endl;
        cout << "Subject: " << subject << endl << endl;
    }
};

class Monitor {
    string name, responsibility;
    int grade;

public:
    Monitor(string name, int grade, string responsibility) {
        this->name = name;
        this->grade = grade;
        this->responsibility = responsibility;
    }

    void output() {
        cout << "Monitor Name: " << name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Responsibility: " << responsibility << endl << endl;
    }
};

class Student {
    string name;
    int rollNumber, grade;

public:
    Student(string name, int rollNumber, int grade) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->grade = grade;
    }

    void output() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Grade: " << grade << endl << endl;
    }
};

int main() {
    School school("Green Valley High School", "Dindoli, Surat", "English, Hindi, Gujrati", 12);
    
    Trustee trustee("Rajesh Mehta", "All Authority", "9876543210");
    
    Principal principal("Sunita Sharma", "Teacher to Student", "8765432109", "English");
    
    Teacher teacher("Amit Verma", "Monitor to Students", "7654321098", "Mathematics");
    
    Monitor monitor("Rahul Gupta", 10, "Maintaining Discipline");
    
    Student student("Priya Singh", 25, 10);
    
    school.output();
    trustee.output();
    principal.output();
    teacher.output();
    monitor.output();
    student.output();
    
    return 0;
}