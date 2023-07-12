/*
    Number Star Pattern

    Print the following pattern for given number of rows.

    Input format :

    Line 1 : N (Total number of rows)

    Sample Input :
    5

        Sample Output :
        1234554321
        1234**4321
        123****321
        12******21
        1********1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int number = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > n - i + 1)
                cout << "*";
            else
                cout << j;
        }
        for (int k = n; k > 0; k--)
        {
            if (k > n - i + 1)
                cout << "*";
            else
                cout << k;
        }
        cout << endl;
    }
}