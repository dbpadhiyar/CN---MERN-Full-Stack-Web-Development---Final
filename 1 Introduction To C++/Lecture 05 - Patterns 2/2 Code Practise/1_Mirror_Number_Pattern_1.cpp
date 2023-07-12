/*
    Print the following pattern for the given N number of rows.

    Pattern for N = 4

       1
      21
     321
    4321
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}