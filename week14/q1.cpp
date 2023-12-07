#include <iostream>
using namespace std;

class Person{
private:
    int age;

public:
    Person(int initialAge){
        age = initialAge;
    }

    Person elder(const Person& other){
        if (this->age > other.age){
            return *this;
        }
        else{
            return other;
        }
    }

    int getAge() const{
        return age;
    }
};

int main(){
    int age1, age2;
    cout << "Enter age of person 1: ";
    cin >> age1;
    cout << "Enter age of person 2: ";
    cin >> age2;

    Person person1(age1);
    Person person2(age2);

    Person elderPerson = person1.elder(person2);

    cout << "The elder person is aged: " << elderPerson.getAge() << endl;

    return 0;
}
