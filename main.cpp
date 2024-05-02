#include <iostream>
using namespace std;

int main(){
    int a, b, c=1;
    cin >> a;
    cin >> b;
    while(c=1){
    cin >> c;
    if(c==0){
        cout << a + b << endl;
    }else{
        break;
    }
    }
}