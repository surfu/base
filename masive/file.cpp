#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int size = 12;
    int arr[size];
    for (int i = 0; i < size;i++){
        arr[i] = rand()% 100 - 10;
    }
    int min = arr[0], max = arr[0];
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
    return 0;
}