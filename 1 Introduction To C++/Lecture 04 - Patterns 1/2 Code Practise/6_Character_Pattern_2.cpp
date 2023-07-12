/*
    Print the following pattern for the given N number of rows.

    Pattern for N = 4
    A
    BC
    CDE
    DEFG

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char c = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}