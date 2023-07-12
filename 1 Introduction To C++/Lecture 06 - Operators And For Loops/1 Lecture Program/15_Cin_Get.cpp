#include <iostream>
using namespace std;

int main()
{
    char c;
    c = cin.get();
    int characterCount = 0;
    int numberCount = 0;
    int spaceCount = 0;
    while (c != '$')
    {
        int i = c;
        if (i >= 97 && i <= 122)
        {
            characterCount++;
        }
        else if (i >= 48 && i <= 57)
        {
            numberCount++;
        }
        else if (i == 32 || i == 9 || i == 10)
        {
            spaceCount++;
        }
        c = cin.get();
    }
    cout << characterCount << ' ' << numberCount << ' ' << spaceCount;
}