#include <iostream>
using namespace std;

int main()
{
    int k = 10;

    if (k == 10)
    {
        int k = 20;
        cout << "Inside K Value => " << k << endl;
    }
    cout << "Outside K Value => " << k;
}