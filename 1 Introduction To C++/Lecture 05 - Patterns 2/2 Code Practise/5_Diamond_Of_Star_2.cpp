/*

    Print the following pattern for the given number of rows.
    Note: N is always odd.

    Pattern for N = 5

        *
       ***
      *****
       ***
        *
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int min = n / 2;
    int max = n - min;
    while (i <= n)
    {
        int increment = 1;
        while (i <= max)
        {
            int s = 1;
            while (s <= max - i)
            {
                cout << " ";
                s++;
            }
            int j = 1;
            while (j <= increment)
            {
                cout << "*";
                j++;
            }
            cout << endl;
            increment += 2;
            i++;
        }
        int decrement = n - 2;
        int m = 1;
        while (i > max && i <= n)
        {
            int s = 1;
            while (s <= m)
            {
                cout << " ";
                s++;
            }
            m++;
            int k = 1;
            while (k <= decrement)
            {
                cout << "*";
                k++;
            }
            cout << endl;
            decrement -= 2;
            i++;
        }
    }
}