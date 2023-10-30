#include <iostream>
using namespace std;
class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    MyClass& getThis() {
        return *this;
    }
};

int main() {
    MyClass obj(42);
    MyClass& ref = obj.getThis();
    ref.value = 99;
    cout << "Updated value: " << obj.value <<endl;
    return 0;
}
