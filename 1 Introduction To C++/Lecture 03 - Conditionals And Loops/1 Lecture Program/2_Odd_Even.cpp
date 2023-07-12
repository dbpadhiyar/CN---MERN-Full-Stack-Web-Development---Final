#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter the Number";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "It's Even Number";
    }
    else
    {
        cout << "It's Odd Number";
    }
}