#include <iostream>
void transposeMatrix(int original[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}
int main() {
    int rows, cols;    
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    
    int originalMatrix[100][100];
    int transposedMatrix[100][100];
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> originalMatrix[i][j];
        }
    }
    transposeMatrix(originalMatrix, transposedMatrix, rows, cols);    
    std::cout << "Transpose of the matrix:" << std::endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transposedMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}


// Show both 
// Given and transposeMatrix