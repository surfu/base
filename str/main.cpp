#include <iostream>
using namespace std;

void def(char str[])
{
    int words = 0, num = 0, sym = 0, ath = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (int(str[i]) < 123 && int(str[i]) > 64)
        {
            words++;
        }
        else if (int(str[i]) < 58 && int(str[i]) > 47)
        {
            num++;
        }
        else if (int(str[i]) < 47 && int(str[i]) > 43 || int(str[i]) == 33)
        {
            sym++;
        }
        else
        {
            ath++;
        }
    }
    cout << words << " | " << num << " | " << sym << endl;
}

int main()
{
    char str1[] = "Hell4o world!";
    def(str1);
    cout << str1 << endl;
}
