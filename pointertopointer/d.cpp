#include <iostream>
using namespace std;

void add(int**& matrix, int numRows, int& numCols, const int* newColumn, int position) {
    if (position < 0 || position > numCols) {
        cout << "Invalid position!" << endl;
        return;
    }

    int** newMat = new int*[numRows];
    for (int i = 0; i < numRows; i++) {
        newMat[i] = new int[numCols + 1];
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < position; j++) {
            newMat[i][j] = matrix[i][j];
        }
        newMat[i][position] = newColumn[i];
        for (int j = position; j < numCols; j++) {
            newMat[i][j + 1] = matrix[i][j];
        }
    }

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    matrix = newMat;
    numCols++;
}

void print(int** matrix, int numRows, int numCols) {
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

    for (int i = 0; i < numRows; i++) {
        matrix[i] = new int[numCols];
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = i * numCols + j + 1;
        }
    }

    cout << ":"<<endl;
    print(matrix, numRows, numCols);

    int newCol[] = {10, 11, 12};
    int position = 1;

    add(matrix, numRows, numCols, newCol, position);

    cout << ":"<<endl;
    print(matrix, numRows, numCols);

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
