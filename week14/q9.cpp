#include <iostream>
#include <stdexcept>

using namespace std;

class CustomException : public exception{
public:
    CustomException(const string& message) : message_(message) {}

    const char* what() const noexcept override{
        return message_.c_str();
    }

private:
    string message_;
};

int main(){
    try{
        throw CustomException("This is a custom exception message");
    }
    catch (const CustomException& e){
        cout << "Caught exception: " << e.what() << endl;
    }
    catch (const exception& e){
        cout << "Caught unexpected exception: " << e.what() << endl;
    }
    cout << "Finally block executed." << endl;

    return 0;
}