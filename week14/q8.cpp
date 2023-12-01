#include <iostream>
#include <fstream>

using namespace std;

int countCharacters(const string& fileName) {
    ifstream inputFile(fileName);

    if (inputFile.is_open()) {
        inputFile.seekg(0, ios::end);

        int fileSize = inputFile.tellg();

        inputFile.close();

        return fileSize;
    } else {
        cerr << "Error: Unable to open the file for reading." << endl;
        return -1;
    }
}

int main() {
    const string fileName = "file.txt";
    int characterCount = countCharacters(fileName);

    if (characterCount != -1) {
        cout << "Number of characters in the file: " << characterCount << endl;
    }

    return 0;
}