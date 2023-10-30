#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char *str) {
    int vowelCount = 0;
    while (*str) {
        char c = *str;
        c = tolower(c);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowelCount++;
        }
        str++;
    }

    return vowelCount;
}

int main() {
    char inputString[100];

    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    int vowels = countVowels(inputString);

    cout << "Number of vowels in the string: " << vowels << endl;

    return 0;
}
