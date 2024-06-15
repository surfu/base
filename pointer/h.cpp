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
        arr[i] = rand() % 100; //I don't know how to realization negative random num
    }
}

int delneg(int a[], int size) {
    creat(a, size);
    print(a, size);
    int* j=0;
    int* b = nullptr ;
    cout<<endl;
    for(int i =0; i< size;i++){
        if(a[i] >0){
            b[*j] = a[i];
            j++;
        }
    }
    print(b, *j);

    delete [] b;
    delete j;
    return 0;
}

int main() {
    srand(time(0));
    int size;
    cin >> size;
    int* arr = new int[size];

    delneg(arr,size);

    delete[] arr;
    return 0;
}
