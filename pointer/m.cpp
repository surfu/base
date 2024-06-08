#include <iostream>
#include <ctime>

using namespace std;

void reverse(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    for (;;) {
        if (start >= end){ break;}
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    srand(time(0));
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    int* arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100;
    }

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
