#include <iostream>
using namespace std;

class Base {
public:

    virtual void show() const {
        cout << "Base class implementation" << endl;
    }

    Base() {
        cout << "Base class constructor calling virtual function:" << endl;
        show();
        cout << endl;
    }

    void callShow() const {
        cout << "Base class member function calling virtual function:" << endl;
        show();
        cout << endl;
    }
};

class Derived : public Base {
public:
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
