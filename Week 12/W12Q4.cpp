#include <iostream>
using namespace std;

class ObjectCounter{
private:
    static int count;

public:
    ObjectCounter(){
        count++;
    }

    ~ObjectCounter(){
        count--;
    }
    static void displayCount(){
        cout << "Number of objects: " << count << endl;
    }
};

int ObjectCounter::count = 0;

int main(){
    {
        ObjectCounter obj1;
        ObjectCounter::displayCount();
    } 
    {
        ObjectCounter obj2; 
        ObjectCounter::displayCount(); 
    } 
    ObjectCounter::displayCount();
    return 0;
}