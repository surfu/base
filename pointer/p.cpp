#include <iostream>
#include <ctime>
using namespace std;


void removeEven(int* arr, int& size) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

void print(int a[], int m) {
    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
void removeOdd(int* arr, int& size) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arr[newSize++] = arr[i];
        }
    }
    size = newSize;
}

int main() {
    srand(time(0));
    int M;
    cin >> M;

    int* A = new int[M];
    for(int i = 0; i<M;i++){
        A[i] = rand() % 100;
    }

    cout << "Original array: ";

    print(A, M);

    int choice;
    cout << "Do you wanna remove even 1 or odd 2 values? ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        removeEven(A, M);
        break;
    case 2:
        removeOdd(A, M);
    default:
        cout<<"Error!"<<endl;
        break;
    }

    print(A, M);

    delete[] A;

    return 0;
}
