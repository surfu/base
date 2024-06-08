#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int* size, *un;
    cin>>*size;
    int* ptr[*size],* ptr1[*size];

    for(int i =0; i<*size;++i){
        *un += rand() % 100;
        *un = *ptr[i];
    }

    for (int i = 0; i < *size; ++i) {
        *(ptr1 + i) = *(ptr + i);
    }

    cout << "Array:" << endl;
    for (int i = 0; i < *size; ++i) {
        cout << *(ptr1 + i) << " ";
    }
    cout << endl;

    cout << "Copied array:" << endl;
    for (int i = 0; i < *size; ++i) {
        cout << *(ptr1 + i) << " ";
    }
    cout << endl;

    return 0;
}
