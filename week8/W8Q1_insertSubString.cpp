#include <iostream>
#include <string>
using namespace std;

string insertSubstring(string mainStr, string subStr, int position) {
    return mainStr.insert(position, subStr);
}
string deleteCharacters(string str, int position, int n) {
    return str.erase(position, n);
}

int main() {
    string mainString, subString;
    int insertPosition, deletePosition, numCharsToDelete;
    cout << "Enter the main string: ";
    getline(cin, mainString);
    cout << "Enter the substring to insert: ";
    getline(cin, subString);
    cout << "Enter the position to insert the substring: ";
    cin >> insertPosition;
    string resultStringAfterInsertion = insertSubstring(mainString, subString, insertPosition);
    cout << "Result after inserting substring: " << resultStringAfterInsertion << endl;
    cout << "Enter the position to start deletion: ";
    cin >> deletePosition;
    cout << "Enter the number of characters to delete: ";
    cin >> numCharsToDelete;
    string resultStringAfterDeletion = deleteCharacters(resultStringAfterInsertion, deletePosition, numCharsToDelete);
    cout << "Result after deleting characters: " << resultStringAfterDeletion << endl;

    return 0;
}

