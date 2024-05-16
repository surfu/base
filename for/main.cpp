#include <iostream>
using namespace std;

int main()
{
    int input_wallet, output_wallet, statik;
    double jp = 155, uk = 40, us = 1;
    char a, amount;
    for (;;){
        cout << "Do you want to continue programm? y/n" << endl;
        cin >>a;
        if(a = 'n'){
            break;
        }else if(a = 'y'){
            cout << "Enter your wallet (jp/uk/us): " << endl;
            cin >> amount;
            cout << "Enter the amount of money you want to convert: ";
            cin >> input_wallet;
            if(amount = 'jp'){
                statik = input_wallet / 155;
            }else if(amount = 'uk'){
                statik = input_wallet / 40;
            }else if(amount = 'us'){
                statik = input_wallet / 1;
            }else{
                cout << "Wrong!" << endl;
                continue;
            }
            cout << "Enter other wallet (jp/uk/us): " << endl;
            cin >> a;
            if(a == amount){
                cout << "You can't convert to the same wallet!" << endl;
            }else if(a == 'jp'){
                output_wallet = statik * 155;
            }else if(a=='uk'){
                output_wallet = statik * 40;
            }else if(a == 'us'){
                output_wallet = statik * 1;
            }
        }
    }
    return 0;
}
