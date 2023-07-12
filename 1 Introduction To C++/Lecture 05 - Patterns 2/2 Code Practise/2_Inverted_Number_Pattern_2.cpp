/*
    Print the following pattern for the given N number of rows.

    Pattern for N = 4

        4444
        333
        22
        1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << n - i;
        }
        for (int s = 0; s <= i; s++)
        {
            cout << " ";
        }
        cout << endl;
    }
}