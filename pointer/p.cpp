#include <iostream>
#include <ctime>
using namespace std;

bool isInArray(int elem, int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == elem) {
            return true;
        }
    }
    return false;
}

void print(int a[], int m) {
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int M, N;

    cin >> M;
    int A[M];
    cout << "Enter " << M << " elements for array A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cin >> N;
    int B[N];
    cout << "Enter " << N << " elements for array B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int C[M + N];
    int k = 0;

    for (int i = 0; i < M; i++) {
        if (!isInArray(A[i], B, N) && !isInArray(A[i], A, i)) {
            C[k++] = A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        if (!isInArray(B[i], A, M) && !isInArray(B[i], B, i)) {
            C[k++] = B[i];
        }
    }

    print(C, M+N);

    return 0;
}
