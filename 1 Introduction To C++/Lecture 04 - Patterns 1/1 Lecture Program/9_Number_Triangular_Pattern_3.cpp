#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int val = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << val;
            val = val + 1;
            column = column + 1;
        }

        cout << endl;
        row = row + 1;
    }
}