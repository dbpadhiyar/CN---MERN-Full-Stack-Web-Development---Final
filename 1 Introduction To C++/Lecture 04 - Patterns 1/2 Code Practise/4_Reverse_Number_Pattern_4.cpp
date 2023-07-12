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

    int i = 1;
    for (int j = 1; j <= n; j++)
    {
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        i++;
        cout << endl;
    }
}