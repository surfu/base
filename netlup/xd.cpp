#include<iostream>
using namespace std;

int main(){
    int start_diap, end_diap, num;
    cin >> start_diap;
    cin >> end_diap;
    for (;;){
        cin >> num;
        if(num>=start_diap && num<=end_diap){
            cout << "I congratulate you for doing everything according to the instructions" << endl;
        }else{
            cout << "I'm sorry, but you didn't do everything according to the instructions" << endl;
            continue;
        }
    }
}