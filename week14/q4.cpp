#include <iostream>
using namespace std;

class MeanCalculator;

double calculateMean(const MeanCalculator& calculator, const int* numbers, int n);

class MeanCalculator {
private:
    int* numbers; 
    int size;     

public:
    MeanCalculator(int* nums, int count) : numbers(nums), size(count) {}
    friend double calculateMean(const MeanCalculator& calculator, const int* numbers, int n);
};

double calculateMean(const MeanCalculator& calculator, const int* numbers, int n) {
    if (n == 0) {
        cerr << "Error: Cannot calculate mean for an empty set of numbers." << endl;
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

    return static_cast<double>(sum) / n;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* numbers = new int[n];

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    MeanCalculator calculator(numbers, n);

    double mean = calculateMean(calculator, numbers, n);
    cout << "Mean value: " << mean << endl;

    delete[] numbers;

    return 0;
}