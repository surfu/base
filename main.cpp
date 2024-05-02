#include <iostream>
using namespace std;

int main(){
    int a, b=0;
    cout << "Enter num:" << endl;
    do
    {
    cin >> a;
    if(a>100){
        continue;
    }else{
    break;
    }
    } while (a>=0 || a<101);
    while(b<=a){
        cout << b << endl;
        b++;
    }
}
