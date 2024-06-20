#include <iostream>
using namespace std;

void printMatrix(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

void deleteRow(int**& matrix, int& numRows, int rowIndex) {
    if (rowIndex < 0 || rowIndex >= numRows) {
        cout << "Invalid row index!" << endl;
        return;
    }

    int** newMatrix = new int*[numRows - 1];
    
    for (int i = 0; i < rowIndex; ++i)
        newMatrix[i] = matrix[i];

    for (int i = rowIndex + 1; i < numRows; ++i)
        newMatrix[i - 1] = matrix[i];

    delete[] matrix[rowIndex];
    delete[] matrix;

    matrix = newMatrix;
    --numRows;
}

int main() {
    int numRows = 3, numCols = 3;
    int** matrix = new int*[numRows];

    for (int i = 0; i < numRows; i++) {
        matrix[i] = new int[numCols];
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = i * numCols + j + 1;
        }
    }

    cout << ":"<<endl;
    printMatrix(matrix, numRows, numCols);

    int rowIndex = 1;
    deleteRow(matrix, numRows, rowIndex);

    cout << ";" << rowIndex << ";"<<endl;
    printMatrix(matrix, numRows, numCols);

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
