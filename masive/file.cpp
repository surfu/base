#include <iostream>
using namespace std;

int main()
{
    const int size = 12;
    int arr[size];
    for (;;){
        int min = arr[0] , max = arr[0], num;
        for (int i = 0; i < size; i++)
        {
        cout << "Enter a number: ";
        cin >> num;
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout << "Min: " << min << endl;
        cout << "Max: " << max << endl; 
    }
    return 0;
}