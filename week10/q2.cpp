#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string name;
    float basicPay;
};

void calculateGrossSalary(Employee &employee) {
    const float DA_PERCENTAGE = 52;
    float DA = (DA_PERCENTAGE / 100) * employee.basicPay;
    float grossSalary = employee.basicPay + DA;
    cout << "Employee Name: " << employee.name << endl;
    cout << "Gross Salary: " << grossSalary << endl;
}

int main() {
    const int numEmployees = 2;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        cout << "Enter name of employee #" << (i + 1) << ": ";
        cin >> employees[i].name;
        cout << "Enter basic pay of employee #" << (i + 1) << ": ";
        cin >> employees[i].basicPay;
    }

    cout << "\nEmployee Gross Salaries:\n";
    for (int i = 0; i < numEmployees; ++i) {
        calculateGrossSalary(employees[i]);
    }

    return 0;
}
