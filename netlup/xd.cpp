#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int* removePrimes(int* arr, int& size) {
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            ++newSize;
        }
    }
    int* newArr = new int[newSize];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            newArr[index++] = arr[i];
        }
    }
    size = newSize;
    delete[] arr;
    return newArr;
}


int main(){
    return 0;
}