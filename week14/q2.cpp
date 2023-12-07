#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a generic shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a square." << endl;
    }
};

class Triangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a triangle." << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Triangle();

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
