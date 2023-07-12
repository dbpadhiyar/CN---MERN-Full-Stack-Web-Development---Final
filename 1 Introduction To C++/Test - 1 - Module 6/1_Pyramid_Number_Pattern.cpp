/*
    Pyramid Number Pattern


    Print the following pattern for the given number of rows.

    Pattern for N = 4
           1
          212
         32123
        4321234
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (j = i; j > 0; j--)
        {
            cout << j;
        }
        if (i > 1)
        {
            for (int k = 2; k <= i; k++)
            {
                cout << k;
            }
        }
        cout << endl;
    }
}