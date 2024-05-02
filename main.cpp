#include <iostream>
using namespace std;

int main(){
    int a, b,c = 0;
    cin >> a;
    cin >> b;
    while(a<b){
        a++;
        c = c + a;
    }
        cout << c+1 << endl;
}