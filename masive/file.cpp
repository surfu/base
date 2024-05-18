#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size], num;

    for (;;){
        for (int i = 0; i < 6;i++){
            cout << "Enter a sum on a month: ";
            cin >> num;
            arr[i] = num;
        }
        for (int i = 0; i < size;i++){
            cout << arr[i]<< endl;
        }

    }
    return 0;
}