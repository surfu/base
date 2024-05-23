#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    const int size1 = 10;
    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 10 - 5;
    }

    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size1; i += 2)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < size1; i += 2)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}