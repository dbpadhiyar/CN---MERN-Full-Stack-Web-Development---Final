/*

    Print the following pattern for the given number of rows.

    Pattern for N = 4

        1
       232
      34543
     4567654
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0;
    int k = 0;
    int l = 0;
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int space = 0; space < n - i; space++)
        {
            cout << " ";
        }
        for (k = i; k <= i + m; k++)
        {
            cout << k;
        }
        m++;
        for (l = p; l >= i; l--)
        {
            cout << l;
        }
        p += 2;
        cout << endl;
    }
}