/*

    Print the following pattern for the given number of rows.

    Pattern for N = 5

    E
    DE
    CDE
    BCDE
    ABCDE

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
        char c = 65 + n - i;
        for (int j = 1; j <= i; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
        k++;
    }
}
