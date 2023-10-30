#include <iostream>
#include <cmath>
using namespace std;
double calculateSum(double *arr, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); 
    }
    return sum;
}
double calculateMean(double *arr, int n) {
    double sum = calculateSum(arr, n);
    return sum / n;
}
double calculateStdDev(double *arr, int n, double mean) {
    double sumOfSquares = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = *(arr + i) - mean; 
        sumOfSquares += diff * diff;
    }
    return sqrt(sumOfSquares / n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double *arr = new double[n];
    cout << "Enter " << n << " real numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); 
    }

    double sum = calculateSum(arr, n);
    double mean = calculateMean(arr, n);
    double stdDev = calculateStdDev(arr, n, mean);
    
    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stdDev << endl;

    delete[] arr;
    return 0;
}