#include <iostream>
using namespace std;

int main()
{
    int a, b;
    do
    {
        cin >> a;
    } while (a>=1 && a<=20);
    while (a<=20)
    {
        b *= a;
        a++;
    }
    cout << b << endl;
    return 0;
}