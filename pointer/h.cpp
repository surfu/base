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

int findSubset(int a[], int size, int b[], int ezis) {
    creat(a, size);
    creat(b, ezis);
    print(a, size);
    print(b, ezis);
    cout<<endl;
    for(int i =0; i< ezis;i++){
        for(int j=0; j<size; j++){
            if(a[j]==b[i]){
                cout<<j<<endl;
            }else{
                cout<<0<<" ";
            }
        }
    }
    return 0;
}

int main() {
    srand(time(0));
    int size, ezis;
    cin>>size;
    cin>>ezis;
    if(size <= 0 && ezis <= 0){
        cout<<"Invalid val";
        return 1;
    }
    int *a[size];
    int *b[ezis];

    findSubset(*a, size, *b, ezis);
    return 0;
}
