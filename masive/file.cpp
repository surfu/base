#include <iostream>
using namespace std;

int main()
{
    const int size = 12;
    int arr[size];
    int min = arr[0], max = arr[0], num, a;
    // Тут можна створити звичайну програму з циклом for(;;) і таке інше але це не вказано в задачі
    for (int i = 0; i < size;i++){
        cout << "Enter number: " << endl;
        cin >> num;
        arr[i] = num;
    }
    num = 0;
    cout << "Start" << endl;
    cin >> a;
    cout << "End" << endl;
    cin >> num;
    for (int i = a-1; i < num-1; i++)
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