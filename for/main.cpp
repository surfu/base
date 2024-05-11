#include <iostream>
using namespace std;

int main() {
    char j;
    double i;
    for (;;) {
        cout << "Hello World\nChoise one paramether\n\n";
        cout << "'s' - start programm\n'q' - close programm\n";
        cin >> j;

        if (j == 'q') {
            cout << "Programm closed\n";
            break;
        } else if (j == 's') {
            char l, k;
            cout << "Choise first wallet to convert: \nj - japanse yen\nu - ukraian hryvnya\nd - USA dollar\n";
            cin >> l;
            cout << "Choise second wallet to convert: \nj - japanse yen\nu - ukraian hryvnya\nd - USA dollar\n";
            cin >> k;

            cout << "Enter the amount to convert : ";
            cin >>i;

            if (l == k) {
                cout << "It is the same wallet\n";
                continue;
            }

            if (l == 'j') {
                if (k == 'u')
                    cout << "You'll have: " << i * 0.25 << " hryvnyas\n";
                else if (k == 'd')
                    cout << "You'll have: " << i * 0.01 << " dollars\n";
                else
                    cout << "Error!\n";
            } else if (l == 'u') {
                if (k == 'j')
                    cout << "You'll have: " << i * 3.94 << " yens\n";
                else if (k == 'd')
                    cout << "You'll have: " << i * 0.03 << " dollars\n";
                else
                    cout << "Error!\n";
            } else if (l == 'd') {
                if (k == 'j')
                    cout << "You'll have: " << i * 155.79 << " yens\n";
                else if (k == 'u')
                    cout << "You'll have: " << i * 39.58 << " hryvnyas\n";
                else
                    cout << "Error!\n";
            } else {
                cout << "Error!\n";
            }
        }
    }
    return 0;
}
