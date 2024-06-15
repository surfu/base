#include <iostream>
#include <ctime>
using namespace std;

int sumprod(int arr[], int size, int *sum, int *prod) {
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        *sum += arr[i];
        *prod *= arr[i];
    }
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << *sum << " | "<<*prod << endl;
    return 0;
}

int main() {
    srand(time(0));
    
    int size;
    cin >> size;

    if(size <= 0) {
        cout << "Invalid size. Exiting." << endl;
        return 1;
    }

    int A[size];
    int sum = 0, prod = 1;

    sumprod(A, size, &sum, &prod);
    return 0;
}
