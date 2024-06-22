#include <iostream>
#include <ctime>
using namespace std;

void def(char str[], char * delim)
{
    int words = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for(int j =0;delim[j] != '\0';j++){
            if (str[i] == delim[j])
			{
				str[i] = ' ';
				break;
			}
        }
    }

    for(int i =0; str[i] != '\0'; i++){
        switch (int(str[i]))
        {
        case 32: words++;
            break;
        
        default:
            break;
        }
    }


    cout << words << endl;
}

int main()
{   char delim[] = ",.!?";
    char str1[] = "Підрахувати кіль кістьслів у введеному реченні.";
    cout << str1 << endl;
    def(str1, delim);
}