#include <iostream>
#include <string>
using namespace std;

struct Address {
    string name;
    string home_address;
    string hostel_address;
    string city;
    string state;
    string zip;
};

int main() {
    Address myAddress;
    myAddress.name = "John Doe";
    myAddress.home_address = "123 Main Ghar";
    myAddress.hostel_address = "456 College Ave";
    myAddress.city = "Stadt";
    myAddress.state = "Kanada";
    myAddress.zip = "12345";

    // Displaying the present address
    cout << "Name: " << myAddress.name << endl;
    cout << "Home Address: " << myAddress.home_address << endl;
    cout << "Hostel Address: " << myAddress.hostel_address << endl;
    cout << "City: " << myAddress.city << endl;
    cout << "State: " << myAddress.state << endl;
    cout << "Zip: " << myAddress.zip << endl;

    return 0;
}