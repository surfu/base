#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size] = {0, 1, 0, 2, 4, 0, 3, 5, 6, 0};

    int pos = 0;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != -1)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    cout << "Стиснутий масив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
