#include <iostream>
#include <string>
using namespace std;

class Staff {
public:
    Staff(const string& name, int id) : name(name), id(id) {}

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

private:
    string name;
    int id;
};

class TeacherStaff : public Staff {
public:
    TeacherStaff(const string& name, int id, const string& subject) : Staff(name, id), subject(subject) {}

    string getSubject() const {
        return subject;
    }
private:
    string subject;
};

class NonTeachingStaff : public Staff {
public:
    enum Type { REGULAR, CASUAL };
    NonTeachingStaff(const string& name, int id, Type type) : Staff(name, id), type(type) {}

    Type getType() const {
        return type;
    }

private:
    Type type;
};

class Officer : public NonTeachingStaff {
public:
    Officer(const string& name, int id, Type type, const string& department) : NonTeachingStaff(name, id, type), department(department) {}

    string getDepartment() const {
        return department;
    }

private:
    string department;
};

int main() {
    // Get input from the user
    string teacherName, subject;
    int teacherId;
    cout << "Enter teacher's name: ";
    getline(cin, teacherName);
    cout << "Enter teacher's ID: ";
    cin >> teacherId;
    cin.ignore(); // Clear the input buffer
    cout << "Enter subject: ";
    getline(cin, subject);

    TeacherStaff teacher(teacherName, teacherId, subject);

    string staffName;
    int staffId;
    int staffType;
    cout << "\nEnter non-teaching staff's name: ";
    getline(cin, staffName);
    cout << "Enter non-teaching staff's ID: ";
    cin >> staffId;
    cout << "Enter staff type (0 for REGULAR, 1 for CASUAL): ";
    cin >> staffType;

    NonTeachingStaff::Type nonTeachingType = (staffType == 0) ? NonTeachingStaff::REGULAR : NonTeachingStaff::CASUAL;
    NonTeachingStaff nonTeachingStaff(staffName, staffId, nonTeachingType);

    string officerName, department;
    int officerId;
    cout << "\nEnter officer's name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, officerName);
    cout << "Enter officer's ID: ";
    cin >> officerId;
    cin.ignore(); // Clear the input buffer
    cout << "Enter department: ";
    getline(cin, department);

    Officer officer(officerName, officerId, NonTeachingStaff::REGULAR, department);

    // Display information
    cout << "\nTeacher Information:" << endl;
    cout << "Name: " << teacher.getName() << " (" << teacher.getId() << ")" << endl;
    cout << "Subject: " << teacher.getSubject() << endl;

    cout << "\nNon-Teaching Staff Information:" << endl;
    cout << "Name: " << nonTeachingStaff.getName() << " (" << nonTeachingStaff.getId() << ")" << endl;
    cout << "Type: " << (nonTeachingStaff.getType() == NonTeachingStaff::REGULAR ? "REGULAR" : "CASUAL") << endl;

    cout << "\nOfficer Information:" << endl;
    cout << "Name: " << officer.getName() << " (" << officer.getId() << ")" << endl;
    cout << "Department: " << officer.getDepartment() << endl;

    return 0;
}