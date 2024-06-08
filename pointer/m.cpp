#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int *size;
    int *sum = 0;
    int *ptr;
    int arr[*size];

    cin>>*size;
    
    for(int i =0; i<*size;++i){
        *ptr = rand() % 100;
        *ptr = arr[i];
    }

    for (int i = 0; i < *size; ++i) {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
