#include<iostream>
using namespace std;

int* allocateArray(int size) {
    return new int[size];
}

void initializeArray(int* arr, int size, int value = 0) {
    for (int i = 0; i < size; ++i) {
        arr[i] = value;
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deallocateArray(int* arr) {
    delete[] arr;
}

int* addElementToEnd(int* arr, int& size, int value) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    ++size;
    delete[] arr;
    return newArr;
}

int* insertElement(int* arr, int& size, int index, int value) {
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return arr;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = value;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    ++size;
    delete[] arr;
    return newArr;
}

int* insertElement(int* arr, int& size, int index, int value) {
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return arr;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = value;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    ++size;
    delete[] arr;
    return newArr;
}

int main(){
    return 0;
}