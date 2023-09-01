#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void inputMatrix(int matrix[][MAX_SIZE], int rows, int cols, const char* name)
{
    cout << "Enter elements for " << name << " matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << name << "[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE], int rowsA, int colsA, int colsB)
{
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows and columns for matrix A:" << endl;
    cin >> rowsA >> colsA;
    inputMatrix(A, rowsA, colsA, "A");

    cout << "Enter the number of rows and columns for matrix B:" << endl;
    cin >> rowsB >> colsB;
    inputMatrix(B, rowsB, colsB, "B");

    // Addition of matrices
    if (colsA != rowsB)
    {
        cout << "Matrix multiplication is not possible. Number of columns in A must be equal to the number of rows in B." << endl;
        return 1;
    }

    if (rowsA == rowsB && colsA == colsB)
    {
        addMatrices(A, B, C, rowsA, colsA);
        cout << "Matrix A + Matrix B:" << endl;
        displayMatrix(C, rowsA, colsA);
    }
    else
    {
        cout << "Matrix addition is not possible. Matrices must have the same dimensions." << endl;
    }

    // Multiplication of matrices
    if (colsA == rowsB)
    {
        multiplyMatrices(A, B, C, rowsA, colsA, colsB);
        cout << "Matrix A * Matrix B:" << endl;
        displayMatrix(C, rowsA, colsB);
    }
    else
    {
        cout << "Matrix multiplication is not possible. Number of columns in A must be equal to the number of rows in B." << endl;
    }

    return 0;
}
