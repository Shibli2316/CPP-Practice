#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence, findStr, replaceStr;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the string to find: ";
    cin >> findStr;
    cout << "Enter the string to replace it with: ";
    cin >> replaceStr;

    size_t pos = sentence.find(findStr);
    while (pos != string::npos) {
        sentence.replace(pos, findStr.length(), replaceStr);
        pos = sentence.find(findStr, pos + replaceStr.length());
    }

    cout << "Modified sentence: " << sentence << endl;

    return 0;
}

