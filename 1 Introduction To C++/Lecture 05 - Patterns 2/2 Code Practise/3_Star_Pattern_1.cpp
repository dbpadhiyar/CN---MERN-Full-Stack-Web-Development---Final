/*

    Print the following pattern

        Pattern for N = 4

        *
       ***
      *****
     *******
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + k; j++)
        {
            cout << "*";
        }
        cout << endl;
        k++;
    }
}