#include <iostream>
using namespace std;

int main()
{
    int a;
    const int size = a;
    int arr[size];
    for (;;){
        cin >> a;
        for (int i = 0; i < a + 1;i++){
            arr[i] = i;
        }
        for (int i = 0; i < size; i++)
        {
            cout << "|"<<arr[i] << " | "<<endl;
        }
        cout << "Reverse" << endl;
        for (int i = size; i < 1;i--){
            cout <<"|"<< arr[i] <<"|"<< endl;
        }
    }
}