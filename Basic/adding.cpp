#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g;
    cout << "Enter Seven numbers for 'a' to 'g' with space:";
    cin >> a >> b >> c >> d >> e >> f >> g;
    float result = ((a + b / c * d - e) * (f - g));
    cout << "The answer is: " << result;

    return 0;
}
