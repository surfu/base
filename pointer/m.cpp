#include <iostream>
#include <ctime>
using namespace std;

void reverseCopy(int* src, int* dest, int size) {
    for (int i = 0; i < size; ++i) {
        *(dest + i) = *(src + size - 1 - i);
    }
}

void creat(int arr[], int size){
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void print(int a[], int m) {
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    int* A = new int[size];
    int* B = new int[size];



    creat(A,size);
    print(A,size);

    creat(B,size);
    print(B,size);

    reverseCopy(A, B, size);
    cout << "Array B (reversed copy of A): ";
    print(B, size);
    
    delete[] A;
    delete[] B;

    return 0;
}
