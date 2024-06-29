#include <iostream>
using namespace std;

void distributeElements(int* arr, int size, int*& positives, int& posCount, int*& negatives, int& negCount, int*& zeroes, int& zeroCount) {
    posCount = 0;
    negCount = 0;
    zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    positives = new int[posCount];
    negatives = new int[negCount];
    zeroes = new int[zeroCount];

    int posIndex = 0, negIndex = 0, zeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            positives[posIndex++] = arr[i];
        } else if (arr[i] < 0) {
            negatives[negIndex++] = arr[i];
        } else {
            zeroes[zeroIndex++] = arr[i];
        }
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {3, -1, 0, 7, -4, 0, 2, -5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* positives = nullptr;
    int* negatives = nullptr;
    int* zeroes = nullptr;
    int posCount = 0, negCount = 0, zeroCount = 0;

    distributeElements(arr, size, positives, posCount, negatives, negCount, zeroes, zeroCount);

    cout << "Positive elements: ";
    printArray(positives, posCount);
    cout << "Negative elements: ";
    printArray(negatives, negCount);
    cout << "Zero elements: ";
    printArray(zeroes, zeroCount);

    delete[] positives;
    delete[] negatives;
    delete[] zeroes;

    return 0;
}
