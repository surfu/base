#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    for (int i = 100; i <= 999; ++i)
    {
        int hundr = i / 100;
        cout << hundr;
        int ten = (i / 10) % 10;
        cout << ten;
        int one = i % 10;
        cout << one << endl;
        if (hundr == ten || hundr == one || ten == one)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    cout << " - " << count << endl;
    return 0;
}