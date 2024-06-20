#include <iostream>
using namespace std;

void addColumn(int**& matrix, int numRows, int& numCols, const int* newColumn, int position) {
    if (position < 0 || position > numCols) {
        cout << "Invalid position!" << endl;
        return;
    }

    int** newMatrix = new int*[numRows];
    for (int i = 0; i < numRows; i++) {
        newMatrix[i] = new int[numCols + 1];
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < position; j++) {
            newMatrix[i][j] = matrix[i][j];
        }
        newMatrix[i][position] = newColumn[i];
        for (int j = position; j < numCols; j++) {
            newMatrix[i][j + 1] = matrix[i][j];
        }
    }

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    matrix = newMatrix;
    numCols++;
}

void printMatrix(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int numRows = 3, numCols = 3;
    int** matrix = new int*[numRows];

    for (int i = 0; i < numRows;i++) {
        matrix[i] = new int[numCols];
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = i * numCols + j + 1;
        }
    }

    cout << ":"<<endl;
    printMatrix(matrix, numRows, numCols);

    int newColumn[] = {10, 11, 12};
    int position = 0;

    addColumn(matrix, numRows, numCols, newColumn, position);

    cout << ":"<<endl;
    printMatrix(matrix, numRows, numCols);

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
