
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
    myInfo.name = "Sarim";
    myInfo.birthdate.day = 25;
    myInfo.birthdate.month = 02;
    myInfo.birthdate.year = 2002;

    // Displaying name and date of birth
    cout << "Name: " << myInfo.name << endl;
    cout << "Date of Birth: " << myInfo.birthdate.day << "/"
         << myInfo.birthdate.month << "/" << myInfo.birthdate.year << endl;

    return 0;
}