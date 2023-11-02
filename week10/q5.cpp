
#include <iostream>
#include <string>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct DOB {
    string name;
    Date birthdate;
};

int main() {
    DOB myInfo;
    myInfo.name = "Shibli";
    myInfo.birthdate.day = 31;
    myInfo.birthdate.month = 02;
    myInfo.birthdate.year = 2002;

    cout << "Name: " << myInfo.name << endl;
    cout << "Date of Birth: " << myInfo.birthdate.day << "/"
         << myInfo.birthdate.month << "/" << myInfo.birthdate.year << endl;

    return 0;
}