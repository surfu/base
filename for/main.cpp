#include <iostream>
using namespace std;

int main()
{
    int i;
    char j;
    for (;;)
    {
        cout << "n/y" << endl;
        cin >> j;
        if(j == 'n'){
            break;
        }else if (j =='y'){
        cin >> i;
        int hundr = i / 100;
        cout << hundr;
        int ten = (i / 10) % 10;
        cout << ten;
        int one = i % 10;
        cout << one << endl;
        if (hundr == 3 && hundr ==6)
        {
            cout << ten << one;
        }
        else if(ten ==3 && ten ==6)
        {
            cout << hundr << one;
        }
        else if (one == 3 && one == 6)
        {
            cout << hundr << ten;
        }
    }else{
        cout << "error" << endl;
    }}
    return 0;
}