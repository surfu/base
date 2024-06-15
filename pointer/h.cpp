#include <iostream>
using namespace std;

int add_block_to_array(int* arr, int n, int* new_block, int block_size) {
    int* new_arr = new int[n + block_size];

    for (int i = 0; i < n; ++i) {
        new_arr[i] = arr[i];
    }

    for (int i = 0; i < block_size; ++i) {
        new_arr[n + i] = new_block[i];
    }
    cout << "Новий масив:" << endl;
    for (int i = 0; i < n + block_size; ++i) {
        cout << new_arr[i] << " ";
    }
    cout << endl;
    return *new_arr;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int new_block[] = {6, 7, 8};
    int n = 5;
    int block_size =3;

    add_block_to_array(arr, n, new_block, block_size);
    
    return 0;
}
