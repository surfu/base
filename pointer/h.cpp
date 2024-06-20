#include <iostream>
using namespace std;

void insert_block_into_array(int* arr, int &n, int index, const int* block, int block_size) {
    int* temp = new int[n + block_size]; 

    for (int i = 0; i < index; ++i) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < block_size; ++i) {
        temp[index + i] = block[i];
    }

    for (int i = index; i < n; ++i) {
        temp[i + block_size] = arr[i];
    }

    arr = temp;
    delete[] arr;
    n += block_size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int block[] = {6, 7, 8}; 
    int block_size = sizeof(block) / sizeof(block[0]);
    int index = 2;

    insert_block_into_array(arr, n, index, block, block_size);

    cout << "Масив після вставки блоку:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
