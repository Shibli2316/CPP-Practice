#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line, word;

    cout << "Enter a line of text: ";
    getline(cin, line);

    cout << "Enter the word to count: ";
    cin >> word;

    int count = 0;
    string temp;
    stringstream ss(line);
    while (ss >> temp) {
        if (temp == word) {
            count++;
        }
    }

    cout << "The word '" << word << "' occurs " << count << " times in the given line of text." << endl;

    return 0;
}
