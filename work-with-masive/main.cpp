
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr1[size] = {1, -2, 3, 0, 5}; // arrays generated gpt
    int arr2[size] = {4, -1, 0, 6, -3};
    const int big_size = size * 2;
    int bigarr[big_size];

    int pos = 0;
// if more like 0
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] > 0)
        {
            bigarr[pos++] = arr1[i];
        }
        if (arr2[i] > 0)
        {
            bigarr[pos++] = arr2[i];
        }
    }
// if equal 0
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == 0)
        {
            bigarr[pos++] = arr1[i];
        }
        if (arr2[i] == 0)
        {
            bigarr[pos++] = arr2[i];
        }
    }
// if smaller like 0
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] < 0)
        {
            bigarr[pos++] = arr1[i];
        }
        if (arr2[i] < 0)
        {
            bigarr[pos++] = arr2[i];
        }
    }
// output
    cout << "Array: ";
    for (int i = 0; i < big_size; i++)
    {
        cout << bigarr[i] << " ";
    }
    cout << endl;
    return 0;
}
