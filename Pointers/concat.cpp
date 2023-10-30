#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char *str1 = new char[100];
    char *str2 = new char[100];

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    char *result = new char[len1 + len2 + 1];

    strcpy(result, str1);

    strcat(result, str2);

    cout << "Concatenated String: " << result << std::endl;
    return 0;
}