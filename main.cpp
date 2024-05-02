#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    while (a<=500)
    {
        a++;
        b = b + a;
    }
    cout << b + 1 << endl;
    return 0;
}