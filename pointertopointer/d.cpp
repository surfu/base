#include <iostream>
#include <ctime>
using namespace std;

void fill(int** matrix, int numRows, int numCols) {
    srand(time(0));
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
}

void print(int** matrix, int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

void Rows(int** matrix, int numRows, int numCols, int times, bool toRight) {
    times %= numCols;
    for (int t = 0; t < times; t++) {
        for (int i = 0; i < numRows; i++) {
            if (toRight) {
                int last = matrix[i][numCols - 1];
                for (int j = numCols - 1; j > 0; j--) {
                    matrix[i][j] = matrix[i][j - 1];
                }
                matrix[i][0] = last;
            } else {
                int first = matrix[i][0];
                for (int j = 0; j < numCols - 1; j++) {
                    matrix[i][j] = matrix[i][j + 1];
                }
                matrix[i][numCols - 1] = first;
            }
        }
    }
}

void Columns(int** matrix, int numRows, int numCols, int times, bool toDown) {
    times %= numRows;
    for (int t = 0; t < times; t++) {
        for (int j = 0; j < numCols; j++) {
            if (toDown) {
                int last = matrix[numRows - 1][j];
                for (int i = numRows - 1; i > 0; i--) {
                    matrix[i][j] = matrix[i - 1][j];
                }
                matrix[0][j] = last;
            } else {
                int first = matrix[0][j];
                for (int i = 0; i < numRows - 1; i++) {
                    matrix[i][j] = matrix[i + 1][j];
                }
                matrix[numRows - 1][j] = first;
            }
        }
    }
}

int main() {
    int numRows = 3, numCols = 4;

    int** matrix = new int*[numRows];
    for (int i = 0; i < numRows; i++) {
        matrix[i] = new int[numCols];
    }

    fill(matrix, numRows, numCols);

    cout << ":" << endl;
    print(matrix, numRows, numCols);

    int times = 1;
    Rows(matrix, numRows, numCols, times, true);
    Columns(matrix, numRows, numCols, times, true);

    cout << ":" << endl;
    print(matrix, numRows, numCols);

    for (int i = 0; i < numRows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
