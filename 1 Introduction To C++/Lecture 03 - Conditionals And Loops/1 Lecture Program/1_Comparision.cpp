#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter The Two Values" << endl;
    cin >> a >> b;

    if (a == b)
    {
        cout << "They are Equal" << endl;
    }
    else if (a > b)
    {
        cout << "A is Greater than b" << endl;
    }
    else
    {
        cout << "B is Greater than a" << endl;
    }
}