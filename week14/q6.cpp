#include <iostream>
#include <string>

using namespace std;

class Student;

void displayStudentInfo(const Student& student);

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    Student(const string& studentName, int studentAge, double studentGPA)
        : name(studentName), age(studentAge), gpa(studentGPA) {}

    friend void displayStudentInfo(const Student& student);

    const string& getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    double getGPA() const {
        return gpa;
    }
};

void displayStudentInfo(const Student& student) {
    cout << "Student Information:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "GPA: " << student.getGPA() << endl;
}

int main() {
    string name;
    int age;
    double gpa;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter student GPA: ";
    cin >> gpa;

    Student student(name, age, gpa);
    displayStudentInfo(student);

    return 0;
}