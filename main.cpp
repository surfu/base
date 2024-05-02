#include <iostream>
using namespace std;

int main()
{
    int a=1, b=1000, c = 0;
    while(a<b){
        a++;
        c += a;
    }
    cout << (c+1)/a << endl;
    return 0;
}