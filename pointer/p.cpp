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

bool unik(int* arr, int size, int el) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == el) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(0));

    int M, N;
    cin >> M;
    cin >> N;

    int* A = init<int>(M);
    int* B = init<int>(N);

    cout << "Array A: ";
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    int* Elem = new int[M + N];
    int Size = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j] && unik(Elem, Size, A[i])) {
                Elem[Size++] = A[i];
            }
        }
    }

    for (int i = 0; i < Size; i++) {
        cout << Elem[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] Elem;

    return 0;
}
