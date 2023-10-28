#include <iostream>
using namespace std;

class ObjectCounter
{
private:
    static int count;

public:
    ObjectCounter()
    {
        count++;
    }

    ~ObjectCounter()
    {
        count--;
    }

    static void displayCount()
    {
        cout << "Number of objects: " << count << endl;
    }
};

int ObjectCounter::count = 0;

int main()
{
    {
        ObjectCounter obj1;
        ObjectCounter::displayCount();
    } // Object destroyed after the block ends

    {
        ObjectCounter obj2; // Another object created within a block
        ObjectCounter::displayCount(); // Output: Number of objects: 1 (previous object destroyed, new object created)
    } // Object destroyed after the block ends

    ObjectCounter::displayCount();
    return 0;
}

