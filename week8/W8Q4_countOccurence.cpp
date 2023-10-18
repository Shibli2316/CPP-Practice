#include <iostream>
#include <string>

using namespace std;

int main() {
    string line, word;

    cout << "Enter a line of text: ";
    getline(cin, line);

    cout << "Enter the word to count: ";
    cin >> word;

    int count = 0;
    size_t pos = line.find(word);
    while (pos != string::npos) {
        count++;
        pos = line.find(word, pos + word.length());
    }

    cout << "The word '" << word << "' occurs " << count << " times in the given line of text." << endl;

    return 0;
}

