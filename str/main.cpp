#include <iostream>
using namespace std;

char toLower(char c) {
    if (c >= 56 && c <= 90) {
        return c + 32;
    }
    return c;
}

bool def(const char* str) {
    int lf = 0;
    int rt = 0;
    for(int i =0; str[rt] != '\0';i++) {
        rt++;
    }

    while (lf < rt) {
        if (toLower(str[lf]) != toLower(str[rt])) {
            return false;
        }
        lf++;
        rt--;
    }
    return true;
}

int main() {
    char str[] = "Alya";

    if (def(str)) {
        cout << "Рядок є паліндромом." << endl;
    } else {
        cout << "Рядок не є паліндромом." << endl;
    }

    return 0;
}
