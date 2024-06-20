#include <iostream>
using namespace std;

int main()
{
    int x, y, c=1;
    cin >> x;
    cin >> y;
    while(y>0){
        c = c * x;
        y--;
    }
    cout << c << endl;
    return 0;
}