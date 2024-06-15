#include <iostream>
#include <ctime>
using namespace std;

int count(int arr[], int size) {
    int pos =0, neg=0, zer=0;
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100; //I don't know how to realization negative random num
        if(arr[i]>0){
            pos++;
        }else if(arr[i]<0){
            neg++;
        }else{
            zer++;
        }
    }
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << pos<< " | "<<neg <<" | "<<zer<< endl;
    return 0;
}

int main() {
    srand(time(0));
    int size;
    cin>>size;
    if(size <= 0){
        cout<<"Invalid val";
        return 1;
    }
    int *arr[size];

    count(*arr, size);
    return 0;
}
