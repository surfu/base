#include <iostream>
using namespace std;

void addRow(int**& matrix, int& numRows, int numCols, const int* newRow) {
    int** newMatrix = new int*[numRows + 1];
    for (int i = 0; i < numRows; ++i) {
        newMatrix[i] = matrix[i];
    }
    newMatrix[numRows] = new int[numCols];
    for (int j = 0; j < numCols; ++j) {
        newMatrix[numRows][j] = newRow[j];
    }
    delete[] matrix;
    matrix = newMatrix;
    ++numRows;
}

void printMatrix(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int numRows = 3, numCols = 3;

    int** matrix = new int*[numRows];
    for (int i = 0; i < numRows; ++i) {
        matrix[i] = new int[numCols];
        for (int j = 0; j < numCols; ++j) {
            matrix[i][j] = i * numCols + j + 1;
        }
    }

    printMatrix(matrix, numRows, numCols);

    int newRow[] = {10, 11, 12};
    addRow(matrix, numRows, numCols, newRow);

    printMatrix(matrix, numRows, numCols);

    for (int i = 0; i < numRows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
