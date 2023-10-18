#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    if (isPalindrome(inputString)) {
        cout << inputString << " is a palindrome." << endl;
    } else {
        cout << inputString << " is not a palindrome." << endl;
    }

    return 0;
}

