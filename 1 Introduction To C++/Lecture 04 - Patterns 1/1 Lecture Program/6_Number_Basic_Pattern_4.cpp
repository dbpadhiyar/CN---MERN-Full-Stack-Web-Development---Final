#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = n;
        while (column > 0)
        {
            cout << column;
            column = column - 1;
        }
        cout << endl;
        row = row + 1;
    }
}