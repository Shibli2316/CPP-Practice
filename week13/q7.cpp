#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display\n";
    }
};

class Derived1 : virtual public Base {
public:
};

class Derived2 : virtual public Base {
public:
};

class MultipleDerived : public Derived1, public Derived2 {
public:
};

int main() {
    MultipleDerived obj;
    obj.display();

    return 0;
}
