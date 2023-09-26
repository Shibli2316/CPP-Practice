#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
   int length = strlen(str);
   char* beginPtr = str;
   char* endPtr = str + length - 1;
   char temp;

   while (beginPtr < endPtr) {
      temp = *beginPtr;
      *beginPtr = *endPtr;
      *endPtr = temp;
      beginPtr++;
      endPtr--;
   }
}

int main() {
   char str[100];
   cout << "Enter a string: ";
   cin.getline(str, sizeof(str));

   cout << "Original string: " << str << endl;
   reverseString(str);
   cout << "String after reverse: " << str << endl;

   return 0;
}
