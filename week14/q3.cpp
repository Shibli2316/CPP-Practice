#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function
    virtual void show() const {
        cout << "Base class implementation" << endl;
    }

    // Constructor calling virtual function
    Base() {
        cout << "Base class constructor calling virtual function:" << endl;
        show();
        cout << endl;
    }

    // Normal member function calling virtual function
    void callShow() const {
        cout << "Base class member function calling virtual function:" << endl;
        show();
        cout << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Override the virtual function
    void show() const override {
        cout << "Derived class implementation" << endl;
    }
};

int main() {
    cout << "Creating a Derived object:" << endl;
    Derived derivedObj;

    cout << "Calling virtual function inside normal member function:" << endl;
    derivedObj.callShow();

    return 0;
}
