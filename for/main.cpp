#include <iostream>
#include <ctime>
using namespace std;

int main(){
    cout << " " << endl;
    srand(time(0));
    int i=0,m=0,d=0;
    char j;
    int num = rand() % 1 + 500;
    for (;;){
        cout << "Do you wanna play?\n If your answer is ""No"" enter 'o'" << endl;
        cin >> j;
        if(j=='o'){
            cout << "Ok. It is your statistic:\n"
                 << " " << d << "\n"
                 << " " << m << endl;
            break;
        }else{
            cout << "Ok. What is a number?" << endl;
            cin >> i;
            if (i>num){
                cout << "Too high" << endl;
                d++;
            }
            else if (i<num){
                cout << "Too low" << endl;
                d++;
            }else if(i==num){
                cout << "You got it!" << endl;
                m++;
            }
        }
    }
}