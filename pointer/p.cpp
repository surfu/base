#include <iostream>
#include <ctime>
using namespace std;

template<typename T>
T* init(int size) {
    T* arr = new T[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main() {
    srand(time(0));

    int m, n;
    cin >> m;
    cin >> n;

    int* A = init<int>(m);
    int* B = init<int>(n);
    int* C = new int[m + n];
    for (int i = 0; i < m; i++) {
        C[i] = A[i];
    }
    for (int i = 0; i < n; i++) {
        C[m + i] = B[i];
    }
    cout << "Combined array: ";
    for (int i = 0; i < m + n; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
