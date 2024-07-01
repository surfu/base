#include<iostream>
#include<cmath>
using namespace std;

void distributeElements(const int* arr, int size, int*& positives, int& posSize, int*& negatives, int& negSize, int*& zeroes, int& zeroSize) {
    posSize = negSize = zeroSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) ++posSize;
        else if (arr[i] < 0) ++negSize;
        else ++zeroSize;
    }

    positives = new int[posSize];
    negatives = new int[negSize];
    zeroes = new int[zeroSize];

    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) positives[posIndex++] = arr[i];
        else if (arr[i] < 0) negatives[negIndex++] = arr[i];
        else zeroes[zeroIndex++] = arr[i];
    }
}

int main(){
    return 0;
}