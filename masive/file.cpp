#include <iostream>
using namespace std;

int main()
{
    const int size = 6;
    int arr[size], num, sum = 0;
    char a;
    for (;;){
        cout << "Do you wanna continue programm? y/n" << endl;
        cin >> a;
        if(a=='n'){
            break;
        }else if(a == 'y'){
        for (int i = 0; i < 6;i++){
            cout << "Enter a sum on a month: ";
            cin >> num;
            arr[i] = num;
            sum += num;
        }
        for (int i = 0; i < size;i++){
            cout << arr[i]<< " / ";
        }
        cout << "Summa is: "<<sum << endl;
        }else{
            cout << "Error" << endl;
            continue;
        }
    }
    return 0;
}