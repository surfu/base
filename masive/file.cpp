#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    char a;
    const int size = 5;
    int arr[size];
    for (;;){
        cout << "Do you wanna continue programm? y/n" << endl;
        cin >> a;
        if (a == 'n')
        {
            break;
        }
        else if (a == 'y')
        {
            for (int i = 1; i < size; i++){
                cout << "Enter number: " << endl;
                cin >> num;
                arr[i] = num;
                sum += num;
            }
            for (int i = 1; i < size; i++){
                cout << arr[i] << endl;
            }
        }
}
return 0;
}