#include <iostream>
#include <string>

using namespace std;

class Flight {
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
    Flight(int flightNum, const string& src, const string& dest, double flightFare) {
        flight_no = flightNum;
        source = src;
        destination = dest;
        fare = flightFare;
    }

    void displayFlightInfo() {
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
    }
};

int main() {
    Flight flight1(101, "New York", "Los Angeles", 350.0);

    cout << "Flight Information:" << endl;
    flight1.displayFlightInfo();

    return 0;
}
