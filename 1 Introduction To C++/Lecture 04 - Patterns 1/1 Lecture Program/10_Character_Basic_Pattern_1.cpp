#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int column = 1;
        char alpha = 'A';
        while (column <= n)
        {
            cout << alpha;
            alpha = alpha + 1;
            column = column + 1;
        }

        cout << endl;
        row = row + 1;
    }
}