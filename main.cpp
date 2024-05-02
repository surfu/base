#include <iostream>
using namespace std;

int main()
{
    int a,i=0;
    char line = 205;
    char angle = 201;
    char line2 = 186;
    char angle2 = 187;
    char angle3 = 200;
    char angle4 = 188;
    char conector = 204;
    char conector2 = 185;

    cin >> a;
    cout << angle << line << line << line << line << line << line << line << line << line << line << line << line << line << angle2 << endl;
    while (i <= 10)
    {
        cout <<" "<< a << " x " << i << " = " << a * i <<endl;
        cout << conector << line << line << line << line << line << line << line << line << line << line << line << line << line <<conector2<< endl;
        i++;
    }
    cout <<" " << "   Thats all"<<endl;
    cout << angle3 << line << line << line << line << line << line << line << line << line << line << line << line << line << angle4 << endl;
    return 0;
}