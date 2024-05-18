#include <iostream>
using namespace std;

int main()
{
    int input_wallet, output_wallet, amount;
    double jp = 155, uk = 40, us = 1, statik;
    char a, b;
    for (;;)
    {
        cout << "Do you want to continue programm? y/n" << endl;
        cin >> a;
        if (a == 'n')
        {
            break;
        }
        else if (a == 'y')
        {
            cout << "Enter your wallet (jp - 1/uk - 2/us - 3): " << endl;
            cin >> amount;
            cout << "Enter the amount of money you want to convert: ";
            cin >> input_wallet;
            if (amount == 1)
            {
                statik = input_wallet / jp;
            }
            else if (amount == 2)
            {
                statik = input_wallet / uk;
            }
            else if (amount == 3)
            {
                statik = input_wallet / us;
            }
            else
            {
                cout << "Wrong!" << endl;
                continue;
            }
            cout << "Enter wallet to convert (jp - 1/uk - 2/us - 3): " << endl;
            cin >> b;
            if (b == amount)
            {
                cout << "You can't convert to the same wallet!" << endl;
            }
            else if (b == '1')
            {
                output_wallet = statik * jp;
            }
            else if (b == '2')
            {
                output_wallet = statik * uk;
            }
            else if (b == '3')
            {
                output_wallet = statik * us;
            }else{
                cout << "Wrong!" << endl;
                continue;
            }
            cout << "You'll have: " << output_wallet << endl;
        }
    }
    return 0;
}