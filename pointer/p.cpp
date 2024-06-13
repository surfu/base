#include <iostream>
#include <ctime>
using namespace std;

void print(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void creat(int arr[], int size){
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void found(int a[], int b[],int m, int n){
    bool status = false;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                status = true;
                break;
            }
        }
        if (!status) {
            cout << a[i] << " ";
        }
    }
}

int main() {
    srand(time(0));
    int M, N;
    cin >> M;
    int A[M];
    creat(A, M);
    print(A,M);
    cin >> N;
    int B[N];
    creat(B, N);
    print(B,N);
    found(A,B,M,N);
    cout << endl;

    return 0;
}
