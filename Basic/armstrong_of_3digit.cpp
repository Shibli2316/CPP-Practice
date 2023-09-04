#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    int temp = num;
    int sum = 0;
    for(int i = 0; i < 3; i++){
        int rem = num % 10;
        num = num / 10;
        sum = rem*rem*rem + sum;
    }
    if (temp == sum){
        cout << temp << " is an armstrong number.";
    }else{
        cout << temp << " is not an armstrong number.";
    }
}
