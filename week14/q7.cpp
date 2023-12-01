#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void writeToFile(const string& fileName, const vector<string>& lines) {
    ofstream outputFile(fileName);

    if (outputFile.is_open()) {
        for (const string& line : lines) {
            outputFile << line << endl;
        }

        outputFile.close();
        cout << "Text successfully written to the file." << endl;
    } else {
        cerr << "Error: Unable to open the file for writing." << endl;
    }
}

void readAndDisplayReverse(const string& fileName) {
    ifstream inputFile(fileName);

    if (inputFile.is_open()) {
        inputFile.seekg(0, ios::end);

        streampos fileSize = inputFile.tellg();

        for (int i = 1; i <= fileSize; ++i) {
            inputFile.seekg(-i, ios::end);
            char c;
            inputFile.get(c);

            if (c != '\n' && c != '\r') {
                cout << c;
            } else {
                cout << endl;
            }
        }

        inputFile.close();
    } else {
        cerr << "Error: Unable to open the file for reading." << endl;
    }
}

int main() {
    const string fileName = "textfile.txt";

    // Writing text to the file
    vector<string> lines = {"Hello,",
                            "This Code Belongs to Ahmad Raza Shibli",
                            "Work Hard Don't Copy",
                            "Our lives will depend upon the decisions which we make�for decisions determine destiny."};

    writeToFile(fileName, lines);

    cout << "\nContents of the file in reverse order:" << endl;
    readAndDisplayReverse(fileName);

    return 0;
}