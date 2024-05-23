#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 5;
    int arr1[size], arr2[size], arr3[size/2];

    for (int i = 0; i < size; i++)
    {
        arr1[i] = rand() % 10 - 5;
        arr2[i] = rand() % 10 - 5;
    }

    for (int i = 0; i < size; ++i)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size; i++){
        arr3[i] = arr1[i] + arr2[i];
    }

    cout << "Стиснутий масив: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}
