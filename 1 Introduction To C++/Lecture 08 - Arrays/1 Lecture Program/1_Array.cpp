#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int input[10];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < n; i = i + 2)
    {
        cout << input[i] << endl;
    }
}