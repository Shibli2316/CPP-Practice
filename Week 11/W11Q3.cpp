#include <iostream>
using namespace std;
int main(){
    int number, originalNumber, reverseNumber = 0, digit, sum = 0, alternateSum1 = 0, alternateSum2 = 0;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    if (number < 1000 || number > 9999){
        cout << "Invalid input. Please enter a 4-digit number." << endl;
        return 1; 
    }
    originalNumber = number;
    while (number != 0){
        digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number = number / 10;
    }
    sum = originalNumber + reverseNumber;
    int position = 1;
    while (originalNumber != 0){
        digit = originalNumber % 10;
        if (position % 2 == 0){
            alternateSum1 += digit;
        }
        else{
            alternateSum2 += digit;
        }
        originalNumber = originalNumber / 10;
        position++;
    }
    cout << "Reverse of the number: " << reverseNumber << endl;
    cout << "Sum of the number with its reverse: " << sum << endl;
    cout << "Sum of alternate digits at even positions: " << alternateSum1 << endl;
    cout << "Sum of alternate digits at odd positions: " << alternateSum2 << endl;
    return 0;
}
// menu driven